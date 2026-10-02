#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/AsyncTerrainToMeshRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/UnifiedRayTracing/zzzz__ComputeTerrainMeshJob_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncTerrainToMeshRequest)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct ComputeTerrainMeshJob;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
struct AsyncTerrainToMeshRequest;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest, "UnityEngine.Rendering.UnifiedRayTracing", "AsyncTerrainToMeshRequest");
// Dependencies Unity.Jobs.JobHandle, UnityEngine.Rendering.UnifiedRayTracing.ComputeTerrainMeshJob
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: true
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.AsyncTerrainToMeshRequest
struct CORDL_TYPE AsyncTerrainToMeshRequest {
public:
  // Declarations
  __declspec(property(get = get_done)) bool done;

  /// @brief Method GetMesh, addr 0x6e0725c, size 0x16c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetMesh();

  /// @brief Method TriangleIndicesWithoutHoles, addr 0x6e074c8, size 0x33c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<int32_t>* TriangleIndicesWithoutHoles();

  /// @brief Method WaitForCompletion, addr 0x6e07214, size 0x48, virtual false, abstract: false, final false
  inline void WaitForCompletion();

  /// @brief Method .ctor, addr 0x6e06e08, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob job, ::Unity::Jobs::JobHandle jobHandle);

  /// @brief Method get_done, addr 0x6e0748c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_done();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTerrainToMeshRequest();

  // Ctor Parameters [CppParam { name: "m_JobHandle", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Job", ty:
  // "::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob", modifiers: "", def_value: None, comment: None }]
  constexpr AsyncTerrainToMeshRequest(::Unity::Jobs::JobHandle m_JobHandle, ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob m_Job) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20472 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x88 };

  /// @brief Field m_JobHandle, offset: 0x0, size: 0x10, def value: None
  ::Unity::Jobs::JobHandle m_JobHandle;

  /// @brief Field m_Job, offset: 0x10, size: 0x78, def value: None
  ::UnityEngine::Rendering::UnifiedRayTracing::ComputeTerrainMeshJob m_Job;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest, m_JobHandle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest, m_Job) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::AsyncTerrainToMeshRequest) == 0x88, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
