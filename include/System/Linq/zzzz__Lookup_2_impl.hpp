#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__Lookup_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/Linq/zzzz__Lookup_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TKey, typename TElement>
constexpr GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::operator ::System::Collections::Generic::IEnumerator_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<TElement>*
GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::i___System__Collections__Generic__IEnumerator_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr ::System::IDisposable* GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement> constexpr GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TKey, typename TElement> constexpr int32_t& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr int32_t const& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TElement> constexpr TElement& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement> constexpr TElement const& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement> constexpr void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__set___2__current(TElement value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement>
constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const&
GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__set___4__this(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr int32_t& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TKey, typename TElement> constexpr int32_t const& GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename TKey, typename TElement> constexpr void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename TKey, typename TElement>
inline ::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>* GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>(__1__state));
}
template <typename TKey, typename TElement> inline void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TElement> inline void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline TElement GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::System_Collections_Generic_IEnumerator_TElement__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TElement>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TElement, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Object* GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::GlobalNamespace::__Lookup_2__Grouping___GetEnumerator_d__7<TKey, TElement>::__Lookup_2__Grouping___GetEnumerator_d__7() {}
/// @brief Convert operator to "::System::Linq::IGrouping_2<TKey,TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2__Grouping<TKey, TElement>::operator ::System::Linq::IGrouping_2<TKey, TElement>*() noexcept {
  return static_cast<::System::Linq::IGrouping_2<TKey, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Linq::IGrouping_2<TKey,TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Linq::IGrouping_2<TKey, TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::i___System__Linq__IGrouping_2_TKey_TElement_() noexcept {
  return static_cast<::System::Linq::IGrouping_2<TKey, TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2__Grouping<TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2__Grouping<TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::__Lookup_2__Grouping<TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2__Grouping<TKey, TElement>::operator ::System::Collections::Generic::IList_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IList_1<TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::i___System__Collections__Generic__IList_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TElement>"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2__Grouping<TKey, TElement>::operator ::System::Collections::Generic::ICollection_1<TElement>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TElement>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::ICollection_1<TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::i___System__Collections__Generic__ICollection_1_TElement_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<TElement>*>(static_cast<void*>(this));
}
template <typename TKey, typename TElement> constexpr TKey& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TElement> constexpr TKey const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_key(TKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_hashCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_hashCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashCode;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_hashCode(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hashCode = value;
}
template <typename TKey, typename TElement> constexpr ::ArrayW<TElement, ::Array<TElement>*>& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
template <typename TKey, typename TElement> constexpr ::ArrayW<TElement, ::Array<TElement>*> const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_elements(::ArrayW<TElement, ::Array<TElement>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_hashNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashNext;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_hashNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hashNext;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_hashNext(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hashNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& System::Linq::__Lookup_2__Grouping<TKey, TElement>::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2__Grouping<TKey, TElement>::__set_next(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::Add(TElement element) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
template <typename TKey, typename TElement> inline ::System::Collections::Generic::IEnumerator_1<TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TElement>*, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Collections::IEnumerator* System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline TKey System::Linq::__Lookup_2__Grouping<TKey, TElement>::get_Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "get_Key", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                               "System.Collections.Generic.ICollection<TElement>.get_Count", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                               "System.Collections.Generic.ICollection<TElement>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Add(TElement item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.ICollection<TElement>.Add", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                               "System.Collections.Generic.ICollection<TElement>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Contains(TElement item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.ICollection<TElement>.Contains", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TElement>
inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__CopyTo(::ArrayW<TElement, ::Array<TElement>*> array, int32_t arrayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                               "System.Collections.Generic.ICollection<TElement>.CopyTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<TElement, ::Array<TElement>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, arrayIndex);
}
template <typename TKey, typename TElement> inline bool System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_ICollection_TElement__Remove(TElement item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.ICollection<TElement>.Remove", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__IndexOf(TElement item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.IList<TElement>.IndexOf", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__Insert(int32_t index, TElement item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(), "System.Collections.Generic.IList<TElement>.Insert",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.IList<TElement>.RemoveAt", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename TKey, typename TElement> inline TElement System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             "System.Collections.Generic.IList<TElement>.get_Item", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<TElement, false>(this, ___internal_method, index);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::System_Collections_Generic_IList_TElement__set_Item(int32_t index, TElement value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(), "System.Collections.Generic.IList<TElement>.set_Item",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TElement>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename TKey, typename TElement> inline ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* System::Linq::__Lookup_2__Grouping<TKey, TElement>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>());
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2__Grouping<TKey, TElement>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>::__Lookup_2__Grouping() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::operator ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::i___System__Collections__Generic__IEnumerator_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TElement> constexpr ::System::IDisposable* System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement> constexpr System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TElement>
constexpr ::System::Collections::IEnumerator* System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename TKey, typename TElement> constexpr ::System::Linq::IGrouping_2<TKey, TElement>*& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::IGrouping_2<TKey, TElement>*> const& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__set___2__current(::System::Linq::IGrouping_2<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2<TKey, TElement>*& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Lookup_2<TKey, TElement>*> const& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__set___4__this(::System::Linq::Lookup_2<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get__g_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____g_5__2;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__get__g_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____g_5__2;
}
template <typename TKey, typename TElement> constexpr void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__set__g_5__2(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____g_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement>
inline ::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>* System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>(__1__state));
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline bool System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey, typename TElement>
inline ::System::Linq::IGrouping_2<TKey, TElement>*
System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::System_Collections_Generic_IEnumerator_System_Linq_IGrouping_TKey_TElement___get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Linq.IGrouping<TKey,TElement>>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::IGrouping_2<TKey, TElement>*, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline void System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Object* System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2___GetEnumerator_d__12<TKey, TElement>::__Lookup_2___GetEnumerator_d__12() {}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr System::Linq::Lookup_2<TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::Lookup_2<TKey, TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr System::Linq::Lookup_2<TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TElement> constexpr ::System::Collections::IEnumerable* System::Linq::Lookup_2<TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TElement> constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Linq::Lookup_2<TKey, TElement>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const& System::Linq::Lookup_2<TKey, TElement>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement>
constexpr ::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*>& System::Linq::Lookup_2<TKey, TElement>::__get_groupings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupings;
}
template <typename TKey, typename TElement>
constexpr ::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> const&
System::Linq::Lookup_2<TKey, TElement>::__get_groupings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___groupings;
}
template <typename TKey, typename TElement>
constexpr void
System::Linq::Lookup_2<TKey, TElement>::__set_groupings(::ArrayW<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, ::Array<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___groupings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr ::System::Linq::__Lookup_2__Grouping<TKey, TElement>*& System::Linq::Lookup_2<TKey, TElement>::__get_lastGrouping() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastGrouping;
}
template <typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*> const& System::Linq::Lookup_2<TKey, TElement>::__get_lastGrouping() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastGrouping;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__set_lastGrouping(::System::Linq::__Lookup_2__Grouping<TKey, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastGrouping)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TElement> constexpr int32_t& System::Linq::Lookup_2<TKey, TElement>::__get_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr int32_t const& System::Linq::Lookup_2<TKey, TElement>::__get_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___count;
}
template <typename TKey, typename TElement> constexpr void System::Linq::Lookup_2<TKey, TElement>::__set_count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___count = value;
}
template <typename TKey, typename TElement>
template <typename TSource>
inline ::System::Linq::Lookup_2<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::Create(::System::Collections::Generic::IEnumerable_1<TSource>* source,
                                                                                                ::System::Func_2<TSource, TKey>* keySelector, ::System::Func_2<TSource, TElement>* elementSelector,
                                                                                                ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), "Create",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::Lookup_2<TKey, TElement>*, false>(nullptr, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TKey, typename TElement>
inline ::System::Linq::Lookup_2<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::New_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::Lookup_2<TKey, TElement>*>(comparer));
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2<TKey, TElement>::_ctor(::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparer);
}
template <typename TKey, typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* System::Linq::Lookup_2<TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline ::System::Collections::IEnumerator* System::Linq::Lookup_2<TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename TKey, typename TElement> inline int32_t System::Linq::Lookup_2<TKey, TElement>::InternalGetHashCode(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), "InternalGetHashCode",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TElement> inline ::System::Linq::__Lookup_2__Grouping<TKey, TElement>* System::Linq::Lookup_2<TKey, TElement>::GetGrouping(TKey key, bool create) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), "GetGrouping", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::__Lookup_2__Grouping<TKey, TElement>*, false>(this, ___internal_method, key, create);
}
template <typename TKey, typename TElement> inline void System::Linq::Lookup_2<TKey, TElement>::Resize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Lookup_2<TKey, TElement>*>::get(), "Resize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TElement> constexpr ::System::Linq::Lookup_2<TKey, TElement>::Lookup_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
