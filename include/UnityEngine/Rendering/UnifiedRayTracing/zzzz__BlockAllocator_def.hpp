#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/BlockAllocator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BlockAllocator)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Block;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Allocation;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct BlockAllocator_Block;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation);
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, "UnityEngine.Rendering.UnifiedRayTracing", "BlockAllocator");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, "UnityEngine.Rendering.UnifiedRayTracing", "BlockAllocator/Allocation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block, "UnityEngine.Rendering.UnifiedRayTracing", "BlockAllocator/Block");
// Dependencies
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator/Block
struct CORDL_TYPE BlockAllocator_Block {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block Invalid;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block getStaticF_Invalid();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockAllocator_Block();

  // Ctor Parameters [CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }]
  constexpr BlockAllocator_Block(int32_t offset, int32_t count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20475 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field offset, offset: 0x0, size: 0x4, def value: None
  int32_t offset;

  /// @brief Field count, offset: 0x4, size: 0x4, def value: None
  int32_t count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block, offset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block, count) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Block
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator/Allocation
struct CORDL_TYPE BlockAllocator_Allocation {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation Invalid;

  __declspec(property(get = get_valid)) bool valid;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation getStaticF_Invalid();

  /// [IsReadOnly]
  /// @brief Method get_valid, addr 0x6e036a0, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockAllocator_Allocation();

  // Ctor Parameters [CppParam { name: "handle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "block", ty:
  // "::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block", modifiers: "", def_value: None, comment: None }]
  constexpr BlockAllocator_Allocation(int32_t handle, ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block block) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20476 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field handle, offset: 0x0, size: 0x4, def value: None
  int32_t handle;

  /// @brief Field block, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block block;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation, block) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation) == 0xc, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
// Dependencies Unity.Collections.NativeList`1<T>, UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator::Block
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.BlockAllocator
struct CORDL_TYPE BlockAllocator {
public:
  // Declarations
  using Allocation = ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation;

  using Block = ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block;

  __declspec(property(get = get_allocatedSize)) int32_t allocatedSize;

  __declspec(property(get = get_capacity)) int32_t capacity;

  __declspec(property(get = get_freeBlocks)) int32_t freeBlocks;

  __declspec(property(get = get_freeElementsCount)) int32_t freeElementsCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Allocate, addr 0x6e04210, size 0x404, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation Allocate(int32_t elementCounts);

  /// @brief Method CalculateGeometricGrowthCapacity, addr 0x6e07f48, size 0x28, virtual false, abstract: false, final false
  inline int32_t CalculateGeometricGrowthCapacity(int32_t desiredNewCapacity, int32_t maxAllowedNewCapacity);

  /// @brief Method Dispose, addr 0x6e033d4, size 0xcc, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method FreeAllocation, addr 0x6e036b0, size 0x16c, virtual false, abstract: false, final false
  inline void FreeAllocation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const> allocation);

  /// @brief Method GetExpectedGrowthToFitAllocation, addr 0x6e08240, size 0x15c, virtual false, abstract: false, final false
  inline bool GetExpectedGrowthToFitAllocation(int32_t elementCounts, int32_t maxAllowedCapacity, ::by_ref<int32_t> newCapacity);

  /// @brief Method Grow, addr 0x6e07f70, size 0x100, virtual false, abstract: false, final false
  inline int32_t Grow(int32_t newDesiredCapacity, int32_t maxAllowedCapacity);

  /// @brief Method GrowAndAllocate, addr 0x6e0463c, size 0x1a8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation GrowAndAllocate(int32_t elementCounts, int32_t maxAllowedCapacity, ::by_ref<int32_t> oldCapacity,
                                                                                                ::by_ref<int32_t> newCapacity);

  /// @brief Method GrowAndAllocate, addr 0x6e0839c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation GrowAndAllocate(int32_t elementCounts, ::by_ref<int32_t> oldCapacity, ::by_ref<int32_t> newCapacity);

  /// @brief Method Initialize, addr 0x6e03090, size 0x1d4, virtual false, abstract: false, final false
  inline void Initialize(int32_t maxElementCounts);

  /// @brief Method MergeBlockFrontBack, addr 0x6e08070, size 0x1d0, virtual false, abstract: false, final false
  inline int32_t MergeBlockFrontBack(int32_t freeBlockId);

  /// @brief Method SplitAllocation, addr 0x6e083bc, size 0x318, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation>
  SplitAllocation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Allocation const> allocation, int32_t count);

  /// @brief Method get_allocatedSize, addr 0x6e07f3c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_allocatedSize();

  /// @brief Method get_capacity, addr 0x6e07f34, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_capacity();

  /// @brief Method get_freeBlocks, addr 0x6e07ed0, size 0x64, virtual false, abstract: false, final false
  inline int32_t get_freeBlocks();

  /// @brief Method get_freeElementsCount, addr 0x6e07ec8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_freeElementsCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr BlockAllocator();

  // Ctor Parameters [CppParam { name: "m_FreeElementCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxElementCount", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_freeBlocks", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_usedBlocks", ty: "::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_freeSlots", ty: "::Unity::Collections::NativeList_1<int32_t>", modifiers: "", def_value: None, comment: None }]
  constexpr BlockAllocator(int32_t m_FreeElementCount, int32_t m_MaxElementCount, ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_freeBlocks,
                           ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_usedBlocks,
                           ::Unity::Collections::NativeList_1<int32_t> m_freeSlots) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20477 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_FreeElementCount, offset: 0x0, size: 0x4, def value: None
  int32_t m_FreeElementCount;

  /// @brief Field m_MaxElementCount, offset: 0x4, size: 0x4, def value: None
  int32_t m_MaxElementCount;

  /// @brief Field m_freeBlocks, offset: 0x8, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_freeBlocks;

  /// @brief Field m_usedBlocks, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator_Block> m_usedBlocks;

  /// @brief Field m_freeSlots, offset: 0x18, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> m_freeSlots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, m_FreeElementCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, m_MaxElementCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, m_freeBlocks) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, m_usedBlocks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator, m_freeSlots) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::BlockAllocator) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
