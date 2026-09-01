#pragma once
// IWYU pragma private; include "UnityEngine\UI\Collections\IndexedSet_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_set_m_List(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>*& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_Dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dictionary;
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<T, int32_t>* const& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_Dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dictionary;
}
template <typename T> constexpr void UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_set_m_Dictionary(::System::Collections::Generic::Dictionary_2<T, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Dictionary = value;
}
template <typename T> constexpr int32_t& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_EnabledObjectCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledObjectCount;
}
template <typename T> constexpr int32_t const& UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_get_m_EnabledObjectCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EnabledObjectCount;
}
template <typename T> constexpr void UnityEngine::UI::Collections::IndexedSet_1<T>::__cordl_internal_set_m_EnabledObjectCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EnabledObjectCount = value;
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Add(T item, bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, isActive);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::AddUnique(T item, bool isActive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "AddUnique", {}, { ::i2c::type_of<T>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, isActive);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::EnableItem(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "EnableItem", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::DisableItem(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "DisableItem", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::UI::Collections::IndexedSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::UI::Collections::IndexedSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline int32_t UnityEngine::UI::Collections::IndexedSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UI::Collections::IndexedSet_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::UI::Collections::IndexedSet_1<T>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline int32_t UnityEngine::UI::Collections::IndexedSet_1<T>::IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Insert(int32_t index, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Swap(int32_t index1, int32_t index2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Swap", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index1, index2);
}
template <typename T> inline T UnityEngine::UI::Collections::IndexedSet_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::RemoveAll(::System::Predicate_1<T>* match) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "RemoveAll", {}, { ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, match);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::Sort(::System::Comparison_1<T>* sortLayoutFunction) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { "Sort", {}, { ::i2c::type_of<::System::Comparison_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sortLayoutFunction);
}
template <typename T> inline void UnityEngine::UI::Collections::IndexedSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Collections::IndexedSet_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::UI::Collections::IndexedSet_1<T>* UnityEngine::UI::Collections::IndexedSet_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Collections::IndexedSet_1<T>*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr UnityEngine::UI::Collections::IndexedSet_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* UnityEngine::UI::Collections::IndexedSet_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr UnityEngine::UI::Collections::IndexedSet_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* UnityEngine::UI::Collections::IndexedSet_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::UI::Collections::IndexedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::UI::Collections::IndexedSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::UI::Collections::IndexedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::UI::Collections::IndexedSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::UI::Collections::IndexedSet_1<T>::IndexedSet_1() {}
