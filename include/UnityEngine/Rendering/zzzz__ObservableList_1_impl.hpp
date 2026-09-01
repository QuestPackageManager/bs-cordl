#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ObservableList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ObservableList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/Rendering/zzzz__ListChangedEventHandler_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>*& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_m_List() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* const& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_m_List() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_List;
}
template <typename T> constexpr void UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_set_m_List(::System::Collections::Generic::IList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_List = value;
}
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventHandler_1<T>*& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_ItemAdded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ItemAdded;
}
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventHandler_1<T>* const& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_ItemAdded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ItemAdded;
}
template <typename T> constexpr void UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_set_ItemAdded(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ItemAdded = value;
}
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventHandler_1<T>*& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_ItemRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ItemRemoved;
}
template <typename T> constexpr ::UnityEngine::Rendering::ListChangedEventHandler_1<T>* const& UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_get_ItemRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ItemRemoved;
}
template <typename T> constexpr void UnityEngine::Rendering::ObservableList_1<T>::__cordl_internal_set_ItemRemoved(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ItemRemoved = value;
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::add_ItemAdded(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(),
                                                                                         { "add_ItemAdded", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventHandler_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::remove_ItemAdded(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(),
                                                                                         { "remove_ItemAdded", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventHandler_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::add_ItemRemoved(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(),
                                                                                         { "add_ItemRemoved", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventHandler_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::remove_ItemRemoved(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(),
                                                                                         { "remove_ItemRemoved", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventHandler_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline T UnityEngine::Rendering::ObservableList_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObservableList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::ObservableList_1<T>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collection);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::OnEvent(::UnityEngine::Rendering::ListChangedEventHandler_1<T>* e, int32_t index, T item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(),
                                              { "OnEvent", {}, { ::i2c::type_of<::UnityEngine::Rendering::ListChangedEventHandler_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, index, item);
}
template <typename T> inline bool UnityEngine::Rendering::ObservableList_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObservableList_1<T>::IndexOf(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::Add(::ArrayW<T> items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Add", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, items);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::Insert(int32_t index, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline bool UnityEngine::Rendering::ObservableList_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline int32_t UnityEngine::Rendering::ObservableList_1<T>::Remove(::ArrayW<T> items) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Remove", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, items);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::ObservableList_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* UnityEngine::Rendering::ObservableList_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* UnityEngine::Rendering::ObservableList_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ObservableList_1<T>*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::ObservableList_1<T>* UnityEngine::Rendering::ObservableList_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObservableList_1<T>*>());
}
template <typename T> inline ::UnityEngine::Rendering::ObservableList_1<T>* UnityEngine::Rendering::ObservableList_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObservableList_1<T>*>(capacity));
}
template <typename T> inline ::UnityEngine::Rendering::ObservableList_1<T>* UnityEngine::Rendering::ObservableList_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ObservableList_1<T>*>(collection));
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr UnityEngine::Rendering::ObservableList_1<T>::operator ::System::Collections::Generic::IList_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IList_1<T>* UnityEngine::Rendering::ObservableList_1<T>::i___System__Collections__Generic__IList_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IList_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr UnityEngine::Rendering::ObservableList_1<T>::operator ::System::Collections::Generic::ICollection_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::ICollection_1<T>* UnityEngine::Rendering::ObservableList_1<T>::i___System__Collections__Generic__ICollection_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::ICollection_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr UnityEngine::Rendering::ObservableList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* UnityEngine::Rendering::ObservableList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr UnityEngine::Rendering::ObservableList_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* UnityEngine::Rendering::ObservableList_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::ObservableList_1<T>::ObservableList_1() {}
