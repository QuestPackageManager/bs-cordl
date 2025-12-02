#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_DataLocation;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3Int;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeBrickPool;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_DataLocation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeBrickPool);
MARK_VAL_T(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc);
MARK_VAL_T(::UnityEngine::Rendering::ProbeBrickPool_DataLocation);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickPool/BrickChunkAlloc
struct CORDL_TYPE ProbeBrickPool_BrickChunkAlloc {
public:
  // Declarations
  /// @brief Method flattenIndex, addr 0x656ab04, size 0x14, virtual false, abstract: false, final false
  inline int32_t flattenIndex(int32_t sx, int32_t sy);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickPool_BrickChunkAlloc();

  // Ctor Parameters [CppParam { name: "x", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr ProbeBrickPool_BrickChunkAlloc(int32_t x, int32_t y, int32_t z) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12053 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field x, offset: 0x0, size: 0x4, def value: None
  int32_t x;

  /// @brief Field y, offset: 0x4, size: 0x4, def value: None
  int32_t y;

  /// @brief Field z, offset: 0x8, size: 0x4, def value: None
  int32_t z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc, z) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeBrickPool/DataLocation
struct CORDL_TYPE ProbeBrickPool_DataLocation {
public:
  // Declarations
  /// @brief Method Cleanup, addr 0x656bbf0, size 0xf0, virtual false, abstract: false, final false
  inline void Cleanup();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickPool_DataLocation();

  // Ctor Parameters [CppParam { name: "TexL0_L1rx", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexL1_G_ry", ty: "::UnityW<::UnityEngine::Texture>",
  // modifiers: "", def_value: None }, CppParam { name: "TexL1_B_rz", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexL2_0", ty:
  // "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexL2_1", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name:
  // "TexL2_2", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexL2_3", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam
  // { name: "TexProbeOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexValidity", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "",
  // def_value: None }, CppParam { name: "TexSkyOcclusion", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "TexSkyShadingDirectionIndices", ty:
  // "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "depth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeBrickPool_DataLocation(::UnityW<::UnityEngine::Texture> TexL0_L1rx, ::UnityW<::UnityEngine::Texture> TexL1_G_ry, ::UnityW<::UnityEngine::Texture> TexL1_B_rz,
                                        ::UnityW<::UnityEngine::Texture> TexL2_0, ::UnityW<::UnityEngine::Texture> TexL2_1, ::UnityW<::UnityEngine::Texture> TexL2_2,
                                        ::UnityW<::UnityEngine::Texture> TexL2_3, ::UnityW<::UnityEngine::Texture> TexProbeOcclusion, ::UnityW<::UnityEngine::Texture> TexValidity,
                                        ::UnityW<::UnityEngine::Texture> TexSkyOcclusion, ::UnityW<::UnityEngine::Texture> TexSkyShadingDirectionIndices, int32_t width, int32_t height,
                                        int32_t depth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12054 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  /// @brief Field TexL0_L1rx, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL0_L1rx;

  /// @brief Field TexL1_G_ry, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL1_G_ry;

  /// @brief Field TexL1_B_rz, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL1_B_rz;

  /// @brief Field TexL2_0, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL2_0;

  /// @brief Field TexL2_1, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL2_1;

  /// @brief Field TexL2_2, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL2_2;

  /// @brief Field TexL2_3, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexL2_3;

  /// @brief Field TexProbeOcclusion, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexProbeOcclusion;

  /// @brief Field TexValidity, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexValidity;

  /// @brief Field TexSkyOcclusion, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexSkyOcclusion;

  /// @brief Field TexSkyShadingDirectionIndices, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> TexSkyShadingDirectionIndices;

  /// @brief Field width, offset: 0x58, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x5c, size: 0x4, def value: None
  int32_t height;

  /// @brief Field depth, offset: 0x60, size: 0x4, def value: None
  int32_t depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL0_L1rx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL1_G_ry) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL1_B_rz) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL2_0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL2_1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL2_2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexL2_3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexProbeOcclusion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexValidity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexSkyOcclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, TexSkyShadingDirectionIndices) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, width) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, height) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, depth) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickPool_DataLocation, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword, UnityEngine.Rendering.ProbeBrickPool::BrickChunkAlloc, UnityEngine.Rendering.ProbeBrickPool::DataLocation,
// UnityEngine.Rendering.ProbeVolumeSHBands
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeBrickPool
class CORDL_TYPE ProbeBrickPool : public ::System::Object {
public:
  // Declarations
  using BrickChunkAlloc = ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc;

  using DataLocation = ::UnityEngine::Rendering::ProbeBrickPool_DataLocation;

  /// @brief Field _Out_L0_L1Rx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L0_L1Rx, put = setStaticF__Out_L0_L1Rx)) int32_t _Out_L0_L1Rx;

  /// @brief Field _Out_L1B_L1Rz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L1B_L1Rz, put = setStaticF__Out_L1B_L1Rz)) int32_t _Out_L1B_L1Rz;

  /// @brief Field _Out_L1G_L1Ry, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L1G_L1Ry, put = setStaticF__Out_L1G_L1Ry)) int32_t _Out_L1G_L1Ry;

  /// @brief Field _Out_L2_0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L2_0, put = setStaticF__Out_L2_0)) int32_t _Out_L2_0;

  /// @brief Field _Out_L2_1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L2_1, put = setStaticF__Out_L2_1)) int32_t _Out_L2_1;

  /// @brief Field _Out_L2_2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L2_2, put = setStaticF__Out_L2_2)) int32_t _Out_L2_2;

  /// @brief Field _Out_L2_3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_L2_3, put = setStaticF__Out_L2_3)) int32_t _Out_L2_3;

  /// @brief Field _Out_ProbeOcclusion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_ProbeOcclusion, put = setStaticF__Out_ProbeOcclusion)) int32_t _Out_ProbeOcclusion;

  /// @brief Field _Out_Shared, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_Shared, put = setStaticF__Out_Shared)) int32_t _Out_Shared;

  /// @brief Field _Out_SkyOcclusionL0L1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_SkyOcclusionL0L1, put = setStaticF__Out_SkyOcclusionL0L1)) int32_t _Out_SkyOcclusionL0L1;

  /// @brief Field _Out_SkyShadingDirectionIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Out_SkyShadingDirectionIndices, put = setStaticF__Out_SkyShadingDirectionIndices)) int32_t _Out_SkyShadingDirectionIndices;

  /// @brief Field _ProbeVolumeScratchBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeVolumeScratchBuffer, put = setStaticF__ProbeVolumeScratchBuffer)) int32_t _ProbeVolumeScratchBuffer;

  /// @brief Field _ProbeVolumeScratchBufferLayout, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ProbeVolumeScratchBufferLayout, put = setStaticF__ProbeVolumeScratchBufferLayout)) int32_t _ProbeVolumeScratchBufferLayout;

  /// @brief Field <estimatedVMemCost>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__estimatedVMemCost_k__BackingField, put = __cordl_internal_set__estimatedVMemCost_k__BackingField)) int32_t _estimatedVMemCost_k__BackingField;

  __declspec(property(get = get_estimatedVMemCost, put = set_estimatedVMemCost)) int32_t estimatedVMemCost;

  /// @brief Field m_AvailableChunkCount, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AvailableChunkCount, put = __cordl_internal_set_m_AvailableChunkCount)) int32_t m_AvailableChunkCount;

  /// @brief Field m_ContainsProbeOcclusion, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ContainsProbeOcclusion, put = __cordl_internal_set_m_ContainsProbeOcclusion)) bool m_ContainsProbeOcclusion;

  /// @brief Field m_ContainsRenderingLayers, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ContainsRenderingLayers, put = __cordl_internal_set_m_ContainsRenderingLayers)) bool m_ContainsRenderingLayers;

  /// @brief Field m_ContainsSkyOcclusion, offset 0xa3, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ContainsSkyOcclusion, put = __cordl_internal_set_m_ContainsSkyOcclusion)) bool m_ContainsSkyOcclusion;

  /// @brief Field m_ContainsSkyShadingDirection, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ContainsSkyShadingDirection, put = __cordl_internal_set_m_ContainsSkyShadingDirection)) bool m_ContainsSkyShadingDirection;

  /// @brief Field m_ContainsValidity, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ContainsValidity, put = __cordl_internal_set_m_ContainsValidity)) bool m_ContainsValidity;

  /// @brief Field m_FreeList, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeList,
                      put = __cordl_internal_set_m_FreeList)) ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* m_FreeList;

  /// @brief Field m_NextFreeChunk, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_m_NextFreeChunk, put = __cordl_internal_set_m_NextFreeChunk)) ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc m_NextFreeChunk;

  /// @brief Field m_Pool, offset 0x18, size 0x68
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::UnityEngine::Rendering::ProbeBrickPool_DataLocation m_Pool;

  /// @brief Field m_SHBands, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SHBands, put = __cordl_internal_set_m_SHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands m_SHBands;

  /// @brief Field s_DataUploadCS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DataUploadCS, put = setStaticF_s_DataUploadCS)) ::UnityW<::UnityEngine::ComputeShader> s_DataUploadCS;

  /// @brief Field s_DataUploadKernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DataUploadKernel, put = setStaticF_s_DataUploadKernel)) int32_t s_DataUploadKernel;

  /// @brief Field s_DataUploadL2CS, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DataUploadL2CS, put = setStaticF_s_DataUploadL2CS)) ::UnityW<::UnityEngine::ComputeShader> s_DataUploadL2CS;

  /// @brief Field s_DataUploadL2Kernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DataUploadL2Kernel, put = setStaticF_s_DataUploadL2Kernel)) int32_t s_DataUploadL2Kernel;

  /// @brief Field s_DataUpload_ProbeOcclusion, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DataUpload_ProbeOcclusion, put = setStaticF_s_DataUpload_ProbeOcclusion)) ::UnityEngine::Rendering::LocalKeyword s_DataUpload_ProbeOcclusion;

  /// @brief Field s_DataUpload_Shared, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DataUpload_Shared, put = setStaticF_s_DataUpload_Shared)) ::UnityEngine::Rendering::LocalKeyword s_DataUpload_Shared;

  /// @brief Field s_DataUpload_SkyOcclusion, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DataUpload_SkyOcclusion, put = setStaticF_s_DataUpload_SkyOcclusion)) ::UnityEngine::Rendering::LocalKeyword s_DataUpload_SkyOcclusion;

  /// @brief Field s_DataUpload_SkyShadingDirection, offset 0xffffffff, size 0x18
  __declspec(property(get = getStaticF_s_DataUpload_SkyShadingDirection, put = setStaticF_s_DataUpload_SkyShadingDirection)) ::UnityEngine::Rendering::LocalKeyword s_DataUpload_SkyShadingDirection;

  /// @brief Method Allocate, addr 0x656c104, size 0x284, virtual false, abstract: false, final false
  inline bool Allocate(int32_t numberOfBrickChunks, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* outAllocations, bool ignoreErrorLog);

  /// @brief Method AllocatePool, addr 0x656b43c, size 0x12c, virtual false, abstract: false, final false
  inline void AllocatePool(int32_t width, int32_t height, int32_t depth);

  /// @brief Method Cleanup, addr 0x656d8d4, size 0x8, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x656c08c, size 0x60, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CreateDataLocation, addr 0x656b568, size 0x5f0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ProbeBrickPool_DataLocation CreateDataLocation(int32_t numProbes, bool compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, ::StringW name,
                                                                                         bool allocateRendertexture, bool allocateValidityData, bool allocateRenderingLayers,
                                                                                         bool allocateSkyOcclusionData, bool allocateSkyShadingDirectionData, bool allocateProbeOcclusionData,
                                                                                         ::ByRef<int32_t> allocatedBytes);

  /// @brief Method CreateDataTexture, addr 0x656d6a4, size 0x230, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> CreateDataTexture(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name,
                                                                   bool allocateRendertexture, ::ByRef<int32_t> allocatedBytes);

  /// @brief Method Deallocate, addr 0x656c388, size 0x154, virtual false, abstract: false, final false
  inline void Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations);

  /// @brief Method DerivePoolSizeFromBudget, addr 0x656b428, size 0x14, virtual false, abstract: false, final false
  static inline void DerivePoolSizeFromBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::ByRef<int32_t> width, ::ByRef<int32_t> height, ::ByRef<int32_t> depth);

  /// @brief Method DivRoundUp, addr 0x656ae30, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivRoundUp(int32_t x, int32_t y);

  /// @brief Method EnsureTextureValidity, addr 0x656bce0, size 0x94, virtual false, abstract: false, final false
  inline bool EnsureTextureValidity(bool renderingLayers, bool skyOcclusion, bool skyDirection, bool probeOcclusion);

  /// @brief Method EnsureTextureValidity, addr 0x656bb60, size 0x90, virtual false, abstract: false, final false
  inline void EnsureTextureValidity();

  /// @brief Method EstimateMemoryCost, addr 0x656d53c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t EstimateMemoryCost(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method EstimateMemoryCostForBlending, addr 0x656d564, size 0x140, virtual false, abstract: false, final false
  static inline int32_t EstimateMemoryCostForBlending(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, bool compressed, ::UnityEngine::Rendering::ProbeVolumeSHBands bands);

  /// @brief Method GetChunkCount, addr 0x656c0ec, size 0x18, virtual false, abstract: false, final false
  static inline int32_t GetChunkCount(int32_t brickCount);

  /// @brief Method GetChunkSizeInBrickCount, addr 0x656bd74, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetChunkSizeInBrickCount();

  /// @brief Method GetChunkSizeInProbeCount, addr 0x656bd7c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetChunkSizeInProbeCount();

  /// @brief Method GetPoolDimensions, addr 0x656bd94, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetPoolDimensions();

  /// @brief Method GetPoolHeight, addr 0x656bd8c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPoolHeight();

  /// @brief Method GetPoolWidth, addr 0x656bd84, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetPoolWidth();

  /// @brief Method GetProbeOcclusionTexture, addr 0x656b2b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetProbeOcclusionTexture();

  /// @brief Method GetRemainingChunkCount, addr 0x656bb58, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetRemainingChunkCount();

  /// @brief Method GetRuntimeResources, addr 0x656bda4, size 0x2e8, virtual false, abstract: false, final false
  inline void GetRuntimeResources(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources> rr);

  /// @brief Method GetSkyOcclusionTexture, addr 0x656b2a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetSkyOcclusionTexture();

  /// @brief Method GetSkyShadingDirectionIndicesTexture, addr 0x656b2b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetSkyShadingDirectionIndicesTexture();

  /// @brief Method GetValidityTexture, addr 0x656b2a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> GetValidityTexture();

  /// @brief Method Initialize, addr 0x656ae50, size 0x450, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::Rendering::ProbeBrickPool* New_ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands,
                                                                   bool allocateValidityData, bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData,
                                                                   bool allocateProbeOcclusionData);

  /// @brief Method ProbeCountToDataLocSize, addr 0x656d4d0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3Int ProbeCountToDataLocSize(int32_t numProbes);

  /// @brief Method Update, addr 0x656c98c, size 0x970, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, bool updateSharedData, ::UnityEngine::Texture* validityTexture,
                     ::UnityEngine::Rendering::ProbeVolumeSHBands bands, bool skyOcclusion, ::UnityEngine::Texture* skyOcclusionTexture, bool skyShadingDirections,
                     ::UnityEngine::Texture* skyShadingDirectionsTexture, bool probeOcclusion);

  /// @brief Method Update, addr 0x656c4dc, size 0x4b0, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, int32_t destStartIndex,
                     ::UnityEngine::Rendering::ProbeVolumeSHBands bands);

  /// @brief Method UpdateValidity, addr 0x656d330, size 0x1a0, virtual false, abstract: false, final false
  inline void UpdateValidity(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source,
                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                             ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, int32_t destStartIndex);

  constexpr int32_t const& __cordl_internal_get__estimatedVMemCost_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__estimatedVMemCost_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_AvailableChunkCount() const;

  constexpr int32_t& __cordl_internal_get_m_AvailableChunkCount();

  constexpr bool const& __cordl_internal_get_m_ContainsProbeOcclusion() const;

  constexpr bool& __cordl_internal_get_m_ContainsProbeOcclusion();

  constexpr bool const& __cordl_internal_get_m_ContainsRenderingLayers() const;

  constexpr bool& __cordl_internal_get_m_ContainsRenderingLayers();

  constexpr bool const& __cordl_internal_get_m_ContainsSkyOcclusion() const;

  constexpr bool& __cordl_internal_get_m_ContainsSkyOcclusion();

  constexpr bool const& __cordl_internal_get_m_ContainsSkyShadingDirection() const;

  constexpr bool& __cordl_internal_get_m_ContainsSkyShadingDirection();

  constexpr bool const& __cordl_internal_get_m_ContainsValidity() const;

  constexpr bool& __cordl_internal_get_m_ContainsValidity();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const& __cordl_internal_get_m_FreeList() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& __cordl_internal_get_m_FreeList();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc const& __cordl_internal_get_m_NextFreeChunk() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc& __cordl_internal_get_m_NextFreeChunk();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation& __cordl_internal_get_m_Pool();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_SHBands() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_SHBands();

  constexpr void __cordl_internal_set__estimatedVMemCost_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_AvailableChunkCount(int32_t value);

  constexpr void __cordl_internal_set_m_ContainsProbeOcclusion(bool value);

  constexpr void __cordl_internal_set_m_ContainsRenderingLayers(bool value);

  constexpr void __cordl_internal_set_m_ContainsSkyOcclusion(bool value);

  constexpr void __cordl_internal_set_m_ContainsSkyShadingDirection(bool value);

  constexpr void __cordl_internal_set_m_ContainsValidity(bool value);

  constexpr void __cordl_internal_set_m_FreeList(::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value);

  constexpr void __cordl_internal_set_m_NextFreeChunk(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Rendering::ProbeBrickPool_DataLocation value);

  constexpr void __cordl_internal_set_m_SHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value);

  /// @brief Method .ctor, addr 0x656b2c0, size 0x168, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool allocateValidityData,
                    bool allocateRenderingLayerData, bool allocateSkyOcclusion, bool allocateSkyShadingData, bool allocateProbeOcclusionData);

  static inline int32_t getStaticF__Out_L0_L1Rx();

  static inline int32_t getStaticF__Out_L1B_L1Rz();

  static inline int32_t getStaticF__Out_L1G_L1Ry();

  static inline int32_t getStaticF__Out_L2_0();

  static inline int32_t getStaticF__Out_L2_1();

  static inline int32_t getStaticF__Out_L2_2();

  static inline int32_t getStaticF__Out_L2_3();

  static inline int32_t getStaticF__Out_ProbeOcclusion();

  static inline int32_t getStaticF__Out_Shared();

  static inline int32_t getStaticF__Out_SkyOcclusionL0L1();

  static inline int32_t getStaticF__Out_SkyShadingDirectionIndices();

  static inline int32_t getStaticF__ProbeVolumeScratchBuffer();

  static inline int32_t getStaticF__ProbeVolumeScratchBufferLayout();

  static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_s_DataUploadCS();

  static inline int32_t getStaticF_s_DataUploadKernel();

  static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_s_DataUploadL2CS();

  static inline int32_t getStaticF_s_DataUploadL2Kernel();

  static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_ProbeOcclusion();

  static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_Shared();

  static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_SkyOcclusion();

  static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DataUpload_SkyShadingDirection();

  /// @brief Method get_estimatedVMemCost, addr 0x656ae40, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  static inline void setStaticF__Out_L0_L1Rx(int32_t value);

  static inline void setStaticF__Out_L1B_L1Rz(int32_t value);

  static inline void setStaticF__Out_L1G_L1Ry(int32_t value);

  static inline void setStaticF__Out_L2_0(int32_t value);

  static inline void setStaticF__Out_L2_1(int32_t value);

  static inline void setStaticF__Out_L2_2(int32_t value);

  static inline void setStaticF__Out_L2_3(int32_t value);

  static inline void setStaticF__Out_ProbeOcclusion(int32_t value);

  static inline void setStaticF__Out_Shared(int32_t value);

  static inline void setStaticF__Out_SkyOcclusionL0L1(int32_t value);

  static inline void setStaticF__Out_SkyShadingDirectionIndices(int32_t value);

  static inline void setStaticF__ProbeVolumeScratchBuffer(int32_t value);

  static inline void setStaticF__ProbeVolumeScratchBufferLayout(int32_t value);

  static inline void setStaticF_s_DataUploadCS(::UnityW<::UnityEngine::ComputeShader> value);

  static inline void setStaticF_s_DataUploadKernel(int32_t value);

  static inline void setStaticF_s_DataUploadL2CS(::UnityW<::UnityEngine::ComputeShader> value);

  static inline void setStaticF_s_DataUploadL2Kernel(int32_t value);

  static inline void setStaticF_s_DataUpload_ProbeOcclusion(::UnityEngine::Rendering::LocalKeyword value);

  static inline void setStaticF_s_DataUpload_Shared(::UnityEngine::Rendering::LocalKeyword value);

  static inline void setStaticF_s_DataUpload_SkyOcclusion(::UnityEngine::Rendering::LocalKeyword value);

  static inline void setStaticF_s_DataUpload_SkyShadingDirection(::UnityEngine::Rendering::LocalKeyword value);

  /// @brief Method set_estimatedVMemCost, addr 0x656ae48, size 0x8, virtual false, abstract: false, final false
  inline void set_estimatedVMemCost(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeBrickPool(ProbeBrickPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeBrickPool(ProbeBrickPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12055 };

  /// @brief Field kBrickCellCount offset 0xffffffff size 0x4
  static constexpr int32_t kBrickCellCount{ static_cast<int32_t>(0x3) };

  /// @brief Field kBrickProbeCountPerDim offset 0xffffffff size 0x4
  static constexpr int32_t kBrickProbeCountPerDim{ static_cast<int32_t>(0x4) };

  /// @brief Field kBrickProbeCountTotal offset 0xffffffff size 0x4
  static constexpr int32_t kBrickProbeCountTotal{ static_cast<int32_t>(0x40) };

  /// @brief Field kChunkProbeCountPerDim offset 0xffffffff size 0x4
  static constexpr int32_t kChunkProbeCountPerDim{ static_cast<int32_t>(0x200) };

  /// @brief Field kChunkSizeInBricks offset 0xffffffff size 0x4
  static constexpr int32_t kChunkSizeInBricks{ static_cast<int32_t>(0x80) };

  /// @brief Field kMaxPoolWidth offset 0xffffffff size 0x4
  static constexpr int32_t kMaxPoolWidth{ static_cast<int32_t>(0x800) };

  /// @brief Field <estimatedVMemCost>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____estimatedVMemCost_k__BackingField;

  /// @brief Field m_Pool, offset: 0x18, size: 0x68, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool_DataLocation ___m_Pool;

  /// @brief Field m_NextFreeChunk, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc ___m_NextFreeChunk;

  /// @brief Field m_FreeList, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* ___m_FreeList;

  /// @brief Field m_AvailableChunkCount, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_AvailableChunkCount;

  /// @brief Field m_SHBands, offset: 0x9c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSHBands ___m_SHBands;

  /// @brief Field m_ContainsValidity, offset: 0xa0, size: 0x1, def value: None
  bool ___m_ContainsValidity;

  /// @brief Field m_ContainsProbeOcclusion, offset: 0xa1, size: 0x1, def value: None
  bool ___m_ContainsProbeOcclusion;

  /// @brief Field m_ContainsRenderingLayers, offset: 0xa2, size: 0x1, def value: None
  bool ___m_ContainsRenderingLayers;

  /// @brief Field m_ContainsSkyOcclusion, offset: 0xa3, size: 0x1, def value: None
  bool ___m_ContainsSkyOcclusion;

  /// @brief Field m_ContainsSkyShadingDirection, offset: 0xa4, size: 0x1, def value: None
  bool ___m_ContainsSkyShadingDirection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ____estimatedVMemCost_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_Pool) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_NextFreeChunk) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_FreeList) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_AvailableChunkCount) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_SHBands) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsValidity) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsProbeOcclusion) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsRenderingLayers) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsSkyOcclusion) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickPool, ___m_ContainsSkyShadingDirection) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickPool, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeBrickPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickPool*, "UnityEngine.Rendering", "ProbeBrickPool");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc, "UnityEngine.Rendering", "ProbeBrickPool/BrickChunkAlloc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickPool_DataLocation, "UnityEngine.Rendering", "ProbeBrickPool/DataLocation");
