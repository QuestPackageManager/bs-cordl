#pragma once
#include "IntervalTree/zzzz__IIntervalTree_2_def.hpp"
#include "IntervalTree/zzzz__RangeValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr IntervalTree::IIntervalTree_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*
IntervalTree::IIntervalTree_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___IntervalTree__RangeValuePair_2_TKey_TValue__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::IntervalTree::RangeValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr IntervalTree::IIntervalTree_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* IntervalTree::IIntervalTree_2<TKey, TValue>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::get_Values() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t IntervalTree::IIntervalTree_2<TKey, TValue>::get_Count() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::Query(TKey value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::IEnumerable_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::Query(TKey from, TKey to) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline ::System::Collections::Generic::List_1<TValue>* IntervalTree::IIntervalTree_2<TKey, TValue>::QueryWithCount(TKey from, TKey to) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<TValue>*, false>(this, ___internal_method, from, to);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Add(TKey from, TKey to, TValue value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to, value);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Remove(TValue item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Remove(::System::Collections::Generic::IEnumerable_1<TValue>* items) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, items);
}
template <typename TKey, typename TValue> inline void IntervalTree::IIntervalTree_2<TKey, TValue>::Clear() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::IntervalTree::IIntervalTree_2<TKey, TValue>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
