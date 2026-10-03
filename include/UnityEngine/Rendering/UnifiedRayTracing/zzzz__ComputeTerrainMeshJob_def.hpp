#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/ComputeTerrainMeshJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeTerrainMeshJob)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace Unity::Mathematics {
struct float3;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct ComputeTerrainMeshJob;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, "UnityEngine.Rendering.UnifiedRayTracing", "ComputeTerrainMeshJob");
// [BurstCompile]
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float3
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.ComputeTerrainMeshJob
struct CORDL_TYPE ComputeTerrainMeshJob {
public:
  // Declarations
  /// @brief Convert operator to "::Unity::Jobs::IJobParallelFor"
  constexpr operator ::Unity::Jobs::IJobParallelFor*();

  /// @brief Method CalculateTerrainNormal, addr 0x6e07a24, size 0x254, virtual false, abstract: false, final false
  static inline ::Unity::Mathematics::float3 CalculateTerrainNormal(::Unity::Collections::NativeArray_1<float_t> heightmap, int32_t x, int32_t y, int32_t width, int32_t height,
                                                                    ::Unity::Mathematics::float3 scale);

  /// @brief Method DisposeArrays, addr 0x6e07804, size 0xe8, virtual false, abstract: false, final false
  inline void DisposeArrays();

  /// @brief Method Execute, addr 0x6e078ec, size 0x138, virtual true, abstract: false, final true
  inline void Execute(int32_t index);

  /// @brief Method SampleHeight, addr 0x6e07c78, size 0x30, virtual false, abstract: false, final false
  static inline float_t SampleHeight(int32_t x, int32_t y, int32_t width, int32_t height, ::Unity::Collections::NativeArray_1<float_t> heightmap, float_t scale);

  /// @brief Convert to "::Unity::Jobs::IJobParallelFor"
  constexpr ::Unity::Jobs::IJobParallelFor* i___Unity__Jobs__IJobParallelFor();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeTerrainMeshJob();

  // Ctor Parameters [CppParam { name: "heightmap", ty: "::Unity::Collections::NativeArray_1<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "holes", ty:
  // "::Unity::Collections::NativeArray_1<bool>", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam {
  // name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "heightmapScale", ty: "::Unity::Mathematics::float3", modifiers: "", def_value: None, comment:
  // None }, CppParam { name: "positions", ty: "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvs", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>", modifiers: "", def_value: None, comment: None }, CppParam { name: "normals", ty:
  // "::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty:
  // "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None, comment: None }]
  constexpr ComputeTerrainMeshJob(::Unity::Collections::NativeArray_1<float_t> heightmap, ::Unity::Collections::NativeArray_1<bool> holes, int32_t width, int32_t height,
                                  ::Unity::Mathematics::float3 heightmapScale, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions,
                                  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> uvs, ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> normals,
                                  ::Unity::Collections::NativeArray_1<int32_t> indices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20473 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// [ReadOnly]
  /// @brief Field heightmap, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> heightmap;

  /// [ReadOnly]
  /// @brief Field holes, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<bool> holes;

  /// @brief Field width, offset: 0x20, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x24, size: 0x4, def value: None
  int32_t height;

  /// @brief Field heightmapScale, offset: 0x28, size: 0xc, def value: None
  ::Unity::Mathematics::float3 heightmapScale;

  /// @brief Field positions, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions;

  /// @brief Field uvs, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> uvs;

  /// @brief Field normals, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> normals;

  /// [NativeDisableParallelForRestriction]
  /// @brief Field indices, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> indices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, heightmap) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, holes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, width) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, height) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, heightmapScale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, positions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, uvs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, normals) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob, indices) == 0x68, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob) == 0x78, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
