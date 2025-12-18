#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapBucketData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeParallelHashMapBucketData)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeParallelHashMapBucketData;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapBucketData
struct CORDL_TYPE UnsafeParallelHashMapBucketData {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x63185e4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(uint8_t* v, uint8_t* k, uint8_t* n, uint8_t* b, int32_t bcm);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapBucketData();

  // Ctor Parameters [CppParam { name: "values", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "keys", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "next",
  // ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "buckets", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "bucketCapacityMask", ty: "int32_t", modifiers:
  // "", def_value: None }]
  constexpr UnsafeParallelHashMapBucketData(uint8_t* values, uint8_t* keys, uint8_t* next, uint8_t* buckets, int32_t bucketCapacityMask) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field values, offset: 0x0, size: 0x8, def value: None
  uint8_t* values;

  /// @brief Field keys, offset: 0x8, size: 0x8, def value: None
  uint8_t* keys;

  /// @brief Field next, offset: 0x10, size: 0x8, def value: None
  uint8_t* next;

  /// @brief Field buckets, offset: 0x18, size: 0x8, def value: None
  uint8_t* buckets;

  /// @brief Field bucketCapacityMask, offset: 0x20, size: 0x4, def value: None
  int32_t bucketCapacityMask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, values) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, keys) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, next) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, buckets) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, bucketCapacityMask) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, 0x28>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapBucketData, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapBucketData");
