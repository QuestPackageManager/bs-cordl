#pragma once
// IWYU pragma private; include "System/Linq/GroupedEnumerable_3.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/zzzz__GroupedEnumerable_3_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Linq/zzzz__IGrouping_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TSource, typename TKey, typename TElement>
constexpr System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::operator ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey,TElement>*>"
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::i___System__Collections__Generic__IEnumerable_1___System__Linq__IGrouping_2_TKey_TElement___() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Linq::IGrouping_2<TKey, TElement>*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TSource, typename TKey, typename TElement> constexpr System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::IEnumerable* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEnumerable_1<TSource>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TSource>*> const&
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___source, value);
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TKey>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_keySelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TKey>*> const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_keySelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keySelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_keySelector(::System::Func_2<TSource, TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___keySelector, value);
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Func_2<TSource, TElement>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_elementSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementSelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, TElement>*> const& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_elementSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementSelector;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_elementSelector(::System::Func_2<TSource, TElement>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___elementSelector, value);
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_comparer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource, typename TKey, typename TElement>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEqualityComparer_1<TKey>*> const&
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_get_comparer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___comparer;
}
template <typename TSource, typename TKey, typename TElement>
constexpr void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___comparer, value);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*
System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::New_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                     ::System::Func_2<TSource, TElement>* elementSelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>(source, keySelector, elementSelector, comparer));
}
template <typename TSource, typename TKey, typename TElement>
inline void System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::_ctor(::System::Collections::Generic::IEnumerable_1<TSource>* source, ::System::Func_2<TSource, TKey>* keySelector,
                                                                              ::System::Func_2<TSource, TElement>* elementSelector,
                                                                              ::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TKey>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TElement>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEqualityComparer_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, keySelector, elementSelector, comparer);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>::get(), "GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<TKey, TElement>*>*, false>(this, ___internal_method);
}
template <typename TSource, typename TKey, typename TElement>
inline ::System::Collections::IEnumerator* System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TSource, typename TKey, typename TElement> constexpr ::System::Linq::GroupedEnumerable_3<TSource, TKey, TElement>::GroupedEnumerable_3() {}
