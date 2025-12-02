#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/HashMapHelper_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashMapHelper_1)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1_Enumerator;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct KVPair_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeKeyValueArrays_2;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1_Enumerator;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename TKey>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1/Enumerator<TKey>
struct CORDL_TYPE HashMapHelper_1_Enumerator {
public:
  // Declarations
  /// @brief Method GetCurrent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline ::Unity::Collections::KVPair_2<TKey, TValue> GetCurrent();

  /// @brief Method GetCurrentKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey GetCurrentKey();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* data);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashMapHelper_1_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_BucketIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NextIndex", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr HashMapHelper_1_Enumerator(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data, int32_t m_Index, int32_t m_BucketIndex, int32_t m_NextIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15718 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_BucketIndex, offset: 0xc, size: 0x4, def value: None
  int32_t m_BucketIndex;

  /// @brief Field m_NextIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_NextIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename TKey>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1<TKey>
struct CORDL_TYPE HashMapHelper_1 {
public:
  // Declarations
  using Enumerator = ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator<TKey>;

  __declspec(property(get = get_IsCreated)) bool IsCreated;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  /// @brief Method Alloc, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* Alloc(int32_t capacity, int32_t sizeOfValueT, int32_t minGrowth,
                                                                                     ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method CalcCapacityCeilPow2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t CalcCapacityCeilPow2(int32_t capacity);

  /// @brief Method CalculateDataSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t CalculateDataSize(int32_t capacity, int32_t bucketCapacity, int32_t sizeOfTValue, ::ByRef<int32_t> outKeyOffset, ::ByRef<int32_t> outNextOffset,
                                          ::ByRef<int32_t> outBucketOffset);

  /// @brief Method CheckIndexOutOfBounds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CheckIndexOutOfBounds(int32_t idx);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Find(TKey key);

  /// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void Free(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* data);

  /// @brief Method GetBucket, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetBucket(::ByRef<TKey> key);

  /// @brief Method GetBucketSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t GetBucketSize(int32_t capacity);

  /// @brief Method GetCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t GetCount();

  /// @brief Method GetKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<TKey> GetKeyArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetKeyValueArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> GetKeyValueArrays(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline ::Unity::Collections::NativeArray_1<TValue> GetValueArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Init(int32_t capacity, int32_t sizeOfValueT, int32_t minGrowth, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNext(::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index);

  /// @brief Method MoveNextSearch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool MoveNextSearch(::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index);

  /// @brief Method Resize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Resize(int32_t newCapacity);

  /// @brief Method ResizeExact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResizeExact(int32_t newCapacity, int32_t newBucketCapacity);

  /// @brief Method TrimExcess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TrimExcess();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t TryAdd(::ByRef<TKey> key);

  /// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> inline bool TryGetValue(TKey key, ::ByRef<TValue> item);

  /// @brief Method TryRemove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t TryRemove(TKey key);

  /// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsCreated();

  /// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashMapHelper_1();

  // Ctor Parameters [CppParam { name: "Ptr", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "Keys", ty: "TKey*", modifiers: "", def_value: None }, CppParam { name: "Next", ty:
  // "int32_t*", modifiers: "", def_value: None }, CppParam { name: "Buckets", ty: "int32_t*", modifiers: "", def_value: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "Capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Log2MinGrowth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "BucketCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "AllocatedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "FirstFreeIdx", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "SizeOfTValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Allocator", ty:
  // "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
  constexpr HashMapHelper_1(uint8_t* Ptr, TKey* Keys, int32_t* Next, int32_t* Buckets, int32_t Count, int32_t Capacity, int32_t Log2MinGrowth, int32_t BucketCapacity, int32_t AllocatedIndex,
                            int32_t FirstFreeIdx, int32_t SizeOfTValue, ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15719 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field kMinimumCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kMinimumCapacity{ static_cast<int32_t>(0x100) };

  /// @brief Field Ptr, offset: 0x0, size: 0x8, def value: None
  uint8_t* Ptr;

  /// @brief Field Keys, offset: 0x8, size: 0x8, def value: None
  TKey* Keys;

  /// @brief Field Next, offset: 0x10, size: 0x8, def value: None
  int32_t* Next;

  /// @brief Field Buckets, offset: 0x18, size: 0x8, def value: None
  int32_t* Buckets;

  /// @brief Field Count, offset: 0x20, size: 0x4, def value: None
  int32_t Count;

  /// @brief Field Capacity, offset: 0x24, size: 0x4, def value: None
  int32_t Capacity;

  /// @brief Field Log2MinGrowth, offset: 0x28, size: 0x4, def value: None
  int32_t Log2MinGrowth;

  /// @brief Field BucketCapacity, offset: 0x2c, size: 0x4, def value: None
  int32_t BucketCapacity;

  /// @brief Field AllocatedIndex, offset: 0x30, size: 0x4, def value: None
  int32_t AllocatedIndex;

  /// @brief Field FirstFreeIdx, offset: 0x34, size: 0x4, def value: None
  int32_t FirstFreeIdx;

  /// @brief Field SizeOfTValue, offset: 0x38, size: 0x4, def value: None
  int32_t SizeOfTValue;

  /// @brief Field Allocator, offset: 0x3c, size: 0x4, def value: None
  ::Unity::Collections::AllocatorManager_AllocatorHandle Allocator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1, "Unity.Collections.LowLevel.Unsafe", "HashMapHelper`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1_Enumerator, "Unity.Collections.LowLevel.Unsafe", "HashMapHelper`1/Enumerator");
