#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStreamRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeStreamRange)
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamBlock;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
struct UnsafeStreamRange;
}
// Write type traits
MARK_VAL_T(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange);
// Dependencies
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeStreamRange
struct CORDL_TYPE UnsafeStreamRange {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeStreamRange();

  // Ctor Parameters [CppParam { name: "Block", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: None }, CppParam { name: "OffsetInFirstBlock", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "ElementCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "LastOffset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "NumberOfBlocks", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UnsafeStreamRange(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Block, int32_t OffsetInFirstBlock, int32_t ElementCount, int32_t LastOffset, int32_t NumberOfBlocks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15788 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Block, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* Block;

  /// @brief Field OffsetInFirstBlock, offset: 0x8, size: 0x4, def value: None
  int32_t OffsetInFirstBlock;

  /// @brief Field ElementCount, offset: 0xc, size: 0x4, def value: None
  int32_t ElementCount;

  /// @brief Field LastOffset, offset: 0x10, size: 0x4, def value: None
  int32_t LastOffset;

  /// @brief Field NumberOfBlocks, offset: 0x14, size: 0x4, def value: None
  int32_t NumberOfBlocks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, Block) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, OffsetInFirstBlock) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, ElementCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, LastOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, NumberOfBlocks) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, 0x18>, "Size mismatch!");

} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::UnsafeStreamRange, "Unity.Collections.LowLevel.Unsafe", "UnsafeStreamRange");
