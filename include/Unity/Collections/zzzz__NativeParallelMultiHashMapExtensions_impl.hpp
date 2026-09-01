#pragma once
// IWYU pragma private; include "Unity\Collections\NativeParallelMultiHashMapExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
template <typename TKey, typename TValue, typename U>
inline void Unity::Collections::NativeParallelMultiHashMapExtensions::Initialize(::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>> container, int32_t capacity,
                                                                                 ::by_ref<U> allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeParallelMultiHashMapExtensions*>(),
                          { "Initialize",
                            { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>(), ::i2c::class_of<U>() },
                            { ::i2c::type_of<::by_ref<::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<U>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TKey>(), ::i2c::class_of<TValue>(), ::i2c::class_of<U>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, capacity, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeParallelMultiHashMapExtensions::NativeParallelMultiHashMapExtensions() {}
