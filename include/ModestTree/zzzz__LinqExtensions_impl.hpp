#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "ModestTree/zzzz__LinqExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "ModestTree/zzzz__LinqExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr ModestTree::__LinqExtensions___Yield_d__0_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr int32_t& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr int32_t const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
template <typename T> constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
template <typename T> constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___3__item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__item;
}
template <typename T> constexpr T const& ModestTree::__LinqExtensions___Yield_d__0_1<T>::__get___3__item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__item;
}
template <typename T> constexpr void ModestTree::__LinqExtensions___Yield_d__0_1<T>::__set___3__item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__item)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::ModestTree::__LinqExtensions___Yield_d__0_1<T>* ModestTree::__LinqExtensions___Yield_d__0_1<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>(__1__state));
}
template <typename T> inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool ModestTree::__LinqExtensions___Yield_d__0_1<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                               "System.Collections.Generic.IEnumerable<T>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* ModestTree::__LinqExtensions___Yield_d__0_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions___Yield_d__0_1<T>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::ModestTree::__LinqExtensions___Yield_d__0_1<T>::__LinqExtensions___Yield_d__0_1() {}
template <typename T> inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9(::ModestTree::__LinqExtensions____c__8_1<T>* value) {
  ::cordl_internals::setStaticField<::ModestTree::__LinqExtensions____c__8_1<T>*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(
      std::forward<::ModestTree::__LinqExtensions____c__8_1<T>*>(value));
}
template <typename T> inline ::ModestTree::__LinqExtensions____c__8_1<T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9() {
  return ::cordl_internals::getStaticField<::ModestTree::__LinqExtensions____c__8_1<T>*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template <typename T> inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_0(::System::Func_2<T, T>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<T, T>*, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(
      std::forward<::System::Func_2<T, T>*>(value));
}
template <typename T> inline ::System::Func_2<T, T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<T, T>*, "<>9__8_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template <typename T> inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_1(::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>*, "<>9__8_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(
      std::forward<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, bool>*, "<>9__8_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template <typename T> inline void ModestTree::__LinqExtensions____c__8_1<T>::setStaticF___9__8_2(::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>*, "<>9__8_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>(
      std::forward<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>*>(value));
}
template <typename T> inline ::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>* ModestTree::__LinqExtensions____c__8_1<T>::getStaticF___9__8_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::IGrouping_2<T, T>*, T>*, "<>9__8_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get>();
}
template <typename T> inline ::ModestTree::__LinqExtensions____c__8_1<T>* ModestTree::__LinqExtensions____c__8_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions____c__8_1<T>*>());
}
template <typename T> inline void ModestTree::__LinqExtensions____c__8_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline T ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_0(T x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(), "<GetDuplicates>b__8_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, x);
}
template <typename T> inline bool ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_1(::System::Linq::IGrouping_2<T, T>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(), "<GetDuplicates>b__8_1", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
template <typename T> inline T ModestTree::__LinqExtensions____c__8_1<T>::_GetDuplicates_b__8_2(::System::Linq::IGrouping_2<T, T>* x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__8_1<T>*>::get(), "<GetDuplicates>b__8_2", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::IGrouping_2<T, T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename T> constexpr ::ModestTree::__LinqExtensions____c__8_1<T>::__LinqExtensions____c__8_1() {}
template <typename T> constexpr T& ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>* ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>());
}
template <typename T> inline void ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::_ContainsItem_b__0(T x) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>*>::get(), "<ContainsItem>b__0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
template <typename T> constexpr ::ModestTree::__LinqExtensions____c__DisplayClass10_0_1<T>::__LinqExtensions____c__DisplayClass10_0_1() {}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::Yield(T item) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "Yield",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, item);
}
template <typename TSource> inline TSource ModestTree::LinqExtensions::OnlyOrDefault(::System::Collections::Generic::IEnumerable_1<TSource>* source) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "OnlyOrDefault",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<TSource, false>(nullptr, ___internal_method, source);
}
template <typename T> inline bool ModestTree::LinqExtensions::HasAtLeast(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "HasAtLeast",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template <typename T> inline bool ModestTree::LinqExtensions::HasMoreThan(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "HasMoreThan",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template <typename T> inline bool ModestTree::LinqExtensions::HasLessThan(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "HasLessThan",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template <typename T> inline bool ModestTree::LinqExtensions::HasAtMost(::System::Collections::Generic::IEnumerable_1<T>* enumerable, int32_t amount) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "HasAtMost",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable, amount);
}
template <typename T> inline bool ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::List_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "IsEmpty",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list);
}
template <typename T> inline bool ModestTree::LinqExtensions::IsEmpty(::System::Collections::Generic::IEnumerable_1<T>* enumerable) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "IsEmpty",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, enumerable);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::GetDuplicates(::System::Collections::Generic::IEnumerable_1<T>* list) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "GetDuplicates",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, list);
}
template <typename T> inline ::System::Collections::Generic::IEnumerable_1<T>* ModestTree::LinqExtensions::Except(::System::Collections::Generic::IEnumerable_1<T>* list, T item) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "Except",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<T>*, false>(nullptr, ___internal_method, list, item);
}
template <typename T> inline bool ModestTree::LinqExtensions::ContainsItem(::System::Collections::Generic::IEnumerable_1<T>* list, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ModestTree::LinqExtensions*>::get(), "ContainsItem",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, list, value);
}
// Ctor Parameters []
constexpr ::ModestTree::LinqExtensions::LinqExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
