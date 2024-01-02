#pragma once
#include "System/Linq/zzzz__EnumerableSorter_1_impl.hpp"
#include "System/Linq/zzzz__EnumerableSorter_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement, TKey>*> const& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__set_keySelector(::System::Func_2<TElement, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keySelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr bool& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_descending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr bool const& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_descending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__set_descending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descending = value;
}
template <typename TElement, typename TKey> constexpr ::System::Linq::EnumerableSorter_1<TElement>*& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::EnumerableSorter_1<TElement>*> const& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__set_next(::System::Linq::EnumerableSorter_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr ::ArrayW<TKey, ::Array<TKey>*>& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TElement, typename TKey> constexpr ::ArrayW<TKey, ::Array<TKey>*> const& System::Linq::EnumerableSorter_2<TElement, TKey>::__get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keys;
}
template <typename TElement, typename TKey> constexpr void System::Linq::EnumerableSorter_2<TElement, TKey>::__set_keys(::ArrayW<TKey, ::Array<TKey>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey>
inline ::System::Linq::EnumerableSorter_2<TElement, TKey>* System::Linq::EnumerableSorter_2<TElement, TKey>::New_ctor(::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                      ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending,
                                                                                                                      ::System::Linq::EnumerableSorter_1<TElement>* next) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::EnumerableSorter_2<TElement, TKey>*>(keySelector, comparer, descending, next));
}
template <typename TElement, typename TKey>
inline void System::Linq::EnumerableSorter_2<TElement, TKey>::_ctor(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending,
                                                                    ::System::Linq::EnumerableSorter_1<TElement>* next) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement, TKey>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement, TKey>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::EnumerableSorter_1<TElement>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keySelector, comparer, descending, next);
}
template <typename TElement, typename TKey> inline void System::Linq::EnumerableSorter_2<TElement, TKey>::ComputeKeys(::ArrayW<TElement, ::Array<TElement>*> elements, int32_t count) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement, TKey>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elements, count);
}
template <typename TElement, typename TKey> inline int32_t System::Linq::EnumerableSorter_2<TElement, TKey>::CompareKeys(int32_t index1, int32_t index2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::EnumerableSorter_2<TElement, TKey>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, index1, index2);
}
// Ctor Parameters []
template <typename TElement, typename TKey> constexpr ::System::Linq::EnumerableSorter_2<TElement, TKey>::EnumerableSorter_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
