#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCreateDrawCallSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalCreateDrawCallSystem)
namespace Unity::Jobs {
class IJob;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
struct DecalCreateDrawCallSystem_DrawCallJob;
}
namespace UnityEngine::Rendering::Universal {
class DecalCulledChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalCreateDrawCallSystem;
}
namespace UnityEngine::Rendering::Universal {
struct DecalCreateDrawCallSystem_DrawCallJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem);
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float4, Unity.Mathematics.float4x4, UnityEngine.BoundingSphere,
// UnityEngine.Rendering.Universal.DecalSubDrawCall, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem/DrawCallJob
struct CORDL_TYPE DecalCreateDrawCallSystem_DrawCallJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJob"
  constexpr operator ::Unity::Jobs::IJob*();

  /// @brief Method Execute, addr 0x663a5b0, size 0x30c, virtual true, abstract: false, final true
  inline void Execute();

  /// @brief Convert to "::Unity::Jobs::IJob"
  constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob();

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalCreateDrawCallSystem_DrawCallJob();

  // Ctor Parameters [CppParam { name: "decalToWorlds", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "normalToWorlds",
  // ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "sizeOffsets", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "drawDistances", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None }, CppParam { name: "angleFades", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None }, CppParam { name: "uvScaleBiases", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>", modifiers: "", def_value: None }, CppParam { name: "layerMasks", ty: "::Unity::Collections::NativeArray_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "sceneLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint64_t>", modifiers: "", def_value: None }, CppParam { name: "fadeFactors", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "boundingSpheres", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>",
  // modifiers: "", def_value: None }, CppParam { name: "renderingLayerMasks", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "cameraPosition",
  // ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "sceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "cullingMask", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleDecalIndices", ty: "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "visibleDecalCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxDrawDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "decalToWorldsDraw",
  // ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "normalToDecalsDraw", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "renderingLayerMasksDraw", ty:
  // "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "subCalls", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>", modifiers: "", def_value: None }, CppParam { name: "subCallCount", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
  constexpr DecalCreateDrawCallSystem_DrawCallJob(
      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds,
      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> drawDistances,
      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> angleFades, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> uvScaleBiases,
      ::Unity::Collections::NativeArray_1<int32_t> layerMasks, ::Unity::Collections::NativeArray_1<uint64_t> sceneLayerMasks, ::Unity::Collections::NativeArray_1<float_t> fadeFactors,
      ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres, ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMasks, ::UnityEngine::Vector3 cameraPosition,
      uint64_t sceneCullingMask, int32_t cullingMask, ::Unity::Collections::NativeArray_1<int32_t> visibleDecalIndices, int32_t visibleDecalCount, float_t maxDrawDistance,
      ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorldsDraw, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToDecalsDraw,
      ::Unity::Collections::NativeArray_1<float_t> renderingLayerMasksDraw, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> subCalls,
      ::Unity::Collections::NativeArray_1<int32_t> subCallCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12661 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x138 };

  /// @brief Field decalToWorlds, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds;

  /// @brief Field normalToWorlds, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds;

  /// @brief Field sizeOffsets, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets;

  /// @brief Field drawDistances, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> drawDistances;

  /// @brief Field angleFades, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> angleFades;

  /// @brief Field uvScaleBiases, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> uvScaleBiases;

  /// @brief Field layerMasks, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> layerMasks;

  /// @brief Field sceneLayerMasks, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint64_t> sceneLayerMasks;

  /// @brief Field fadeFactors, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> fadeFactors;

  /// @brief Field boundingSpheres, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres;

  /// @brief Field renderingLayerMasks, offset: 0xa0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMasks;

  /// @brief Field cameraPosition, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 cameraPosition;

  /// @brief Field sceneCullingMask, offset: 0xc0, size: 0x8, def value: None
  uint64_t sceneCullingMask;

  /// @brief Field cullingMask, offset: 0xc8, size: 0x4, def value: None
  int32_t cullingMask;

  /// @brief Field visibleDecalIndices, offset: 0xd0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> visibleDecalIndices;

  /// @brief Field visibleDecalCount, offset: 0xe0, size: 0x4, def value: None
  int32_t visibleDecalCount;

  /// @brief Field maxDrawDistance, offset: 0xe4, size: 0x4, def value: None
  float_t maxDrawDistance;

  /// @brief Field decalToWorldsDraw, offset: 0xe8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorldsDraw;

  /// @brief Field normalToDecalsDraw, offset: 0xf8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToDecalsDraw;

  /// @brief Field renderingLayerMasksDraw, offset: 0x108, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> renderingLayerMasksDraw;

  /// @brief Field subCalls, offset: 0x118, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> subCalls;

  /// @brief Field subCallCount, offset: 0x128, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> subCallCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, decalToWorlds) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, normalToWorlds) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, sizeOffsets) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, drawDistances) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, angleFades) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, uvScaleBiases) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, layerMasks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, sceneLayerMasks) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, fadeFactors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, boundingSpheres) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, renderingLayerMasks) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, cameraPosition) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, sceneCullingMask) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, cullingMask) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, visibleDecalIndices) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, visibleDecalCount) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, maxDrawDistance) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, decalToWorldsDraw) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, normalToDecalsDraw) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, renderingLayerMasksDraw) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, subCalls) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, subCallCount) == 0x128, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, 0x138>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalCreateDrawCallSystem
class CORDL_TYPE DecalCreateDrawCallSystem : public ::System::Object {
public:
  // Declarations
  using DrawCallJob = ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob;

  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_MaxDrawDistance, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxDrawDistance, put = __cordl_internal_set_m_MaxDrawDistance)) float_t m_MaxDrawDistance;

  /// @brief Field m_Sampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  __declspec(property(get = get_maxDrawDistance, put = set_maxDrawDistance)) float_t maxDrawDistance;

  /// @brief Method Execute, addr 0x663a234, size 0x1cc, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method Execute, addr 0x663a400, size 0x1b0, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, ::UnityEngine::Rendering::Universal::DecalCulledChunk* culledChunk,
                      ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* drawCallChunk, int32_t count);

  static inline ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance);

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr float_t const& __cordl_internal_get_m_MaxDrawDistance() const;

  constexpr float_t& __cordl_internal_get_m_MaxDrawDistance();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_MaxDrawDistance(float_t value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x663a19c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager, float_t maxDrawDistance);

  /// @brief Method get_maxDrawDistance, addr 0x663a18c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_maxDrawDistance();

  /// @brief Method set_maxDrawDistance, addr 0x663a194, size 0x8, virtual false, abstract: false, final false
  inline void set_maxDrawDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalCreateDrawCallSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalCreateDrawCallSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalCreateDrawCallSystem(DecalCreateDrawCallSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalCreateDrawCallSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalCreateDrawCallSystem(DecalCreateDrawCallSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12662 };

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  /// @brief Field m_MaxDrawDistance, offset: 0x20, size: 0x4, def value: None
  float_t ___m_MaxDrawDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, ___m_MaxDrawDistance) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*, "UnityEngine.Rendering.Universal", "DecalCreateDrawCallSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem_DrawCallJob, "UnityEngine.Rendering.Universal", "DecalCreateDrawCallSystem/DrawCallJob");
