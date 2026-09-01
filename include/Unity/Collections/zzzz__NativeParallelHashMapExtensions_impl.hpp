#pragma once
// IWYU pragma private; include "Unity\Collections\NativeParallelHashMapExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMapExtensions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMapBucketData_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelMultiHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
template <typename T> inline int32_t Unity::Collections::NativeParallelHashMapExtensions::Unique(::Unity::Collections::NativeArray_1<T> array) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                                                                                              { "Unique", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::NativeArray_1<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
template <typename TKey, typename TValue>
inline ::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>
Unity::Collections::NativeParallelHashMapExtensions::GetUniqueKeyArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue> container,
                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                                                                                              { "GetUniqueKeyArray",
                                                                                                { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                                                                { ::i2c::type_of<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelMultiHashMap_2<TKey, TValue>>(),
                                                                                                  ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>>(nullptr, ___internal_method, container, allocator);
}
template <typename TKey, typename TValue>
inline ::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>
Unity::Collections::NativeParallelHashMapExtensions::GetUniqueKeyArray(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container,
                                                                       ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                          { "GetUniqueKeyArray",
                            { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                            { ::i2c::type_of<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::Unity::Collections::NativeArray_1<TKey>, int32_t>>(nullptr, ___internal_method, container, allocator);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData
Unity::Collections::NativeParallelHashMapExtensions::GetUnsafeBucketData(::Unity::Collections::NativeParallelHashMap_2<TKey, TValue> container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                          { "GetUnsafeBucketData", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<::Unity::Collections::NativeParallelHashMap_2<TKey, TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>(nullptr, ___internal_method, container);
}
template <typename TKey, typename TValue>
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData
Unity::Collections::NativeParallelHashMapExtensions::GetUnsafeBucketData(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                          { "GetUnsafeBucketData", { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() }, { ::i2c::type_of<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData>(nullptr, ___internal_method, container);
}
template <typename TKey, typename TValue>
inline void Unity::Collections::NativeParallelHashMapExtensions::Remove(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> container, TKey key, TValue value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelHashMapExtensions*>(),
                                              { "Remove",
                                                { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() },
                                                { ::i2c::type_of<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>>(), ::i2c::type_of<TKey>(), ::i2c::type_of<TValue>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, key, value);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeParallelHashMapExtensions::NativeParallelHashMapExtensions() {}
