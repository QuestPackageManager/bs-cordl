#pragma once
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Linq/zzzz__Buffer_1_impl.hpp"
#include "System/Linq/zzzz__Enumerable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Enumerable_def.hpp"
#include "System/Linq/zzzz__Enumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Linq/zzzz__IOrderedEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__Set_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable__Iterator_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__Iterator_1<TSource>::__get_threadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__Iterator_1<TSource>::__get_threadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__set_threadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___threadId = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__Iterator_1<TSource>::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__Iterator_1<TSource>::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__set_state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable__Iterator_1<TSource>::__get_current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable__Iterator_1<TSource>::__get_current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__Iterator_1<TSource>::__set_current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__Iterator_1<TSource>*>());
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable__Iterator_1<TSource>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__Iterator_1<TSource>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__Iterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__Iterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(), "Where", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__Iterator_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__Iterator_1<TSource>*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__Iterator_1<TSource>::__Enumerable__Iterator_1() {}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*
System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>(source, predicate));
}
template <typename TSource>
inline void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), "Dispose",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>*>::get(), "Where",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereEnumerableIterator_1<TSource>::__Enumerable__WhereEnumerableIterator_1() {}
template <typename TSource> constexpr ::ArrayW<TSource, ::Array<TSource>*>& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr ::ArrayW<TSource, ::Array<TSource>*> const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__set_source(::ArrayW<TSource, ::Array<TSource>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___index = value;
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::New_ctor(::ArrayW<TSource, ::Array<TSource>*> source,
                                                                                                                                        ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>(source, predicate));
}
template <typename TSource> inline void System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TSource, ::Array<TSource>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>*>::get(), "Where", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereArrayIterator_1<TSource>::__Enumerable__WhereArrayIterator_1() {}
template <typename TSource> constexpr ::System::Collections::Generic::List_1<TSource>*& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TSource>*> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__set_source(::System::Collections::Generic::List_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource>& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource> constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource> const& System::Linq::__Enumerable__WhereListIterator_1<TSource>::__get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource> constexpr void System::Linq::__Enumerable__WhereListIterator_1<TSource>::__set_enumerator(::System::Collections::Generic::__List_1__Enumerator<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___enumerator = value;
}
template <typename TSource>
inline ::System::Linq::__Enumerable__WhereListIterator_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::New_ctor(::System::Collections::Generic::List_1<TSource>* source,
                                                                                                                                      ::System::Func_2<TSource, bool>* predicate) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>(source, predicate));
}
template <typename TSource>
inline void System::Linq::__Enumerable__WhereListIterator_1<TSource>::_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate);
}
template <typename TSource> inline ::System::Linq::__Enumerable__Iterator_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(),
                                                                             "Clone", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable__WhereListIterator_1<TSource>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource>
template <typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Select(::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, selector);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::__Enumerable__WhereListIterator_1<TSource>::Where(::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereListIterator_1<TSource>*>::get(), "Where", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable__WhereListIterator_1<TSource>::__Enumerable__WhereListIterator_1() {}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__set_enumerator(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                        ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                 ::System::Func_2<TSource, bool>* predicate, ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(),
                                               "Select", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, TResult2>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>*>::get(), "Where",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectEnumerableIterator_2<TSource, TResult>::__Enumerable__WhereSelectEnumerableIterator_2() {}
template <typename TSource, typename TResult> constexpr ::ArrayW<TSource, ::Array<TSource>*>& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult> constexpr ::ArrayW<TSource, ::Array<TSource>*> const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__set_source(::ArrayW<TSource, ::Array<TSource>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_index() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__get_index() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___index;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__set_index(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___index = value;
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::New_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate,
                                                                                   ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::_ctor(::ArrayW<TSource, ::Array<TSource>*> source, ::System::Func_2<TSource, bool>* predicate,
                                                                                            ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TSource, ::Array<TSource>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, TResult2>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>*>::get(), "Where",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectArrayIterator_2<TSource, TResult>::__Enumerable__WhereSelectArrayIterator_2() {}
template <typename TSource, typename TResult> constexpr ::System::Collections::Generic::List_1<TSource>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<TSource>*> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__set_source(::System::Collections::Generic::List_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__set_predicate(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TResult>*> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__set_selector(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource>& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_enumerator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::__List_1__Enumerator<TSource> const& System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__get_enumerator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerator;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__set_enumerator(::System::Collections::Generic::__List_1__Enumerator<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___enumerator = value;
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*
System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::New_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                  ::System::Func_2<TSource, TResult>* selector) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>(source, predicate, selector));
}
template <typename TSource, typename TResult>
inline void System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::_ctor(::System::Collections::Generic::List_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate,
                                                                                           ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, predicate, selector);
}
template <typename TSource, typename TResult> inline ::System::Linq::__Enumerable__Iterator_1<TResult>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Clone() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), "Clone",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Enumerable__Iterator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
template <typename TResult2>
inline ::System::Collections::Generic::IEnumerable_1<TResult2>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Select(::System::Func_2<TResult, TResult2>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), "Select",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, TResult2>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult2>*, false>(this, ___internal_method, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::Where(::System::Func_2<TResult, bool>* predicate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>*>::get(), "Where",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TResult, bool>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(this, ___internal_method, predicate);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable__WhereSelectListIterator_2<TSource, TResult>::__Enumerable__WhereSelectListIterator_2() {}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__get_predicate1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__get_predicate1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate1;
}
template <typename TSource> constexpr void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__set_predicate1(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Func_2<TSource, bool>*& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__get_predicate2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, bool>*> const& System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__get_predicate2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___predicate2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__set_predicate2(::System::Func_2<TSource, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___predicate2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>* System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>());
}
template <typename TSource> inline void System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::_CombinePredicates_b__0(TSource x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>*>::get(), "<CombinePredicates>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable____c__DisplayClass6_0_1<TSource>::__Enumerable____c__DisplayClass6_0_1() {}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::System::Func_2<TMiddle, TResult>*& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__get_selector2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector2;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TMiddle, TResult>*> const& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__get_selector2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector2;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__set_selector2(::System::Func_2<TMiddle, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::System::Func_2<TSource, TMiddle>*& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__get_selector1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector1;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TMiddle>*> const& System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__get_selector1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector1;
}
template <typename TSource, typename TMiddle, typename TResult>
constexpr void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__set_selector1(::System::Func_2<TSource, TMiddle>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TMiddle, typename TResult>
inline ::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>* System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>());
}
template <typename TSource, typename TMiddle, typename TResult> inline void System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TMiddle, typename TResult> inline TResult System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::_CombineSelectors_b__0(TSource x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>*>::get(),
                                  "<CombineSelectors>b__0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename TSource, typename TMiddle, typename TResult> constexpr ::System::Linq::__Enumerable____c__DisplayClass7_0_3<TSource, TMiddle, TResult>::__Enumerable____c__DisplayClass7_0_3() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TSource, typename TResult>
constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TSource, typename TResult>
constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource, typename TResult> constexpr System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource, typename TResult> constexpr TResult& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource, typename TResult> constexpr TResult const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr int32_t& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource, typename TResult> constexpr int32_t const& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource, typename TResult> constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___selector;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set_selector(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___3__selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__selector;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___3__selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__selector;
}
template <typename TSource, typename TResult>
constexpr void
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___3__selector(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Collections::Generic::IEnumerator_1<TResult>*& System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TResult>*> const&
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource, typename TResult>
constexpr void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>(__1__state));
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline bool System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "<>m__Finally2", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline TResult System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline ::System::Object* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>*
System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TSource, typename TResult>
inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::System::Linq::__Enumerable___SelectManyIterator_d__17_2<TSource, TResult>::__Enumerable___SelectManyIterator_d__17_2() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___count = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__count = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___TakeIterator_d__25_1<TSource>::__Enumerable___TakeIterator_d__25_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___count = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__count = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get__e_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____e_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__get__e_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____e_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__set__e_5__2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____e_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>* System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___SkipIterator_d__31_1<TSource>::__Enumerable___SkipIterator_d__31_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(), "<>m__Finally2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ConcatIterator_d__59_1<TSource>::__Enumerable___ConcatIterator_d__59_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___DistinctIterator_d__68_1<TSource>::__Enumerable___DistinctIterator_d__68_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__m__Finally2() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(), "<>m__Finally2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___UnionIterator_d__71_1<TSource>::__Enumerable___UnionIterator_d__71_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___IntersectIterator_d__74_1<TSource>::__Enumerable___IntersectIterator_d__74_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEqualityComparer_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TSource>*> const&
System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__comparer;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___3__comparer(::System::Collections::Generic::IEqualityComparer_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set_second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__second() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__second() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__second;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___3__second(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__second)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get_first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set_first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__first() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___3__first() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__first;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___3__first(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__first)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Set_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get__set_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Set_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get__set_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____set_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set__set_5__2(::System::Linq::Set_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____set_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const& System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> inline ::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ExceptIterator_d__77_1<TSource>::__Enumerable___ExceptIterator_d__77_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Linq::Buffer_1<TSource>& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get__buffer_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buffer_5__2;
}
template <typename TSource> constexpr ::System::Linq::Buffer_1<TSource> const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get__buffer_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____buffer_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set__buffer_5__2(::System::Linq::Buffer_1<TSource> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____buffer_5__2 = value;
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get__i_5__3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__3;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__get__i_5__3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__3;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__set__i_5__3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____i_5__3 = value;
}
template <typename TSource> inline ::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___ReverseIterator_d__79_1<TSource>::__Enumerable___ReverseIterator_d__79_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::operator ::System::Collections::Generic::IEnumerable_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource> constexpr System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TSource>"
template <typename TSource> constexpr System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::operator ::System::Collections::Generic::IEnumerator_1<TSource>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TSource> constexpr System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TSource> constexpr System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set___2__current(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr int32_t& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr int32_t const& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set___3__source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get_defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValue;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get_defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultValue;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set_defaultValue(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr TSource& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___3__defaultValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__defaultValue;
}
template <typename TSource> constexpr TSource const& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get___3__defaultValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__defaultValue;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set___3__defaultValue(TSource value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__defaultValue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource> constexpr ::System::Collections::Generic::IEnumerator_1<TSource>*& System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get__e_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____e_5__2;
}
template <typename TSource>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TSource>*> const&
System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__get__e_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____e_5__2;
}
template <typename TSource> constexpr void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__set__e_5__2(::System::Collections::Generic::IEnumerator_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____e_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource>
inline ::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>* System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>(__1__state));
}
template <typename TSource> inline void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TSource> inline void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline bool System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline TSource System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_Collections_Generic_IEnumerator_TSource__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TSource>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(this, ___internal_method);
}
template <typename TSource> inline void System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Object* System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerator_1<TSource>* System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_Collections_Generic_IEnumerable_TSource__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TSource>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TSource>*, false>(this, ___internal_method);
}
template <typename TSource> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource> constexpr ::System::Linq::__Enumerable___DefaultIfEmptyIterator_d__95_1<TSource>::__Enumerable___DefaultIfEmptyIterator_d__95_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TResult> constexpr TResult& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr TResult const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set_source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set___3__source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerator*& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline ::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>(__1__state));
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Linq::__Enumerable___OfTypeIterator_d__97_1<TResult>::__Enumerable___OfTypeIterator_d__97_1() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::Generic::IEnumerable_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TResult>"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::Generic::IEnumerator_1<TResult>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TResult> constexpr System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TResult> constexpr TResult& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr TResult const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set___2__current(TResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr int32_t& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr int32_t const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TResult> constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set_source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerable*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___3__source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___3__source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__source;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set___3__source(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> constexpr ::System::Collections::IEnumerator*& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
template <typename TResult> constexpr void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__set___7__wrap1(::System::Collections::IEnumerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline ::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>(__1__state));
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(), "<>m__Finally1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline TResult System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_Generic_IEnumerator_TResult__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TResult>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Object* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Collections::Generic::IEnumerator_1<TResult>* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_Generic_IEnumerable_TResult__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TResult>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Linq::__Enumerable___CastIterator_d__99_1<TResult>::__Enumerable___CastIterator_d__99_1() {}
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)(int32_t)>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x281249c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2813960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::MoveNext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2813964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_Generic_IEnumerator_System_Int32__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerator_System_Int32__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28139c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x28139d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2813a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2813a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                 "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::__Enumerable___RangeIterator_d__115.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::System::Linq::__Enumerable___RangeIterator_d__115::*)()>(
    &::System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2813b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr System::Linq::__Enumerable___RangeIterator_d__115::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set___2__current(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____2__current = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___start = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get___3__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__start;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get___3__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__start;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set___3__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__start = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___count;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___count = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get___3__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get___3__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__count;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set___3__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__count = value;
}
constexpr int32_t& System::Linq::__Enumerable___RangeIterator_d__115::__get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
constexpr int32_t const& System::Linq::__Enumerable___RangeIterator_d__115::__get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____i_5__2;
}
constexpr void System::Linq::__Enumerable___RangeIterator_d__115::__set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____i_5__2 = value;
}
inline ::System::Linq::__Enumerable___RangeIterator_d__115* System::Linq::__Enumerable___RangeIterator_d__115::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Enumerable___RangeIterator_d__115*>(__1__state));
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Linq::__Enumerable___RangeIterator_d__115::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerator_System_Int32__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Int32>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                               "System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* System::Linq::__Enumerable___RangeIterator_d__115::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Enumerable___RangeIterator_d__115*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::__Enumerable___RangeIterator_d__115::__Enumerable___RangeIterator_d__115() {}
//  Writing Method size for method: ::System::Linq::Enumerable.Range
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (*)(int32_t, int32_t)>(&::System::Linq::Enumerable::Range)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x28123c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Range", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.RangeIterator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>* (*)(int32_t, int32_t)>(
    &::System::Linq::Enumerable::RangeIterator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2812414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "RangeIterator", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Sum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Sum)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x28124d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Sum", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Min)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2812800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Min
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Collections::Generic::IEnumerable_1<float_t>*)>(&::System::Linq::Enumerable::Min)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x2812b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Max)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2812ed4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Max
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::Collections::Generic::IEnumerable_1<float_t>*)>(&::System::Linq::Enumerable::Max)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x28131fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Enumerable.Average
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(::System::Collections::Generic::IEnumerable_1<int32_t>*)>(&::System::Linq::Enumerable::Average)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x28135ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Average", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Where(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                               ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Where",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Select(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Select",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource>
inline ::System::Func_2<TSource, bool>* System::Linq::Enumerable::CombinePredicates(::System::Func_2<TSource, bool>* predicate1, ::System::Func_2<TSource, bool>* predicate2) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CombinePredicates",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<TSource, bool>*, false>(nullptr, ___internal_method, predicate1, predicate2);
}
template <typename TSource, typename TMiddle, typename TResult>
inline ::System::Func_2<TSource, TResult>* System::Linq::Enumerable::CombineSelectors(::System::Func_2<TSource, TMiddle>* selector1, ::System::Func_2<TMiddle, TResult>* selector2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CombineSelectors",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMiddle>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TMiddle>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TMiddle, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMiddle>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Func_2<TSource, TResult>*, false>(nullptr, ___internal_method, selector1, selector2);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::SelectMany(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                    ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SelectMany",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource, typename TResult>
inline ::System::Collections::Generic::IEnumerable_1<TResult>*
System::Linq::Enumerable::SelectManyIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                             ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SelectManyIterator",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Take(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Take",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::TakeIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "TakeIterator",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Skip(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Skip",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::SkipIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t count) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SkipIterator",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, count);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::OrderBy(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OrderBy",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::OrderByDescending(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                  ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OrderByDescending",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource, typename TKey>
inline ::System::Linq::IOrderedEnumerable_1<TSource>* System::Linq::Enumerable::ThenBy(::System::Linq::IOrderedEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ThenBy",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IOrderedEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IOrderedEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource, typename TKey>
inline ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TSource>*>* System::Linq::Enumerable::GroupBy(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                                                     ::System::Func_2<TSource, TKey>* keySelector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "GroupBy",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TSource>*>*, false>(nullptr, ___internal_method, source, keySelector);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Concat(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Concat",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ConcatIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ConcatIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Distinct(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Distinct",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::DistinctIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                          ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "DistinctIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Union(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                               ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Union",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::UnionIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                       ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                       ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "UnionIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Intersect(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                   ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Intersect",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::IntersectIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                           ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                           ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "IntersectIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Except(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Except",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ExceptIterator(::System::Collections::Generic::IEnumerable_1<TSource>* first,
                                                                                                        ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                                                                        ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ExceptIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::Reverse(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Reverse",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::ReverseIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ReverseIterator",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource>
inline bool System::Linq::Enumerable::SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SequenceEqual",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second);
}
template <typename TSource>
inline bool System::Linq::Enumerable::SequenceEqual(::System::Collections::Generic::IEnumerable_1<TSource>* first, ::System::Collections::Generic::IEnumerable_1<TSource>* second,
                                                    ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SequenceEqual",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, first, second, comparer);
}
template <typename TSource> inline ::ArrayW<TSource, ::Array<TSource>*> System::Linq::Enumerable::ToArray(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToArray",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TSource, ::Array<TSource>*>, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline ::System::Collections::Generic::List_1<TSource>* System::Linq::Enumerable::ToList(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToList",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TSource>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>* System::Linq::Enumerable::ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                            ::System::Func_2<TSource, TKey>* keySelector,
                                                                                                            ::System::Func_2<TSource, TElement>* elementSelector) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToDictionary",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() },
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TElement>*, false>(nullptr, ___internal_method, source, keySelector, elementSelector);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::Dictionary_2<TKey, TElement>*
System::Linq::Enumerable::ToDictionary(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                       ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ToDictionary",
                                 std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() },
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TElement>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TElement>*, false>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::DefaultIfEmpty(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "DefaultIfEmpty",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, defaultValue);
}
template <typename TSource>
inline ::System::Collections::Generic::IEnumerable_1<TSource>* System::Linq::Enumerable::DefaultIfEmptyIterator(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource defaultValue) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "DefaultIfEmptyIterator",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TSource>*, false>(nullptr, ___internal_method, source, defaultValue);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::OfType(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OfType",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::OfTypeIterator(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "OfTypeIterator",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Cast(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Cast",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::CastIterator(::System::Collections::IEnumerable* source) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "CastIterator",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::First(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "First",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::First(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "First",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "FirstOrDefault",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::FirstOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "FirstOrDefault",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Last(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Last",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "LastOrDefault",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::LastOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "LastOrDefault",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Single(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Single",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SingleOrDefault",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::SingleOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "SingleOrDefault",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline TSource System::Linq::Enumerable::ElementAt(::System::Collections::Generic::IEnumerable_1<TSource>* source, int32_t index) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "ElementAt",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, index);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* System::Linq::Enumerable::Range(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Range", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(nullptr, ___internal_method, start, count);
}
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* System::Linq::Enumerable::RangeIterator(int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "RangeIterator", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*, false>(nullptr, ___internal_method, start, count);
}
template <typename TResult> inline ::System::Collections::Generic::IEnumerable_1<TResult>* System::Linq::Enumerable::Empty() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Empty",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TResult>*, false>(nullptr, ___internal_method);
}
template <typename TSource> inline bool System::Linq::Enumerable::Any(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Any",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline bool System::Linq::Enumerable::Any(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Any",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline bool System::Linq::Enumerable::All(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "All",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Count(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Count",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Count(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, bool>* predicate) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Count",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, bool>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, predicate);
}
template <typename TSource> inline bool System::Linq::Enumerable::Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Contains",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value);
}
template <typename TSource>
inline bool System::Linq::Enumerable::Contains(::System::Collections::Generic::IEnumerable_1<TSource>* source, TSource value, ::System::Collections::Generic::IEqualityComparer_1<TSource>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Contains",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, source, value, comparer);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Aggregate(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_3<TSource, TSource, TSource>* func) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Aggregate",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TSource, TSource, TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source, func);
}
template <typename TSource, typename TAccumulate>
inline TAccumulate System::Linq::Enumerable::Aggregate(::System::Collections::Generic::IEnumerable_1<TSource>* source, TAccumulate seed, ::System::Func_3<TAccumulate, TSource, TAccumulate>* func) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Aggregate",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAccumulate>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TAccumulate>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_3<TAccumulate, TSource, TAccumulate>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAccumulate>::get() }));
  return ::cordl_internals::RunMethodRethrow<TAccumulate, false>(nullptr, ___internal_method, source, seed, func);
}
inline int32_t System::Linq::Enumerable::Sum(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Sum", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Sum(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, int32_t>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Sum",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, selector);
}
inline int32_t System::Linq::Enumerable::Min(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
inline float_t System::Linq::Enumerable::Min(::System::Collections::Generic::IEnumerable_1<float_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Min(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource, typename TResult>
inline TResult System::Linq::Enumerable::Min(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Min",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(nullptr, ___internal_method, source, selector);
}
inline int32_t System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source);
}
inline float_t System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<float_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline TSource System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename TSource> inline int32_t System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, int32_t>* selector) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, int32_t>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, source, selector);
}
template <typename TSource, typename TResult>
inline TResult System::Linq::Enumerable::Max(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TResult>* selector) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Max",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(nullptr, ___internal_method, source, selector);
}
inline double_t System::Linq::Enumerable::Average(::System::Collections::Generic::IEnumerable_1<int32_t>* source) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Enumerable*>::get(), "Average", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, source);
}
// Ctor Parameters []
constexpr ::System::Linq::Enumerable::Enumerable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
