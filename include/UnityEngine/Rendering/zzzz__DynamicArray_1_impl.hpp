#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\DynamicArray_1.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__DynamicArray_1_def.hpp"
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1_Iterator<T>::_ctor(::UnityEngine::Rendering::DynamicArray_1<T>* setOwner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_Iterator<T>>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setOwner);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::DynamicArray_1_Iterator<T>::get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_Iterator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DynamicArray_1_Iterator<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_Iterator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1_Iterator<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_Iterator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
template <typename T> constexpr ::UnityEngine::Rendering::DynamicArray_1_Iterator<T>::DynamicArray_1_Iterator(::UnityEngine::Rendering::DynamicArray_1<T>* owner, int32_t index) noexcept {
  this->owner = owner;
  this->index = index;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DynamicArray_1_Iterator<T>::DynamicArray_1_Iterator() {}
template <typename T>
inline void UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::_ctor(::UnityEngine::Rendering::DynamicArray_1<T>* setOwner, int32_t first, int32_t numItems) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, setOwner, first, numItems);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "owner", ty: "::UnityEngine::Rendering::DynamicArray_1<T>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "index", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "first", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::RangeEnumerable_DynamicArray_1_RangeIterator(::UnityEngine::Rendering::DynamicArray_1<T>* owner, int32_t index,
                                                                                                                                  int32_t first, int32_t last) noexcept {
  this->owner = owner;
  this->index = index;
  this->first = first;
  this->last = last;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>::RangeEnumerable_DynamicArray_1_RangeIterator() {}
template <typename T> inline ::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T> UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "iterator", ty: "::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>::DynamicArray_1_RangeEnumerable(::UnityEngine::Rendering::RangeEnumerable_DynamicArray_1_RangeIterator<T> iterator) noexcept {
  this->iterator = iterator;
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>::DynamicArray_1_RangeEnumerable() {}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::Invoke(T x, T y) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x, y);
}
template <typename T> inline ::System::IAsyncResult* UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::BeginInvoke(T x, T y, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, x, y, callback, object);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
template <typename T>
inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>* UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>*>(object, method));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DynamicArray_1_SortComparer<T>::DynamicArray_1_SortComparer() {}
template <typename T> constexpr ::ArrayW<T>& UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_get_m_Array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Array;
}
template <typename T> constexpr ::ArrayW<T> const& UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_get_m_Array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Array;
}
template <typename T> constexpr void UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_set_m_Array(::ArrayW<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Array = value;
}
template <typename T> constexpr int32_t& UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_get__size_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
template <typename T> constexpr int32_t const& UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_get__size_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____size_k__BackingField;
}
template <typename T> constexpr void UnityEngine::Rendering::DynamicArray_1<T>::__cordl_internal_set__size_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____size_k__BackingField = value;
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::set_size(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "set_size", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::get_capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "get_capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::_ctor(int32_t capacity, bool resize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, resize);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::_ctor(::UnityEngine::Rendering::DynamicArray_1<T>* deepCopy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deepCopy);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::Rendering::DynamicArray_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::Add(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Add", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::AddRange(::UnityEngine::Rendering::DynamicArray_1<T>* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "AddRange", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::Insert(int32_t index, T item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, item);
}
template <typename T> inline bool UnityEngine::Rendering::DynamicArray_1<T>::Remove(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Remove", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::RemoveRange(int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "RemoveRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, count);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::FindIndex(int32_t startIndex, int32_t count, ::System::Predicate_1<T>* match) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(),
                                                           { "FindIndex", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Predicate_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, startIndex, count, match);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::IndexOf(T item, int32_t index, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(),
                                                                                         { "IndexOf", {}, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item, index, count);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::IndexOf(T item, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "IndexOf", {}, { ::i2c::type_of<T>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item, index);
}
template <typename T> inline int32_t UnityEngine::Rendering::DynamicArray_1<T>::IndexOf(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "IndexOf", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, item);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::Resize(int32_t newSize, bool keepContent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Resize", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize, keepContent);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::ResizeAndClear(int32_t newSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "ResizeAndClear", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSize);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::Reserve(int32_t newCapacity, bool keepContent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "Reserve", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCapacity, keepContent);
}
template <typename T> inline ::by_ref<T> UnityEngine::Rendering::DynamicArray_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, index);
}
template <typename T> inline ::ArrayW<T> UnityEngine::Rendering::DynamicArray_1<T>::op_Implicit___ArrayW_T_(::UnityEngine::Rendering::DynamicArray_1<T>* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, array);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> UnityEngine::Rendering::DynamicArray_1<T>::op_Implicit___System__ReadOnlySpan_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, array);
}
template <typename T> inline ::System::Span_1<T> UnityEngine::Rendering::DynamicArray_1<T>::op_Implicit___System__Span_1_T_(::UnityEngine::Rendering::DynamicArray_1<T>* array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Rendering::DynamicArray_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, array);
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1_Iterator<T> UnityEngine::Rendering::DynamicArray_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicArray_1_Iterator<T>>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T> UnityEngine::Rendering::DynamicArray_1<T>::SubRange(int32_t first, int32_t numItems) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "SubRange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DynamicArray_1_RangeEnumerable<T>>(this, ___internal_method, first, numItems);
}
template <typename T> inline void UnityEngine::Rendering::DynamicArray_1<T>::BumpVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DynamicArray_1<T>*>(), { "BumpVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1<T>* UnityEngine::Rendering::DynamicArray_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DynamicArray_1<T>*>());
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1<T>* UnityEngine::Rendering::DynamicArray_1<T>::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DynamicArray_1<T>*>(size));
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1<T>* UnityEngine::Rendering::DynamicArray_1<T>::New_ctor(int32_t capacity, bool resize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DynamicArray_1<T>*>(capacity, resize));
}
template <typename T> inline ::UnityEngine::Rendering::DynamicArray_1<T>* UnityEngine::Rendering::DynamicArray_1<T>::New_ctor(::UnityEngine::Rendering::DynamicArray_1<T>* deepCopy) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DynamicArray_1<T>*>(deepCopy));
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::Rendering::DynamicArray_1<T>::DynamicArray_1() {}
