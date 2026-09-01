#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRNativeList_1.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename T> inline int32_t GlobalNamespace::OVRNativeList_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::set_Count(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "set_Count", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline int32_t GlobalNamespace::OVRNativeList_1<T>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OVRNativeList_1<T>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::_ctor(::System::Nullable_1<int32_t> initialCapacity, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::_ctor(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator);
}
template <typename T> inline T* GlobalNamespace::OVRNativeList_1<T>::PtrToElementAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "PtrToElementAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method, index);
}
template <typename T> inline T* GlobalNamespace::OVRNativeList_1<T>::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> GlobalNamespace::OVRNativeList_1<T>::AsNativeArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "AsNativeArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::Span_1<T> GlobalNamespace::OVRNativeList_1<T>::AsSpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "AsSpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> GlobalNamespace::OVRNativeList_1<T>::AsReadOnlySpan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "AsReadOnlySpan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1_Enumerator<T> GlobalNamespace::OVRNativeList_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1_Enumerator<T>>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::AddRange(::System::Collections::Generic::IEnumerable_1<T>* collection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "AddRange", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, collection);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::OVRNativeList_1<T>::get_Item(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::set_Item(int32_t index, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Jobs::JobHandle GlobalNamespace::OVRNativeList_1<T>::Dispose(::Unity::Jobs::JobHandle dependency) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, dependency);
}
template <typename T> inline T* GlobalNamespace::OVRNativeList_1<T>::op_Implicit_T_(::GlobalNamespace::OVRNativeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRNativeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, list);
}
template <typename T> inline ::System::Span_1<T> GlobalNamespace::OVRNativeList_1<T>::op_Implicit___System__Span_1_T_(::GlobalNamespace::OVRNativeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRNativeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<T>>(nullptr, ___internal_method, list);
}
template <typename T> inline ::System::ReadOnlySpan_1<T> GlobalNamespace::OVRNativeList_1<T>::op_Implicit___System__ReadOnlySpan_1_T_(::GlobalNamespace::OVRNativeList_1<T> list) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "op_Implicit", {}, { ::i2c::type_of<::GlobalNamespace::OVRNativeList_1<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<T>>(nullptr, ___internal_method, list);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OVRNativeList_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(*this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::OVRNativeList_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OVRNativeList_1<T>::EnsureCapacity(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRNativeList_1<T>>(), { "EnsureCapacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OVRNativeList_1<T>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OVRNativeList_1<T>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr GlobalNamespace::OVRNativeList_1<T>::operator ::System::Collections::Generic::IReadOnlyList_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyList_1<T>* GlobalNamespace::OVRNativeList_1<T>::i___System__Collections__Generic__IReadOnlyList_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::OVRNativeList_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OVRNativeList_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::OVRNativeList_1<T>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::OVRNativeList_1<T>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr GlobalNamespace::OVRNativeList_1<T>::operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* GlobalNamespace::OVRNativeList_1<T>::i___System__Collections__Generic__IReadOnlyCollection_1_T_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_array", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_allocator", ty:
// "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::OVRNativeList_1<T>::OVRNativeList_1(::Unity::Collections::NativeArray_1<T> _array, ::Unity::Collections::Allocator _allocator, int32_t _Count_k__BackingField) noexcept {
  this->_array = _array;
  this->_allocator = _allocator;
  this->_Count_k__BackingField = _Count_k__BackingField;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OVRNativeList_1<T>::OVRNativeList_1() {}
