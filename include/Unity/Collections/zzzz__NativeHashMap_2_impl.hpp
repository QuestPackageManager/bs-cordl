#pragma once
// IWYU pragma private; include "Unity\Collections\NativeHashMap_2.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeKeyValueArrays_2_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Collections::KVPair_2<TKey, TValue> Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(), { "get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::KVPair_2<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Object* Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::operator ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*
Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::i___System__Collections__Generic__IEnumerator_1___Unity__Collections__KVPair_2_TKey_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::operator ::System::Collections::IEnumerator*() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerator* Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::i___System__Collections__IEnumerator() {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Enumerator", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::NativeHashMap_2_Enumerator(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey> m_Enumerator) noexcept {
  this->m_Enumerator = m_Enumerator;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>::NativeHashMap_2_Enumerator() {}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::_ctor(::by_ref<::Unity::Collections::NativeHashMap_2<TKey, TValue>> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeHashMap_2<TKey, TValue>>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline TValue Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeArray_1<TKey> Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { "GetKeyArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TKey>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeArray_1<TValue> Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { "GetValueArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TValue>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>
Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { "GetKeyValueArrays", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue> inline ::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue> Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*
Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::System_Collections_Generic_IEnumerable_Unity_Collections_KVPair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(),
                                                                                         { "System.Collections.Generic.IEnumerable<Unity.Collections.KVPair<TKey,TValue>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::ThrowKeyNotPresent(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(), { "ThrowKeyNotPresent", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*
Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Collections__KVPair_2_TKey_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::NativeHashMap_2_ReadOnly(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>::NativeHashMap_2_ReadOnly() {}
template <typename TKey, typename TValue>
inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::_ctor(int32_t initialCapacity, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialCapacity, allocator);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Jobs::JobHandle Unity::Collections::NativeHashMap_2<TKey, TValue>::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::get_IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "get_IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t Unity::Collections::NativeHashMap_2<TKey, TValue>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline int32_t Unity::Collections::NativeHashMap_2<TKey, TValue>::get_Capacity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "get_Capacity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::set_Capacity(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "set_Capacity", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::TryAdd(TKey key, TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "TryAdd", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::Add(TKey key, TValue item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "Add", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::Remove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "Remove", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::TryGetValue(TKey key, ::by_ref<TValue> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "TryGetValue", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline bool Unity::Collections::NativeHashMap_2<TKey, TValue>::ContainsKey(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "ContainsKey", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::TrimExcess() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "TrimExcess", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline TValue Unity::Collections::NativeHashMap_2<TKey, TValue>::get_Item(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "get_Item", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::set_Item(TKey key, TValue value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "set_Item", {}, { ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key, value);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeArray_1<TKey> Unity::Collections::NativeHashMap_2<TKey, TValue>::GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(),
                                                                                         { "GetKeyArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TKey>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeArray_1<TValue> Unity::Collections::NativeHashMap_2<TKey, TValue>::GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(),
                                                                                         { "GetValueArray", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TValue>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>
Unity::Collections::NativeHashMap_2<TKey, TValue>::GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(),
                                                                                         { "GetKeyValueArrays", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>>(*this, ___internal_method, allocator);
}
template <typename TKey, typename TValue> inline ::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue> Unity::Collections::NativeHashMap_2<TKey, TValue>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeHashMap_2_Enumerator<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*
Unity::Collections::NativeHashMap_2<TKey, TValue>::System_Collections_Generic_IEnumerable_Unity_Collections_KVPair_TKey_TValue___GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(),
                                                                                         { "System.Collections.Generic.IEnumerable<Unity.Collections.KVPair<TKey,TValue>>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::System::Collections::IEnumerator* Unity::Collections::NativeHashMap_2<TKey, TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline ::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> Unity::Collections::NativeHashMap_2<TKey, TValue>::AsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "AsReadOnly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue>>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::CheckWrite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "CheckWrite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::ThrowKeyNotPresent(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "ThrowKeyNotPresent", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline void Unity::Collections::NativeHashMap_2<TKey, TValue>::ThrowKeyAlreadyAdded(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeHashMap_2<TKey, TValue>>(), { "ThrowKeyAlreadyAdded", {}, { ::i2c::type_of<TKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, key);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2<TKey, TValue>::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
template <typename TKey, typename TValue> constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeHashMap_2<TKey, TValue>::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2<TKey, TValue>::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template <typename TKey, typename TValue> constexpr ::System::IDisposable* Unity::Collections::NativeHashMap_2<TKey, TValue>::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr Unity::Collections::NativeHashMap_2<TKey, TValue>::operator ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey,TValue>>"
template <typename TKey, typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*
Unity::Collections::NativeHashMap_2<TKey, TValue>::i___System__Collections__Generic__IEnumerable_1___Unity__Collections__KVPair_2_TKey_TValue__() {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::Unity::Collections::KVPair_2<TKey, TValue>>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr Unity::Collections::NativeHashMap_2<TKey, TValue>::operator ::System::Collections::IEnumerable*() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename TKey, typename TValue> constexpr ::System::Collections::IEnumerable* Unity::Collections::NativeHashMap_2<TKey, TValue>::i___System__Collections__IEnumerable() {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}") }]
template <typename TKey, typename TValue>
constexpr ::Unity::Collections::NativeHashMap_2<TKey, TValue>::NativeHashMap_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data) noexcept {
  this->m_Data = m_Data;
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::NativeHashMap_2<TKey, TValue>::NativeHashMap_2() {}
