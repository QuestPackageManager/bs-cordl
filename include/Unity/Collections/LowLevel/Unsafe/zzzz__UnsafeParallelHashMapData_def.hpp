#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapData)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapBucketData;
}
namespace Unity::Collections {
struct AllocatorManager_AllocatorHandle;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeKeyValueArrays_2;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapData
struct CORDL_TYPE UnsafeParallelHashMapData {
public:
  // Declarations
  /// @brief Field allocatedIndexLength, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_allocatedIndexLength, put = __cordl_internal_set_allocatedIndexLength)) int32_t allocatedIndexLength;

  /// @brief Field bucketCapacityMask, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_bucketCapacityMask, put = __cordl_internal_set_bucketCapacityMask)) int32_t bucketCapacityMask;

  /// @brief Field buckets, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_buckets, put = __cordl_internal_set_buckets)) uint8_t* buckets;

  __declspec(property(get = get_firstFreeTLS)) int32_t* firstFreeTLS;

  /// @brief Field keyCapacity, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_keyCapacity, put = __cordl_internal_set_keyCapacity)) int32_t keyCapacity;

  /// @brief Field keys, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_keys, put = __cordl_internal_set_keys)) uint8_t* keys;

  /// @brief Field next, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) uint8_t* next;

  /// @brief Field values, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_values, put = __cordl_internal_set_values)) uint8_t* values;

  /// @brief Method AllocateHashMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline void AllocateHashMap(int32_t length, int32_t bucketLength, ::Unity::Collections::AllocatorManager_AllocatorHandle label,
                                     ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData*> outBuf);

  /// @brief Method CalculateDataSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline int32_t CalculateDataSize(int32_t length, int32_t bucketLength, ::ByRef<int32_t> keyOffset, ::ByRef<int32_t> nextOffset, ::ByRef<int32_t> bucketOffset);

  /// @brief Method CheckHashMapReallocateDoesNotShrink, addr 0x62b0ce4, size 0x68, virtual false, abstract: false, final false
  static inline void CheckHashMapReallocateDoesNotShrink(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t newCapacity);

  /// @brief Method DeallocateHashMap, addr 0x62b0a88, size 0x8c, virtual false, abstract: false, final false
  static inline void DeallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator);

  /// @brief Method GetBucketData, addr 0x62b0ccc, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData GetBucketData();

  /// @brief Method GetBucketSize, addr 0x62b0a70, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetBucketSize(int32_t capacity);

  /// @brief Method GetCount, addr 0x62b0b70, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetCount(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data);

  /// @brief Method GetKeyArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey> static inline void GetKeyArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::Unity::Collections::NativeArray_1<TKey> result);

  /// @brief Method GetKeyValueArrays, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline void GetKeyValueArrays(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::Unity::Collections::NativeKeyValueArrays_2<TKey, TValue> result);

  /// @brief Method GetValueArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TValue> static inline void GetValueArray(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::Unity::Collections::NativeArray_1<TValue> result);

  /// @brief Method GrowCapacity, addr 0x62b0a78, size 0x10, virtual false, abstract: false, final false
  static inline int32_t GrowCapacity(int32_t capacity);

  /// @brief Method IsEmpty, addr 0x62b0b14, size 0x5c, virtual false, abstract: false, final false
  static inline bool IsEmpty(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data);

  /// @brief Method MoveNext, addr 0x62b0c94, size 0x38, virtual false, abstract: false, final false
  static inline bool MoveNext(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index);

  /// @brief Method MoveNextSearch, addr 0x62b0c20, size 0x74, virtual false, abstract: false, final false
  static inline bool MoveNextSearch(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, ::ByRef<int32_t> bucketIndex, ::ByRef<int32_t> nextIndex, ::ByRef<int32_t> index);

  /// @brief Method ReallocateHashMap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TKey, typename TValue>
  static inline void ReallocateHashMap(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData* data, int32_t newCapacity, int32_t newBucketCapacity,
                                       ::Unity::Collections::AllocatorManager_AllocatorHandle label);

  constexpr int32_t const& __cordl_internal_get_allocatedIndexLength() const;

  constexpr int32_t& __cordl_internal_get_allocatedIndexLength();

  constexpr int32_t const& __cordl_internal_get_bucketCapacityMask() const;

  constexpr int32_t& __cordl_internal_get_bucketCapacityMask();

  constexpr uint8_t* const& __cordl_internal_get_buckets() const;

  constexpr uint8_t*& __cordl_internal_get_buckets();

  constexpr int32_t const& __cordl_internal_get_keyCapacity() const;

  constexpr int32_t& __cordl_internal_get_keyCapacity();

  constexpr uint8_t* const& __cordl_internal_get_keys() const;

  constexpr uint8_t*& __cordl_internal_get_keys();

  constexpr uint8_t* const& __cordl_internal_get_next() const;

  constexpr uint8_t*& __cordl_internal_get_next();

  constexpr uint8_t* const& __cordl_internal_get_values() const;

  constexpr uint8_t*& __cordl_internal_get_values();

  constexpr void __cordl_internal_set_allocatedIndexLength(int32_t value);

  constexpr void __cordl_internal_set_bucketCapacityMask(int32_t value);

  constexpr void __cordl_internal_set_buckets(uint8_t* value);

  constexpr void __cordl_internal_set_keyCapacity(int32_t value);

  constexpr void __cordl_internal_set_keys(uint8_t* value);

  constexpr void __cordl_internal_set_next(uint8_t* value);

  constexpr void __cordl_internal_set_values(uint8_t* value);

  /// @brief Method get_firstFreeTLS, addr 0x62b0a68, size 0x8, virtual false, abstract: false, final false
  inline int32_t* get_firstFreeTLS();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapData();

  // Ctor Parameters [CppParam { name: "values", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "keys", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "next",
  // ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "buckets", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "keyCapacity", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "bucketCapacityMask", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "allocatedIndexLength", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr UnsafeParallelHashMapData(uint8_t* values, uint8_t* keys, uint8_t* next, uint8_t* buckets, int32_t keyCapacity, int32_t bucketCapacityMask, int32_t allocatedIndexLength) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___values_padding[0x0];
      /// @brief Field values, offset: 0x0, size: 0x8, def value: None
      uint8_t* ___values;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___values_padding_forAlignment[0x0];
      /// @brief Field values, offset: 0x0, size: 0x8, def value: None
      uint8_t* ___values_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___keys_padding[0x8];
      /// @brief Field keys, offset: 0x8, size: 0x8, def value: None
      uint8_t* ___keys;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___keys_padding_forAlignment[0x8];
      /// @brief Field keys, offset: 0x8, size: 0x8, def value: None
      uint8_t* ___keys_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x10
      uint8_t ___next_padding[0x10];
      /// @brief Field next, offset: 0x10, size: 0x8, def value: None
      uint8_t* ___next;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x10 for alignment
      uint8_t ___next_padding_forAlignment[0x10];
      /// @brief Field next, offset: 0x10, size: 0x8, def value: None
      uint8_t* ___next_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x18
      uint8_t ___buckets_padding[0x18];
      /// @brief Field buckets, offset: 0x18, size: 0x8, def value: None
      uint8_t* ___buckets;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x18 for alignment
      uint8_t ___buckets_padding_forAlignment[0x18];
      /// @brief Field buckets, offset: 0x18, size: 0x8, def value: None
      uint8_t* ___buckets_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x20
      uint8_t ___keyCapacity_padding[0x20];
      /// @brief Field keyCapacity, offset: 0x20, size: 0x4, def value: None
      int32_t ___keyCapacity;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x20 for alignment
      uint8_t ___keyCapacity_padding_forAlignment[0x20];
      /// @brief Field keyCapacity, offset: 0x20, size: 0x4, def value: None
      int32_t ___keyCapacity_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x24
      uint8_t ___bucketCapacityMask_padding[0x24];
      /// @brief Field bucketCapacityMask, offset: 0x24, size: 0x4, def value: None
      int32_t ___bucketCapacityMask;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x24 for alignment
      uint8_t ___bucketCapacityMask_padding_forAlignment[0x24];
      /// @brief Field bucketCapacityMask, offset: 0x24, size: 0x4, def value: None
      int32_t ___bucketCapacityMask_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x28
      uint8_t ___allocatedIndexLength_padding[0x28];
      /// @brief Field allocatedIndexLength, offset: 0x28, size: 0x4, def value: None
      int32_t ___allocatedIndexLength;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x28 for alignment
      uint8_t ___allocatedIndexLength_padding_forAlignment[0x28];
      /// @brief Field allocatedIndexLength, offset: 0x28, size: 0x4, def value: None
      int32_t ___allocatedIndexLength_forAlignment;
    };
  };

public:
  /// @brief Field IntsPerCacheLine offset 0xffffffff size 0x4
  static constexpr int32_t IntsPerCacheLine{ static_cast<int32_t>(0x10) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field kFirstFreeTLSOffset offset 0xffffffff size 0x4
  static constexpr int32_t kFirstFreeTLSOffset{ static_cast<int32_t>(0x40) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData, 0x30>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapData, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapData");
