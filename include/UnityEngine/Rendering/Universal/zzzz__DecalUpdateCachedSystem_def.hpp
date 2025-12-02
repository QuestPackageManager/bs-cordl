#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalUpdateCachedSystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalUpdateCachedSystem)
namespace Unity::Mathematics {
struct quaternion;
}
namespace UnityEngine::Jobs {
class IJobParallelForTransform;
}
namespace UnityEngine::Jobs {
struct TransformAccess;
}
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering::Universal {
struct DecalUpdateCachedSystem_UpdateTransformsJob;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCachedSystem;
}
namespace UnityEngine::Rendering::Universal {
struct DecalUpdateCachedSystem_UpdateTransformsJob;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem);
MARK_VAL_T(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float3, Unity.Mathematics.float4x4, Unity.Mathematics.quaternion, UnityEngine.BoundingSphere,
// UnityEngine.Rendering.Universal.DecalScaleMode
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DecalUpdateCachedSystem/UpdateTransformsJob
struct CORDL_TYPE DecalUpdateCachedSystem_UpdateTransformsJob {
public:
  // Declarations
  /// @brief Field k_MinusYtoZRotation, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_k_MinusYtoZRotation, put = setStaticF_k_MinusYtoZRotation)) ::Unity::Mathematics::quaternion k_MinusYtoZRotation;

  /// @brief Convert operator to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr operator ::UnityEngine::Jobs::IJobParallelForTransform*();

  /// @brief Method DistanceBetweenQuaternions, addr 0x663f840, size 0x30, virtual false, abstract: false, final false
  inline float_t DistanceBetweenQuaternions(::Unity::Mathematics::quaternion a, ::Unity::Mathematics::quaternion b);

  /// @brief Method Execute, addr 0x663f870, size 0x664, virtual true, abstract: false, final true
  inline void Execute(int32_t index, ::UnityEngine::Jobs::TransformAccess transform);

  /// @brief Method GetDecalProjectBoundingSphere, addr 0x663fed4, size 0x388, virtual false, abstract: false, final false
  inline ::UnityEngine::BoundingSphere GetDecalProjectBoundingSphere(::UnityEngine::Matrix4x4 decalToWorld);

  static inline ::Unity::Mathematics::quaternion getStaticF_k_MinusYtoZRotation();

  /// @brief Convert to "::UnityEngine::Jobs::IJobParallelForTransform"
  constexpr ::UnityEngine::Jobs::IJobParallelForTransform* i___UnityEngine__Jobs__IJobParallelForTransform();

  static inline void setStaticF_k_MinusYtoZRotation(::Unity::Mathematics::quaternion value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalUpdateCachedSystem_UpdateTransformsJob();

  // Ctor Parameters [CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "rotations", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>", modifiers: "", def_value: None }, CppParam { name: "scales", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None }, CppParam { name: "dirty", ty: "::Unity::Collections::NativeArray_1<bool>", modifiers: "",
  // def_value: None }, CppParam { name: "scaleModes", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>", modifiers: "", def_value: None }, CppParam {
  // name: "sizeOffsets", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "decalToWorlds", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "normalToWorlds", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>", modifiers: "", def_value: None }, CppParam { name: "boundingSpheres", ty:
  // "::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>", modifiers: "", def_value: None }, CppParam { name: "minDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr DecalUpdateCachedSystem_UpdateTransformsJob(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions,
                                                        ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> rotations,
                                                        ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> scales, ::Unity::Collections::NativeArray_1<bool> dirty,
                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> scaleModes,
                                                        ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets,
                                                        ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds,
                                                        ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds,
                                                        ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres, float_t minDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12673 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field positions, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions;

  /// @brief Field rotations, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> rotations;

  /// @brief Field scales, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> scales;

  /// @brief Field dirty, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<bool> dirty;

  /// @brief Field scaleModes, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> scaleModes;

  /// @brief Field sizeOffsets, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets;

  /// @brief Field decalToWorlds, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds;

  /// @brief Field normalToWorlds, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds;

  /// @brief Field boundingSpheres, offset: 0x80, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres;

  /// @brief Field minDistance, offset: 0x90, size: 0x4, def value: None
  float_t minDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, positions) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, rotations) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, scales) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, dirty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, scaleModes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, sizeOffsets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, decalToWorlds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, normalToWorlds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, boundingSpheres) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, minDistance) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalUpdateCachedSystem
class CORDL_TYPE DecalUpdateCachedSystem : public ::System::Object {
public:
  // Declarations
  using UpdateTransformsJob = ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob;

  /// @brief Field m_EntityManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EntityManager, put = __cordl_internal_set_m_EntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager* m_EntityManager;

  /// @brief Field m_Sampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Sampler, put = __cordl_internal_set_m_Sampler)) ::UnityEngine::Rendering::ProfilingSampler* m_Sampler;

  /// @brief Field m_SamplerJob, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplerJob, put = __cordl_internal_set_m_SamplerJob)) ::UnityEngine::Rendering::ProfilingSampler* m_SamplerJob;

  /// @brief Method Execute, addr 0x663f438, size 0x170, virtual false, abstract: false, final false
  inline void Execute();

  /// @brief Method Execute, addr 0x663f5a8, size 0x298, virtual false, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::Universal::DecalEntityChunk* entityChunk, ::UnityEngine::Rendering::Universal::DecalCachedChunk* cachedChunk, int32_t count);

  static inline ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* New_ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_EntityManager() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_EntityManager();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_Sampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_Sampler();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_SamplerJob() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_SamplerJob();

  constexpr void __cordl_internal_set_m_EntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_Sampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_SamplerJob(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x663f37c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalEntityManager* entityManager);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalUpdateCachedSystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCachedSystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalUpdateCachedSystem(DecalUpdateCachedSystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalUpdateCachedSystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalUpdateCachedSystem(DecalUpdateCachedSystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12674 };

  /// @brief Field m_EntityManager, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_EntityManager;

  /// @brief Field m_Sampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_Sampler;

  /// @brief Field m_SamplerJob, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_SamplerJob;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_EntityManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_Sampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, ___m_SamplerJob) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*, "UnityEngine.Rendering.Universal", "DecalUpdateCachedSystem");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem_UpdateTransformsJob, "UnityEngine.Rendering.Universal", "DecalUpdateCachedSystem/UpdateTransformsJob");
