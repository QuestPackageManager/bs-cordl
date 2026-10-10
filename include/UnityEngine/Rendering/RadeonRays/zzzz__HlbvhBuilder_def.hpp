#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RadeonRays/HlbvhBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HlbvhBuilder)
namespace UnityEngine::Rendering::RadeonRays {
struct BottomLevelLevelAccelStruct;
}
namespace UnityEngine::Rendering::RadeonRays {
struct HlbvhBuilder_ScratchBufferLayout;
}
namespace UnityEngine::Rendering::RadeonRays {
struct IndexFormat;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadeonRaysShaders;
}
namespace UnityEngine::Rendering::RadeonRays {
class RadixSort;
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
class HlbvhBuilder;
}
namespace UnityEngine::Rendering::RadeonRays {
struct HlbvhBuilder_ScratchBufferLayout;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*);
MARK_VAL_T(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder*, "UnityEngine.Rendering.RadeonRays", "HlbvhBuilder");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, "UnityEngine.Rendering.RadeonRays", "HlbvhBuilder/ScratchBufferLayout");
// Dependencies
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: true
// CS Name: UnityEngine.Rendering.RadeonRays.HlbvhBuilder/ScratchBufferLayout
struct CORDL_TYPE HlbvhBuilder_ScratchBufferLayout {
public:
  // Declarations
  /// @brief Method Create, addr 0x6dfba1c, size 0x74, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout Create(uint32_t triangleCount);

  /// @brief Method Reserve, addr 0x6dfc50c, size 0x14, virtual false, abstract: false, final false
  inline uint32_t Reserve(uint32_t size);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HlbvhBuilder_ScratchBufferLayout();

  // Ctor Parameters [CppParam { name: "PrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MortonCodes", ty: "uint32_t", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "SortedPrimitiveRefs", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SortedMortonCodes", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "SortMemory", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Aabb", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "LeafParents", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "InternalNodeRange", ty: "uint32_t", modifiers:
  // "", def_value: None, comment: None }, CppParam { name: "TotalSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HlbvhBuilder_ScratchBufferLayout(uint32_t PrimitiveRefs, uint32_t MortonCodes, uint32_t SortedPrimitiveRefs, uint32_t SortedMortonCodes, uint32_t SortMemory, uint32_t Aabb,
                                             uint32_t LeafParents, uint32_t InternalNodeRange, uint32_t TotalSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20423 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field PrimitiveRefs, offset: 0x0, size: 0x4, def value: None
  uint32_t PrimitiveRefs;

  /// @brief Field MortonCodes, offset: 0x4, size: 0x4, def value: None
  uint32_t MortonCodes;

  /// @brief Field SortedPrimitiveRefs, offset: 0x8, size: 0x4, def value: None
  uint32_t SortedPrimitiveRefs;

  /// @brief Field SortedMortonCodes, offset: 0xc, size: 0x4, def value: None
  uint32_t SortedMortonCodes;

  /// @brief Field SortMemory, offset: 0x10, size: 0x4, def value: None
  uint32_t SortMemory;

  /// @brief Field Aabb, offset: 0x14, size: 0x4, def value: None
  uint32_t Aabb;

  /// @brief Field LeafParents, offset: 0x18, size: 0x4, def value: None
  uint32_t LeafParents;

  /// @brief Field InternalNodeRange, offset: 0x1c, size: 0x4, def value: None
  uint32_t InternalNodeRange;

  /// @brief Field TotalSize, offset: 0x20, size: 0x4, def value: None
  uint32_t TotalSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, PrimitiveRefs) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, MortonCodes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, SortedPrimitiveRefs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, SortedMortonCodes) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, SortMemory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, Aabb) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, LeafParents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, InternalNodeRange) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout, TotalSize) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout) == 0x24, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
// Dependencies System.Object
namespace UnityEngine::Rendering::RadeonRays {
// Is value type: false
// CS Name: UnityEngine.Rendering.RadeonRays.HlbvhBuilder
class CORDL_TYPE HlbvhBuilder : public ::System::Object {
public:
  // Declarations
  using ScratchBufferLayout = ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout;

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

  /// @brief Method BindKernelArguments, addr 0x6dfbf7c, size 0x1cc, virtual false, abstract: false, final false
  inline void BindKernelArguments(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t kernel, ::UnityEngine::GraphicsBuffer* vertices, ::UnityEngine::GraphicsBuffer* indices,
                                  ::UnityEngine::GraphicsBuffer* scratch, ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder_ScratchBufferLayout scratchLayout,
                                  ::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct result, bool setSortedCodes);

  /// @brief Method Execute, addr 0x6dfba98, size 0x4e4, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::GraphicsBuffer* vertices, int32_t verticesOffset, uint32_t vertexStride, ::UnityEngine::GraphicsBuffer* indices,
                      int32_t indicesOffset, int32_t baseIndex, ::UnityEngine::Rendering::RadeonRays::IndexFormat indexFormat, uint32_t triangleCount, ::UnityEngine::GraphicsBuffer* scratch,
                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RadeonRays::BottomLevelLevelAccelStruct const> result);

  /// @brief Method GetBvhNodeCount, addr 0x6dfb23c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t GetBvhNodeCount(uint32_t leafCount);

  /// @brief Method GetResultDataSizeInDwords, addr 0x6dfba90, size 0x8, virtual false, abstract: false, final false
  inline uint32_t GetResultDataSizeInDwords(uint32_t triangleCount);

  /// @brief Method GetScratchDataSizeInDwords, addr 0x6dfb9f8, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetScratchDataSizeInDwords(uint32_t triangleCount);

  static inline ::UnityEngine::Rendering::RadeonRays::HlbvhBuilder* New_ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

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

  /// @brief Method .ctor, addr 0x6dfb7d4, size 0x144, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::RadeonRays::RadeonRaysShaders* shaders);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HlbvhBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HlbvhBuilder", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HlbvhBuilder(HlbvhBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HlbvhBuilder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HlbvhBuilder(HlbvhBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20424 };

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
static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___shaderBuildHlbvh) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___kernelInit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___kernelCalculateAabb) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___kernelCalculateMortonCodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___kernelBuildTreeBottomUp) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder, ___radixSort) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RadeonRays::HlbvhBuilder) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::RadeonRays
