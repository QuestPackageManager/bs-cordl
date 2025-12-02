#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeKeyValueArrays_2_def.hpp"
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::_ctor(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
template <typename TKey> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>>::get(), "Reset",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey> template <typename TValue> inline ::Unity::Collections::KVPair_2<TKey, TValue> Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::GetCurrent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>>::get(), "GetCurrent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::KVPair_2<TKey, TValue>, false>(this, ___internal_method);
}
template <typename TKey> inline TKey Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::GetCurrentKey() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>>::get(), "GetCurrentKey",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }]
template <typename TKey>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::HashMapHelper_1_Enumerator(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data, int32_t m_Index,
                                                                                                               int32_t m_BucketIndex, int32_t m_NextIndex) noexcept {
  this->m_Data = m_Data;
  this->m_Index = m_Index;
  this->m_BucketIndex = m_BucketIndex;
  this->m_NextIndex = m_NextIndex;
}
// Ctor Parameters []
template <typename TKey> constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>::HashMapHelper_1_Enumerator() {}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::CalcCapacityCeilPow2(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "CalcCapacityCeilPow2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, capacity);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetBucketSize(int32_t capacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetBucketSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity);
}
template <typename TKey> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::get_IsCreated() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "get_IsCreated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::get_IsEmpty() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "get_IsEmpty",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Clear() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Clear",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey>
inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Init(int32_t capacity, int32_t sizeOfValueT, int32_t minGrowth,
                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capacity, sizeOfValueT, minGrowth, allocator);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey>
inline ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*
Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Alloc(int32_t capacity, int32_t sizeOfValueT, int32_t minGrowth, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Alloc", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*, false>(nullptr, ___internal_method, capacity, sizeOfValueT, minGrowth, allocator);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Free(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Free", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Resize(int32_t newCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::ResizeExact(int32_t newCapacity, int32_t newBucketCapacity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "ResizeExact", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newCapacity, newBucketCapacity);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TrimExcess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "TrimExcess",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TKey>
inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::CalculateDataSize(int32_t capacity, int32_t bucketCapacity, int32_t sizeOfTValue, ::ByRef<int32_t> outKeyOffset,
                                                                                              ::ByRef<int32_t> outNextOffset, ::ByRef<int32_t> outBucketOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "CalculateDataSize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, capacity, bucketCapacity, sizeOfTValue, outKeyOffset, outNextOffset, outBucketOffset);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetCount() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetBucket(::ByRef<TKey> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetBucket",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryAdd(::ByRef<TKey> key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "TryAdd",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TKey>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::Find(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "Find",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey> template <typename TValue> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryGetValue(TKey key, ::ByRef<TValue> item) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "TryGetValue",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, item);
}
template <typename TKey> inline int32_t Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::TryRemove(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "TryRemove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::MoveNextSearch(::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "MoveNextSearch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bucketIndex, nextIndex, index);
}
template <typename TKey> inline bool Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::MoveNext(::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "MoveNext", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bucketIndex, nextIndex, index);
}
template <typename TKey>
inline ::Unity::Collections::NativeArray_1<TKey> Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetKeyArray", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TKey>, false>(this, ___internal_method, allocator);
}
template <typename TKey>
template <typename TValue>
inline ::Unity::Collections::NativeArray_1<TValue> Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetValueArray",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<TValue>, false>(this, ___internal_method, allocator);
}
template <typename TKey>
template <typename TValue>
inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>
Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "GetKeyValueArrays",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue>, false>(this, ___internal_method, allocator);
}
template <typename TKey> inline void Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::CheckIndexOutOfBounds(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>>::get(), "CheckIndexOutOfBounds",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx);
}
// Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Keys", ty: "TKey*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "Next", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Buckets", ty: "int32_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Count", ty: "int32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Log2MinGrowth", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "BucketCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "AllocatedIndex", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "FirstFreeIdx", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "SizeOfTValue", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "Allocator", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: Some("{}") }]
template <typename TKey>
constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::HashMapHelper_1(uint8_t* Ptr, TKey* Keys, int32_t* Next, int32_t* Buckets, int32_t Count, int32_t Capacity,
                                                                                         int32_t Log2MinGrowth, int32_t BucketCapacity, int32_t AllocatedIndex, int32_t FirstFreeIdx,
                                                                                         int32_t SizeOfTValue, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept {
  this->Ptr = Ptr;
  this->Keys = Keys;
  this->Next = Next;
  this->Buckets = Buckets;
  this->Count = Count;
  this->Capacity = Capacity;
  this->Log2MinGrowth = Log2MinGrowth;
  this->BucketCapacity = BucketCapacity;
  this->AllocatedIndex = AllocatedIndex;
  this->FirstFreeIdx = FirstFreeIdx;
  this->SizeOfTValue = SizeOfTValue;
  this->Allocator = Allocator;
}
// Ctor Parameters []
template <typename TKey> constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>::HashMapHelper_1() {}
