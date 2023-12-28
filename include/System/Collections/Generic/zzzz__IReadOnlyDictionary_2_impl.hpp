#pragma once
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IReadOnlyCollection_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<
    ::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey, TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> inline bool System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>::TryGetValue(TKey key, ByRef<TValue> value) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
template <typename TKey, typename TValue> inline TValue System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>::get_Item(TKey key) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IReadOnlyDictionary_2<TKey, TValue>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, key);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
