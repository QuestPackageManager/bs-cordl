#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapExtensions.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMapExtensions_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
template <typename TKey, typename TValue, typename U>
  requires(::cordl_internals::type_constraint<TKey, ::System::IEquatable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> &&
           ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> &&
           ::cordl_internals::type_constraint<U, ::Unity::Collections::AllocatorManager_IAllocator*> && ::cordl_internals::value_type_constraint<U> &&
           ::cordl_internals::default_constructor_constraint<U>)
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
