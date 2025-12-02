#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeBrickBlendingPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeBrickBlendingPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class ProbeBrickPool;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_Cell;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBlendingTextureMemoryBudget;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeBrickBlendingPool;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeBrickBlendingPool);
// Dependencies System.Object, UnityEngine.Rendering.ProbeVolumeSHBands, UnityEngine.Rendering.ProbeVolumeTextureMemoryBudget
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeBrickBlendingPool
class CORDL_TYPE ProbeBrickBlendingPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field _ChunkList, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ChunkList, put = setStaticF__ChunkList)) int32_t _ChunkList;

  /// @brief Field _PoolDim_LerpFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PoolDim_LerpFactor, put = setStaticF__PoolDim_LerpFactor)) int32_t _PoolDim_LerpFactor;

  /// @brief Field _State0_L0_L1Rx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L0_L1Rx, put = setStaticF__State0_L0_L1Rx)) int32_t _State0_L0_L1Rx;

  /// @brief Field _State0_L1B_L1Rz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L1B_L1Rz, put = setStaticF__State0_L1B_L1Rz)) int32_t _State0_L1B_L1Rz;

  /// @brief Field _State0_L1G_L1Ry, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L1G_L1Ry, put = setStaticF__State0_L1G_L1Ry)) int32_t _State0_L1G_L1Ry;

  /// @brief Field _State0_L2_0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L2_0, put = setStaticF__State0_L2_0)) int32_t _State0_L2_0;

  /// @brief Field _State0_L2_1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L2_1, put = setStaticF__State0_L2_1)) int32_t _State0_L2_1;

  /// @brief Field _State0_L2_2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L2_2, put = setStaticF__State0_L2_2)) int32_t _State0_L2_2;

  /// @brief Field _State0_L2_3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_L2_3, put = setStaticF__State0_L2_3)) int32_t _State0_L2_3;

  /// @brief Field _State0_ProbeOcclusion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State0_ProbeOcclusion, put = setStaticF__State0_ProbeOcclusion)) int32_t _State0_ProbeOcclusion;

  /// @brief Field _State1_L0_L1Rx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L0_L1Rx, put = setStaticF__State1_L0_L1Rx)) int32_t _State1_L0_L1Rx;

  /// @brief Field _State1_L1B_L1Rz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L1B_L1Rz, put = setStaticF__State1_L1B_L1Rz)) int32_t _State1_L1B_L1Rz;

  /// @brief Field _State1_L1G_L1Ry, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L1G_L1Ry, put = setStaticF__State1_L1G_L1Ry)) int32_t _State1_L1G_L1Ry;

  /// @brief Field _State1_L2_0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L2_0, put = setStaticF__State1_L2_0)) int32_t _State1_L2_0;

  /// @brief Field _State1_L2_1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L2_1, put = setStaticF__State1_L2_1)) int32_t _State1_L2_1;

  /// @brief Field _State1_L2_2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L2_2, put = setStaticF__State1_L2_2)) int32_t _State1_L2_2;

  /// @brief Field _State1_L2_3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_L2_3, put = setStaticF__State1_L2_3)) int32_t _State1_L2_3;

  /// @brief Field _State1_ProbeOcclusion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__State1_ProbeOcclusion, put = setStaticF__State1_ProbeOcclusion)) int32_t _State1_ProbeOcclusion;

  __declspec(property(get = get_estimatedVMemCost)) int32_t estimatedVMemCost;

  __declspec(property(get = get_isAllocated)) bool isAllocated;

  /// @brief Field m_ChunkList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChunkList, put = __cordl_internal_set_m_ChunkList)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_ChunkList;

  /// @brief Field m_MappedChunks, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MappedChunks, put = __cordl_internal_set_m_MappedChunks)) int32_t m_MappedChunks;

  /// @brief Field m_MemoryBudget, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MemoryBudget, put = __cordl_internal_set_m_MemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget m_MemoryBudget;

  /// @brief Field m_ProbeOcclusion, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProbeOcclusion, put = __cordl_internal_set_m_ProbeOcclusion)) bool m_ProbeOcclusion;

  /// @brief Field m_ShBands, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShBands, put = __cordl_internal_set_m_ShBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands m_ShBands;

  /// @brief Field m_State0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State0, put = __cordl_internal_set_m_State0)) ::UnityEngine::Rendering::ProbeBrickPool* m_State0;

  /// @brief Field m_State1, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_State1, put = __cordl_internal_set_m_State1)) ::UnityEngine::Rendering::ProbeBrickPool* m_State1;

  /// @brief Field scenarioBlendingKernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_scenarioBlendingKernel, put = setStaticF_scenarioBlendingKernel)) int32_t scenarioBlendingKernel;

  /// @brief Field stateBlendShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_stateBlendShader, put = setStaticF_stateBlendShader)) ::UnityW<::UnityEngine::ComputeShader> stateBlendShader;

  /// @brief Method Allocate, addr 0x656ef5c, size 0x58, virtual false, abstract: false, final false
  inline bool Allocate(int32_t numberOfBrickChunks, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* outAllocations);

  /// @brief Method AllocateResourcesIfNeeded, addr 0x656dec4, size 0x148, virtual false, abstract: false, final false
  inline void AllocateResourcesIfNeeded();

  /// @brief Method BlendChunks, addr 0x656ee20, size 0x12c, virtual false, abstract: false, final false
  inline void BlendChunks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Rendering::ProbeBrickPool* dstPool);

  /// @brief Method Cleanup, addr 0x656f05c, size 0x38, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Clear, addr 0x656ef4c, size 0x10, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Deallocate, addr 0x656efb4, size 0x78, virtual false, abstract: false, final false
  inline void Deallocate(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* allocations);

  /// @brief Method EnsureTextureValidity, addr 0x656f02c, size 0x30, virtual false, abstract: false, final false
  inline void EnsureTextureValidity();

  /// @brief Method GetPoolDepth, addr 0x656dea0, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetPoolDepth();

  /// @brief Method GetPoolHeight, addr 0x656de88, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetPoolHeight();

  /// @brief Method GetPoolWidth, addr 0x656de70, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetPoolWidth();

  /// @brief Method Initialize, addr 0x656dbbc, size 0x18c, virtual false, abstract: false, final false
  static inline void Initialize();

  static inline ::UnityEngine::Rendering::ProbeBrickBlendingPool* New_ctor(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget memoryBudget,
                                                                           ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool probeOcclusion);

  /// @brief Method PerformBlending, addr 0x656e160, size 0xcc0, virtual false, abstract: false, final false
  inline void PerformBlending(::UnityEngine::Rendering::CommandBuffer* cmd, float_t factor, ::UnityEngine::Rendering::ProbeBrickPool* dstPool);

  /// @brief Method Update, addr 0x656e084, size 0xdc, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                     ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, ::UnityEngine::Rendering::ProbeVolumeSHBands bands, int32_t state,
                     ::UnityEngine::Texture* validityTexture, bool skyOcclusion, ::UnityEngine::Texture* skyOcclusionTexture, bool skyShadingDirections,
                     ::UnityEngine::Texture* skyShadingDirectionsTexture, bool probeOcclusion);

  /// @brief Method Update, addr 0x656e00c, size 0x78, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Rendering::ProbeBrickPool_DataLocation source, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* srcLocations,
                     ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* dstLocations, int32_t destStartIndex,
                     ::UnityEngine::Rendering::ProbeVolumeSHBands bands, int32_t state);

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_ChunkList() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_ChunkList();

  constexpr int32_t const& __cordl_internal_get_m_MappedChunks() const;

  constexpr int32_t& __cordl_internal_get_m_MappedChunks();

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget const& __cordl_internal_get_m_MemoryBudget() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget& __cordl_internal_get_m_MemoryBudget();

  constexpr bool const& __cordl_internal_get_m_ProbeOcclusion() const;

  constexpr bool& __cordl_internal_get_m_ProbeOcclusion();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_ShBands() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_ShBands();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& __cordl_internal_get_m_State0() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool*& __cordl_internal_get_m_State0();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& __cordl_internal_get_m_State1() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool*& __cordl_internal_get_m_State1();

  constexpr void __cordl_internal_set_m_ChunkList(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_MappedChunks(int32_t value);

  constexpr void __cordl_internal_set_m_MemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_ProbeOcclusion(bool value);

  constexpr void __cordl_internal_set_m_ShBands(::UnityEngine::Rendering::ProbeVolumeSHBands value);

  constexpr void __cordl_internal_set_m_State0(::UnityEngine::Rendering::ProbeBrickPool* value);

  constexpr void __cordl_internal_set_m_State1(::UnityEngine::Rendering::ProbeBrickPool* value);

  /// @brief Method .ctor, addr 0x656deb8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget memoryBudget, ::UnityEngine::Rendering::ProbeVolumeSHBands shBands, bool probeOcclusion);

  static inline int32_t getStaticF__ChunkList();

  static inline int32_t getStaticF__PoolDim_LerpFactor();

  static inline int32_t getStaticF__State0_L0_L1Rx();

  static inline int32_t getStaticF__State0_L1B_L1Rz();

  static inline int32_t getStaticF__State0_L1G_L1Ry();

  static inline int32_t getStaticF__State0_L2_0();

  static inline int32_t getStaticF__State0_L2_1();

  static inline int32_t getStaticF__State0_L2_2();

  static inline int32_t getStaticF__State0_L2_3();

  static inline int32_t getStaticF__State0_ProbeOcclusion();

  static inline int32_t getStaticF__State1_L0_L1Rx();

  static inline int32_t getStaticF__State1_L1B_L1Rz();

  static inline int32_t getStaticF__State1_L1G_L1Ry();

  static inline int32_t getStaticF__State1_L2_0();

  static inline int32_t getStaticF__State1_L2_1();

  static inline int32_t getStaticF__State1_L2_2();

  static inline int32_t getStaticF__State1_L2_3();

  static inline int32_t getStaticF__State1_ProbeOcclusion();

  static inline int32_t getStaticF_scenarioBlendingKernel();

  static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_stateBlendShader();

  /// @brief Method get_estimatedVMemCost, addr 0x656dd58, size 0x118, virtual false, abstract: false, final false
  inline int32_t get_estimatedVMemCost();

  /// @brief Method get_isAllocated, addr 0x656dd48, size 0x10, virtual false, abstract: false, final false
  inline bool get_isAllocated();

  static inline void setStaticF__ChunkList(int32_t value);

  static inline void setStaticF__PoolDim_LerpFactor(int32_t value);

  static inline void setStaticF__State0_L0_L1Rx(int32_t value);

  static inline void setStaticF__State0_L1B_L1Rz(int32_t value);

  static inline void setStaticF__State0_L1G_L1Ry(int32_t value);

  static inline void setStaticF__State0_L2_0(int32_t value);

  static inline void setStaticF__State0_L2_1(int32_t value);

  static inline void setStaticF__State0_L2_2(int32_t value);

  static inline void setStaticF__State0_L2_3(int32_t value);

  static inline void setStaticF__State0_ProbeOcclusion(int32_t value);

  static inline void setStaticF__State1_L0_L1Rx(int32_t value);

  static inline void setStaticF__State1_L1B_L1Rz(int32_t value);

  static inline void setStaticF__State1_L1G_L1Ry(int32_t value);

  static inline void setStaticF__State1_L2_0(int32_t value);

  static inline void setStaticF__State1_L2_1(int32_t value);

  static inline void setStaticF__State1_L2_2(int32_t value);

  static inline void setStaticF__State1_L2_3(int32_t value);

  static inline void setStaticF__State1_ProbeOcclusion(int32_t value);

  static inline void setStaticF_scenarioBlendingKernel(int32_t value);

  static inline void setStaticF_stateBlendShader(::UnityW<::UnityEngine::ComputeShader> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeBrickBlendingPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickBlendingPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeBrickBlendingPool(ProbeBrickBlendingPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeBrickBlendingPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeBrickBlendingPool(ProbeBrickBlendingPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12056 };

  /// @brief Field m_ChunkList, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_ChunkList;

  /// @brief Field m_MappedChunks, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_MappedChunks;

  /// @brief Field m_State0, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool* ___m_State0;

  /// @brief Field m_State1, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool* ___m_State1;

  /// @brief Field m_MemoryBudget, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget ___m_MemoryBudget;

  /// @brief Field m_ShBands, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSHBands ___m_ShBands;

  /// @brief Field m_ProbeOcclusion, offset: 0x38, size: 0x1, def value: None
  bool ___m_ProbeOcclusion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_ChunkList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_MappedChunks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_State0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_State1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_MemoryBudget) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_ShBands) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeBrickBlendingPool, ___m_ProbeOcclusion) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeBrickBlendingPool, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeBrickBlendingPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeBrickBlendingPool*, "UnityEngine.Rendering", "ProbeBrickBlendingPool");
