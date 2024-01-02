#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IList"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::IList*() noexcept {
  return static_cast<::System::Collections::IList*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::ICollection"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::ICollection*() noexcept {
  return static_cast<::System::Collections::ICollection*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr System::Collections::ObjectModel::ReadOnlyCollection_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>*& System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<T>*> const& System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__set_list(::System::Collections::Generic::IList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___list)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Object*& System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__get__syncRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__get__syncRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____syncRoot;
}
template <typename T> constexpr void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::__set__syncRoot(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____syncRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* System::Collections::ObjectModel::ReadOnlyCollection_1<T>::New_ctor(::System::Collections::Generic::IList_1<T>* list) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(list));
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::_ctor(::System::Collections::Generic::IList_1<T>* list) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, list);
}
template <typename T> inline int32_t System::Collections::ObjectModel::ReadOnlyCollection_1<T>::get_Count() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "get_Count",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::ObjectModel::ReadOnlyCollection_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "get_Item",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::Contains(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "Contains",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<T, ::Array<T>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* System::Collections::ObjectModel::ReadOnlyCollection_1<T>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline int32_t System::Collections::ObjectModel::ReadOnlyCollection_1<T>::IndexOf(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "IndexOf",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_ICollection_T__get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.Generic.ICollection<T>.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_IList_T__get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.IList<T>.get_Item",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_IList_T__set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.IList<T>.set_Item",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_ICollection_T__Add(T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.ICollection<T>.Add",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_ICollection_T__Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.Generic.ICollection<T>.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_IList_T__Insert(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.IList<T>.Insert",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_ICollection_T__Remove(T value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.ICollection<T>.Remove",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_Generic_IList_T__RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.Generic.IList<T>.RemoveAt",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
template <typename T> inline ::System::Collections::IEnumerator* System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_ICollection_get_IsSynchronized() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.ICollection.get_IsSynchronized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_ICollection_get_SyncRoot() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.ICollection.get_SyncRoot", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.ICollection.CopyTo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array, index);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_get_IsFixedSize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.IList.get_IsFixedSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_get_IsReadOnly() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.IList.get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.get_Item",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, index);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_set_Item(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.set_Item", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline int32_t System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_Add(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.Add",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(),
                                               "System.Collections.IList.Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::IsCompatibleObject(::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "IsCompatibleObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
template <typename T> inline bool System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_Contains(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.Contains",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline int32_t System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_IndexOf(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.IndexOf",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_Insert(int32_t index, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_Remove(::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.Remove",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::ObjectModel::ReadOnlyCollection_1<T>::System_Collections_IList_RemoveAt(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>::get(), "System.Collections.IList.RemoveAt",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>::ReadOnlyCollection_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
