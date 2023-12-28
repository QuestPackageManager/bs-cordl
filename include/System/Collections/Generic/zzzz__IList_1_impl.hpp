#pragma once
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::Generic::IList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::Generic::IList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::Generic::IList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
template <typename T> inline T System::Collections::Generic::IList_1<T>::get_Item(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IList_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Collections::Generic::IList_1<T>::set_Item(int32_t index, T value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IList_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline int32_t System::Collections::Generic::IList_1<T>::IndexOf(T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IList_1<T>*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, item);
}
template <typename T> inline void System::Collections::Generic::IList_1<T>::Insert(int32_t index, T item) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IList_1<T>*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, item);
}
template <typename T> inline void System::Collections::Generic::IList_1<T>::RemoveAt(int32_t index) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::Generic::IList_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
