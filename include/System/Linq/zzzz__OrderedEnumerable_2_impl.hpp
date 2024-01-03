#pragma once
#include "System/Linq/zzzz__OrderedEnumerable_1_impl.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__set_parent(::System::Linq::OrderedEnumerable_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement, TKey>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__set_keySelector(::System::Func_2<TElement, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keySelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___comparer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TElement, typename TKey> constexpr bool& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_descending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr bool const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__get_descending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__set_descending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descending = value;
}
template <typename TElement, typename TKey>
inline ::System::Linq::OrderedEnumerable_2<TElement, TKey>* System::Linq::OrderedEnumerable_2<TElement, TKey>::New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source,
                                                                                                                        ::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                        ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>(source, keySelector, comparer, descending));
}
template <typename TElement, typename TKey>
inline void System::Linq::OrderedEnumerable_2<TElement, TKey>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector,
                                                                     ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TElement>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TElement, TKey>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IComparer_1<TKey>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, keySelector, comparer, descending);
}
template <typename TElement, typename TKey>
inline ::System::Linq::EnumerableSorter_1<TElement>* System::Linq::OrderedEnumerable_2<TElement, TKey>::GetEnumerableSorter(::System::Linq::EnumerableSorter_1<TElement>* next) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Linq::EnumerableSorter_1<TElement>*, false>(this, ___internal_method, next);
}
// Ctor Parameters []
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_2<TElement, TKey>::OrderedEnumerable_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
