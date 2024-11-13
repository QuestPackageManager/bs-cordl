#pragma once
// IWYU pragma private; include "System/Linq/OrderedEnumerable_2.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_impl.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Linq/zzzz__EnumerableSorter_1_def.hpp"
#include "System/Linq/zzzz__OrderedEnumerable_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TElement, typename TKey> constexpr ::System::Linq::OrderedEnumerable_1<TElement>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Linq::OrderedEnumerable_1<TElement>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___parent;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_parent(::System::Linq::OrderedEnumerable_1<TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___parent, value);
}
template <typename TElement, typename TKey> constexpr ::System::Func_2<TElement, TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TElement, TKey>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_keySelector(::System::Func_2<TElement, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___keySelector, value);
}
template <typename TElement, typename TKey> constexpr ::System::Collections::Generic::IComparer_1<TKey>*& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IComparer_1<TKey>*> const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___comparer, value);
}
template <typename TElement, typename TKey> constexpr bool& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_descending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr bool const& System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_get_descending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___descending;
}
template <typename TElement, typename TKey> constexpr void System::Linq::OrderedEnumerable_2<TElement, TKey>::__cordl_internal_set_descending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___descending = value;
}
template <typename TElement, typename TKey>
inline ::System::Linq::OrderedEnumerable_2<TElement, TKey>* System::Linq::OrderedEnumerable_2<TElement, TKey>::New_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source,
                                                                                                                        ::System::Func_2<TElement, TKey>* keySelector,
                                                                                                                        ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>(source, keySelector, comparer, descending));
}
template <typename TElement, typename TKey>
inline void System::Linq::OrderedEnumerable_2<TElement, TKey>::_ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source, ::System::Func_2<TElement, TKey>* keySelector,
                                                                     ::System::Collections::Generic::IComparer_1<TKey>* comparer, bool descending) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::OrderedEnumerable_2<TElement, TKey>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TElement>*>::get(),
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
