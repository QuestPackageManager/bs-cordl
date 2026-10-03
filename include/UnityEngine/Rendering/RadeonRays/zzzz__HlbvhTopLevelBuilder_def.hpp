#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/HlbvhTopLevelBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HlbvhTopLevelBuilder)
namespace UnityEngine::Rendering::RadeonRays {
struct HlbvhTopLevelBuilder_ScratchBufferLayout;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadixSort;
}
namespace UnityEngine::Rendering::RadeonRays {
struct TopLevelAccelStruct;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
// Forward declare root types
namespace UnityEngine::Rendering::RadeonRays {
class HlbvhTopLevelBuilder;
}
namespace UnityEngine::Rendering::RadeonRays {
struct HlbvhTopLevelBuilder_ScratchBufferLayout;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*);
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder*, "UnityEngine.Rendering.RadeonRays", "HlbvhTopLevelBuilder");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, "UnityEngine.Rendering.RadeonRays", "HlbvhTopLevelBuilder/ScratchBufferLayout");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.HlbvhTopLevelBuilder/ScratchBufferLayout
struct CORDL_TYPE HlbvhTopLevelBuilder_ScratchBufferLayout {
public:
  // Declarations
  /// @brief Method Create, addr 0x6dfc6bc, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout Create(uint32_t instanceCount);

  /// @brief Method Reserve, addr 0x6dfcee0, size 0x14, virtual false, abstract: false, final false
  inline uint32_t Reserve(uint32_t size);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HlbvhTopLevelBuilder_ScratchBufferLayout();

  // Ctor Parameters [CppParam { name: "Aabb", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MortonCodes", ty: "uint32_t", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "PrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SortedMortonCodes", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "SortedPrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SortMemory", ty: "uint32_t", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "InternalNodeRange", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TotalSize", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }]
  constexpr HlbvhTopLevelBuilder_ScratchBufferLayout(uint32_t Aabb, uint32_t MortonCodes, uint32_t PrimitiveRefs, uint32_t SortedMortonCodes, uint32_t SortedPrimitiveRefs, uint32_t SortMemory,
                                                     uint32_t InternalNodeRange, uint32_t TotalSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20426 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field Aabb, offset: 0x0, size: 0x4, def value: None
  uint32_t Aabb;

  /// @brief Field MortonCodes, offset: 0x4, size: 0x4, def value: None
  uint32_t MortonCodes;

  /// @brief Field PrimitiveRefs, offset: 0x8, size: 0x4, def value: None
  uint32_t PrimitiveRefs;

  /// @brief Field SortedMortonCodes, offset: 0xc, size: 0x4, def value: None
  uint32_t SortedMortonCodes;

  /// @brief Field SortedPrimitiveRefs, offset: 0x10, size: 0x4, def value: None
  uint32_t SortedPrimitiveRefs;

  /// @brief Field SortMemory, offset: 0x14, size: 0x4, def value: None
  uint32_t SortMemory;

  /// @brief Field InternalNodeRange, offset: 0x18, size: 0x4, def value: None
  uint32_t InternalNodeRange;

  /// @brief Field TotalSize, offset: 0x1c, size: 0x4, def value: None
  uint32_t TotalSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, Aabb) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, MortonCodes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, PrimitiveRefs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, SortedMortonCodes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, SortedPrimitiveRefs) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, SortMemory) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, InternalNodeRange) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout, TotalSize) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.HlbvhTopLevelBuilder
class CORDL_TYPE HlbvhTopLevelBuilder : public ::System::Object {
public:
  // Declarations
  using ScratchBufferLayout = ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout;

  /// @brief Field kernelBuildTreeBottomUp, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelBuildTreeBottomUp, put = __cordl_internal_set_kernelBuildTreeBottomUp)) int32_t kernelBuildTreeBottomUp;

  /// @brief Field kernelCalculateAabb, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelCalculateAabb, put = __cordl_internal_set_kernelCalculateAabb)) int32_t kernelCalculateAabb;

  /// @brief Field kernelCalculateMortonCodes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelCalculateMortonCodes, put = __cordl_internal_set_kernelCalculateMortonCodes)) int32_t kernelCalculateMortonCodes;

  /// @brief Field kernelInit, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelInit, put = __cordl_internal_set_kernelInit)) int32_t kernelInit;

  /// @brief Field radixSort, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_radixSort, put = __cordl_internal_set_radixSort)) ::UnityEngine::Rendering::RadeonRays::RadixSort* radixSort;

  /// @brief Field shaderBuildHlbvh, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_shaderBuildHlbvh, put = __cordl_internal_set_shaderBuildHlbvh)) ::UnityW<::UnityEngine::ComputeShader> shaderBuildHlbvh;

  /// @brief Method AllocateResultBuffers, addr 0x6dfc738, size 0x118, virtual false, abstract: false, final false
  inline void AllocateResultBuffers(uint32_t instanceCount, ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct);

  /// @brief Method BindKernelArguments, addr 0x6dfcd3c, size 0x1a4, virtual false, abstract: false, final false
  inline void BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* scratch,
                                  ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder_ScratchBufferLayout scratchLayout, ::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct accelStruct,
                                  bool setSortedCodes);

  /// @brief Method CreateEmpty, addr 0x6dfc850, size 0x13c, virtual false, abstract: false, final false
  inline void CreateEmpty(::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct);

  /// @brief Method Execute, addr 0x6dfc98c, size 0x3b0, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* scratch, ::by_ref<::UnityEngine::Rendering::RadeonRays::TopLevelAccelStruct> accelStruct);

  /// @brief Method GetBvhNodeCount, addr 0x6dfc730, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetBvhNodeCount(uint32_t leafCount);

  /// @brief Method GetScratchDataSizeInDwords, addr 0x6dfc698, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetScratchDataSizeInDwords(uint32_t instanceCount);

  static inline ::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

  constexpr int32_t const& __cordl_internal_get_kernelBuildTreeBottomUp() const;

  constexpr int32_t& __cordl_internal_get_kernelBuildTreeBottomUp();

  constexpr int32_t const& __cordl_internal_get_kernelCalculateAabb() const;

  constexpr int32_t& __cordl_internal_get_kernelCalculateAabb();

  constexpr int32_t const& __cordl_internal_get_kernelCalculateMortonCodes() const;

  constexpr int32_t& __cordl_internal_get_kernelCalculateMortonCodes();

  constexpr int32_t const& __cordl_internal_get_kernelInit() const;

  constexpr int32_t& __cordl_internal_get_kernelInit();

  constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort* const& __cordl_internal_get_radixSort() const;

  constexpr ::UnityEngine::Rendering::RadeonRays::RadixSort*& __cordl_internal_get_radixSort();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_shaderBuildHlbvh() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_shaderBuildHlbvh();

  constexpr void __cordl_internal_set_kernelBuildTreeBottomUp(int32_t value);

  constexpr void __cordl_internal_set_kernelCalculateAabb(int32_t value);

  constexpr void __cordl_internal_set_kernelCalculateMortonCodes(int32_t value);

  constexpr void __cordl_internal_set_kernelInit(int32_t value);

  constexpr void __cordl_internal_set_radixSort(::UnityEngine::Rendering::RadeonRays::RadixSort* value);

  constexpr void __cordl_internal_set_shaderBuildHlbvh(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6dfc554, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HlbvhTopLevelBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HlbvhTopLevelBuilder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HlbvhTopLevelBuilder(HlbvhTopLevelBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HlbvhTopLevelBuilder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HlbvhTopLevelBuilder(HlbvhTopLevelBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20427 };

  /// @brief Field kGroupSize offset 0xffffffff size 0x4
  static constexpr uint32_t kGroupSize{ static_cast<uint32_t>(0x100u) };

  /// @brief Field kTrianglesPerGroup offset 0xffffffff size 0x4
  static constexpr uint32_t kTrianglesPerGroup{ static_cast<uint32_t>(0x800u) };

  /// @brief Field kTrianglesPerThread offset 0xffffffff size 0x4
  static constexpr uint32_t kTrianglesPerThread{ static_cast<uint32_t>(0x8u) };

  /// @brief Field shaderBuildHlbvh, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___shaderBuildHlbvh;

  /// @brief Field kernelInit, offset: 0x18, size: 0x4, def value: None
  int32_t ___kernelInit;

  /// @brief Field kernelCalculateAabb, offset: 0x1c, size: 0x4, def value: None
  int32_t ___kernelCalculateAabb;

  /// @brief Field kernelCalculateMortonCodes, offset: 0x20, size: 0x4, def value: None
  int32_t ___kernelCalculateMortonCodes;

  /// @brief Field kernelBuildTreeBottomUp, offset: 0x24, size: 0x4, def value: None
  int32_t ___kernelBuildTreeBottomUp;

  /// @brief Field radixSort, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::RadeonRays::RadixSort* ___radixSort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___shaderBuildHlbvh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___kernelInit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___kernelCalculateAabb) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___kernelCalculateMortonCodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___kernelBuildTreeBottomUp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder, ___radixSort) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::HlbvhTopLevelBuilder) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
