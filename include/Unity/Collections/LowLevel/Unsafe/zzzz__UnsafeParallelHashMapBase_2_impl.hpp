#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeParallelHashMapBase_2.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBase_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapData_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapIterator_1_def.hpp"
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::Clear(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                                                         { "Clear", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
template <typename TKey, typename TValue>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::AllocEntry(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                           int32_t threadIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                           { "AllocEntry", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, threadIndex);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::FreeEntry(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t idx,
                                                                                                       int32_t threadIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                          { "FreeEntry", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, idx, threadIndex);
}
template <typename TKey, typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::TryAddAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key,
                                                                                                          TValue item, int32_t threadIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                          { "TryAddAtomic",
                            {},
                            { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, key, item, threadIndex);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::AddAtomicMulti(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key,
                                                                                                            TValue item, int32_t threadIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                          { "AddAtomicMulti",
                            {},
                            { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, key, item, threadIndex);
}
template <typename TKey, typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::TryAdd(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, TValue item,
                                                                                                    bool isMultiHashMap, ::Unity::Collections::AllocatorManager_AllocatorHandle allocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                           { "TryAdd",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, key, item, isMultiHashMap, allocation);
}
template <typename TKey, typename TValue>
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::Remove(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key,
                                                                                                       bool isMultiHashMap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                       { "Remove", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, data, key, isMultiHashMap);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::Remove(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                    ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey> it) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                                                         { "Remove",
                                                                                           {},
                                                                                           { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(),
                                                                                             ::i2c::type_of<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, it);
}
template <typename TKey, typename TValue>
template <typename TValueEQ>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::RemoveKeyValue(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key,
                                                                                                            TValueEQ value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                              { "RemoveKeyValue",
                                                { ::i2c::class_of<TValueEQ>() },
                                                { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValueEQ>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TValueEQ>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, key, value);
}
template <typename TKey, typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::TryGetFirstValueAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key,
                                                                                                                    ::by_ref<TValue> item,
                                                                                                                    ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                           { "TryGetFirstValueAtomic",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<TKey>(),
                                                               ::i2c::type_of<::by_ref<TValue>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, key, item, it);
}
template <typename TKey, typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::TryGetNextValueAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                                   ::by_ref<TValue> item,
                                                                                                                   ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                           { "TryGetNextValueAtomic",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<::by_ref<TValue>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, item, it);
}
template <typename TKey, typename TValue>
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::SetValue(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                      ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it,
                                                                                                      ::by_ref<TValue> item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                           { "SetValue",
                                                             {},
                                                             { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>>>(), ::i2c::type_of<::by_ref<TValue>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data, it, item);
}
template <typename TKey, typename TValue> inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::CheckOutOfCapacity(int32_t idx, int32_t keyCapacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                                                                         { "CheckOutOfCapacity", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, idx, keyCapacity);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::CheckIndexOutOfBounds(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data,
                                                                                                                   int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(),
                                              { "CheckIndexOutOfBounds", {}, { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, idx);
}
template <typename TKey, typename TValue> inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::ThrowFull() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(), { "ThrowFull", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template <typename TKey, typename TValue> inline void Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::ThrowInvalidIterator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>>(), { "ThrowInvalidIterator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2<TKey, TValue>::UnsafeParallelHashMapBase_2() {}
