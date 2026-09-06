#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapBase_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapBase_2)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename TKey>
  requires(::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey>)
struct NativeParallelMultiHashMapIterator_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue>
  requires(::cordl_internals::type_constraint<TKey, ::System::IEquatable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> &&
           ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
struct UnsafeParallelHashMapBase_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBase_2, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapBase`2");
// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32), typeof(System.Int32) })]
// Dependencies System.IEquatable`1<T>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename TKey, typename TValue>
  requires(::cordl_internals::type_constraint<TKey, ::System::IEquatable_1<TKey>*> && ::cordl_internals::value_type_constraint<TKey> && ::cordl_internals::default_constructor_constraint<TKey> &&
           ::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapBase`2<TKey,TValue>
struct CORDL_TYPE UnsafeParallelHashMapBase_2 {
public:
  // Declarations
  /// @brief Method AddAtomicMulti, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void AddAtomicMulti(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, TValue item, int32_t threadIndex);

  /// @brief Method AllocEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t AllocEntry(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t threadIndex);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckIndexOutOfBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckIndexOutOfBounds(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t idx);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method CheckOutOfCapacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckOutOfCapacity(int32_t idx, int32_t keyCapacity);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Clear(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data);

  /// @brief Method FreeEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void FreeEntry(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t idx, int32_t threadIndex);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t Remove(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, bool isMultiHashMap);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Remove(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey> it);

  /// [GenerateTestsForBurstCompatibility(GenericTypeArguments = new[] { typeof(System.Int32) })]
  /// @brief Method RemoveKeyValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValueEQ>
    requires(::cordl_internals::type_constraint<TValueEQ, ::System::IEquatable_1<TValueEQ>*> && ::cordl_internals::value_type_constraint<TValueEQ> &&
             ::cordl_internals::default_constructor_constraint<TValueEQ>)
  static inline void RemoveKeyValue(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, TValueEQ value);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool SetValue(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it,
                              ::by_ref<TValue> item);

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method ThrowFull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowFull();

  /// [Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
  /// [Conditional("UNITY_DOTS_DEBUG")]
  /// @brief Method ThrowInvalidIterator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void ThrowInvalidIterator();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryAdd(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, TValue item, bool isMultiHashMap,
                            ::Unity::Collections::AllocatorManager_AllocatorHandle allocation);

  /// @brief Method TryAddAtomic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryAddAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, TValue item, int32_t threadIndex);

  /// @brief Method TryGetFirstValueAtomic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryGetFirstValueAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, TKey key, ::by_ref<TValue> item,
                                            ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it);

  /// @brief Method TryGetNextValueAtomic, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool TryGetNextValueAtomic(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::by_ref<TValue> item,
                                           ::by_ref<::Unity::Collections::NativeParallelMultiHashMapIterator_1<TKey>> it);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapBase_2();

  /// @brief Field SentinelRefilling offset 0xffffffff size 0x4
  static constexpr int32_t SentinelRefilling{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field SentinelSwapInProgress offset 0xffffffff size 0x4
  static constexpr int32_t SentinelSwapInProgress{ static_cast<int32_t>(0xfffffffd) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15792 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
