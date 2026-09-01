#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\InputControlList_1.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::_ctor(::UnityEngine::InputSystem::InputControlList_1<TControl> list) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TControl>(*this, ___internal_method);
}
template <typename TControl> inline ::System::Object* UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::operator ::System::Collections::Generic::IEnumerator_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::IEnumerator_1<TControl>* UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::i___System__Collections__Generic__IEnumerator_1_TControl_() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TControl> constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TControl> constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Indices", ty: "uint64_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_Current", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename TControl>
constexpr ::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::InputControlList_1_Enumerator(uint64_t* m_Indices, int32_t m_Count, int32_t m_Current) noexcept {
  this->m_Indices = m_Indices;
  this->m_Count = m_Count;
  this->m_Current = m_Current;
}
// Ctor Parameters []
template <typename TControl> constexpr ::UnityEngine::InputSystem::InputControlList_1_Enumerator<TControl>::InputControlList_1_Enumerator() {}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "get_IsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlList_1<TControl>::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TControl>(*this, ___internal_method, index);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::set_Item(int32_t index, TControl value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "set_Item", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, value);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::Unity::Collections::Allocator allocator, int32_t initialCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, allocator, initialCapacity);
}
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::System::Collections::Generic::IEnumerable_1<TControl>* values, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TControl>*>(), ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values, allocator);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::_ctor(::ArrayW<TControl> values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<TControl>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, values);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Resize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Add(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Add", {}, { ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
template <typename TControl>
template <typename TList>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AddSlice(TList list, int32_t count, int32_t destinationIndex, int32_t sourceIndex) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                       { "AddSlice", { ::i2c::class_of<TList>() }, { ::i2c::type_of<TList>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TList>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list, count, destinationIndex, sourceIndex);
}
template <typename TControl>
inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AddRange(::System::Collections::Generic::IEnumerable_1<TControl>* list, int32_t count, int32_t destinationIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                       { "AddRange", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<TControl>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, list, count, destinationIndex);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Remove(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Remove", {}, { ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::RemoveAt(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "RemoveAt", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::CopyTo(::ArrayW<TControl> array, int32_t arrayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<TControl>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, arrayIndex);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "IndexOf", {}, { ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, item);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputControlList_1<TControl>::IndexOf(TControl item, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                                                         { "IndexOf", {}, { ::i2c::type_of<TControl>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, item, startIndex, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Insert(int32_t index, TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Insert", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, item);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Contains", {}, { ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item);
}
template <typename TControl> inline bool UnityEngine::InputSystem::InputControlList_1<TControl>::Contains(TControl item, int32_t startIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                                                         { "Contains", {}, { ::i2c::type_of<TControl>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, item, startIndex, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::SwapElements(int32_t index1, int32_t index2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "SwapElements", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index1, index2);
}
template <typename TControl> template <typename TCompare> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Sort(int32_t startIndex, int32_t count, TCompare comparer) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                           { "Sort", { ::i2c::class_of<TCompare>() }, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<TCompare>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TCompare>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startIndex, count, comparer);
}
template <typename TControl> inline ::ArrayW<TControl> UnityEngine::InputSystem::InputControlList_1<TControl>::ToArray(bool dispose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "ToArray", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TControl>>(*this, ___internal_method, dispose);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::AppendTo(::by_ref<::ArrayW<TControl>> array, ::by_ref<int32_t> count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(),
                                                                                         { "AppendTo", {}, { ::i2c::type_of<::by_ref<::ArrayW<TControl>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, count);
}
template <typename TControl> inline void UnityEngine::InputSystem::InputControlList_1<TControl>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TControl> inline ::System::Collections::Generic::IEnumerator_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TControl>*>(*this, ___internal_method);
}
template <typename TControl> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::InputControlList_1<TControl>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename TControl> inline ::StringW UnityEngine::InputSystem::InputControlList_1<TControl>::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
template <typename TControl> inline uint64_t UnityEngine::InputSystem::InputControlList_1<TControl>::ToIndex(TControl control) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "ToIndex", {}, { ::i2c::type_of<TControl>() } })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, control);
}
template <typename TControl> inline TControl UnityEngine::InputSystem::InputControlList_1<TControl>::FromIndex(uint64_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputControlList_1<TControl>>(), { "FromIndex", {}, { ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<TControl>(nullptr, ___internal_method, index);
}
/// @brief Convert operator to "::System::Collections::Generic::IList_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IList_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IList_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IList_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::IList_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__Generic__IList_1_TControl_() {
  return static_cast<::System::Collections::Generic::IList_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::ICollection_1<TControl>*() {
  return static_cast<::System::Collections::Generic::ICollection_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::ICollection_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__Generic__ICollection_1_TControl_() {
  return static_cast<::System::Collections::Generic::ICollection_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IEnumerable_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::IEnumerable_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__Generic__IEnumerable_1_TControl_() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TControl> constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IReadOnlyList_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::IReadOnlyList_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__Generic__IReadOnlyList_1_TControl_() {
  return static_cast<::System::Collections::Generic::IReadOnlyList_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<TControl>"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::Collections::Generic::IReadOnlyCollection_1<TControl>*() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<TControl>"
template <typename TControl>
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<TControl>* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__Collections__Generic__IReadOnlyCollection_1_TControl_() {
  return static_cast<::System::Collections::Generic::IReadOnlyCollection_1<TControl>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TControl> constexpr UnityEngine::InputSystem::InputControlList_1<TControl>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TControl> constexpr ::System::IDisposable* UnityEngine::InputSystem::InputControlList_1<TControl>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Indices", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}") }]
template <typename TControl>
constexpr ::UnityEngine::InputSystem::InputControlList_1<TControl>::InputControlList_1(int32_t m_Count, ::Unity::Collections::NativeArray_1<uint64_t> m_Indices,
                                                                                       ::Unity::Collections::Allocator m_Allocator) noexcept {
  this->m_Count = m_Count;
  this->m_Indices = m_Indices;
  this->m_Allocator = m_Allocator;
}
// Ctor Parameters []
template <typename TControl> constexpr ::UnityEngine::InputSystem::InputControlList_1<TControl>::InputControlList_1() {}
