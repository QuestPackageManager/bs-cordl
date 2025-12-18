#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine::Rendering {
class RayTracingShader;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeBakingResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeBakingResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingResources
class CORDL_TYPE ProbeVolumeBakingResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field dilationShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_dilationShader, put = __cordl_internal_set_dilationShader)) ::UnityW<::UnityEngine::ComputeShader> dilationShader;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field renderingLayerCS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingLayerCS, put = __cordl_internal_set_renderingLayerCS)) ::UnityW<::UnityEngine::ComputeShader> renderingLayerCS;

  /// @brief Field renderingLayerRT, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingLayerRT, put = __cordl_internal_set_renderingLayerRT)) ::UnityW<::UnityEngine::Rendering::RayTracingShader> renderingLayerRT;

  /// @brief Field skyOcclusionCS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_skyOcclusionCS, put = __cordl_internal_set_skyOcclusionCS)) ::UnityW<::UnityEngine::ComputeShader> skyOcclusionCS;

  /// @brief Field skyOcclusionRT, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_skyOcclusionRT, put = __cordl_internal_set_skyOcclusionRT)) ::UnityW<::UnityEngine::Rendering::RayTracingShader> skyOcclusionRT;

  /// @brief Field subdivideSceneCS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_subdivideSceneCS, put = __cordl_internal_set_subdivideSceneCS)) ::UnityW<::UnityEngine::ComputeShader> subdivideSceneCS;

  /// @brief Field traceVirtualOffsetCS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_traceVirtualOffsetCS, put = __cordl_internal_set_traceVirtualOffsetCS)) ::UnityW<::UnityEngine::ComputeShader> traceVirtualOffsetCS;

  /// @brief Field traceVirtualOffsetRT, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_traceVirtualOffsetRT, put = __cordl_internal_set_traceVirtualOffsetRT)) ::UnityW<::UnityEngine::Rendering::RayTracingShader> traceVirtualOffsetRT;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Field voxelizeSceneShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_voxelizeSceneShader, put = __cordl_internal_set_voxelizeSceneShader)) ::UnityW<::UnityEngine::Shader> voxelizeSceneShader;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::ProbeVolumeBakingResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_dilationShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_dilationShader();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_renderingLayerCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_renderingLayerCS();

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& __cordl_internal_get_renderingLayerRT() const;

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& __cordl_internal_get_renderingLayerRT();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_skyOcclusionCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_skyOcclusionCS();

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& __cordl_internal_get_skyOcclusionRT() const;

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& __cordl_internal_get_skyOcclusionRT();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_subdivideSceneCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_subdivideSceneCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_traceVirtualOffsetCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_traceVirtualOffsetCS();

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader> const& __cordl_internal_get_traceVirtualOffsetRT() const;

  constexpr ::UnityW<::UnityEngine::Rendering::RayTracingShader>& __cordl_internal_get_traceVirtualOffsetRT();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_voxelizeSceneShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_voxelizeSceneShader();

  constexpr void __cordl_internal_set_dilationShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  constexpr void __cordl_internal_set_renderingLayerCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_renderingLayerRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value);

  constexpr void __cordl_internal_set_skyOcclusionCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_skyOcclusionRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value);

  constexpr void __cordl_internal_set_subdivideSceneCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_traceVirtualOffsetCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_traceVirtualOffsetRT(::UnityW<::UnityEngine::Rendering::RayTracingShader> value);

  constexpr void __cordl_internal_set_voxelizeSceneShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x65df7c8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x65df7c0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeBakingResources(ProbeVolumeBakingResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeBakingResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeBakingResources(ProbeVolumeBakingResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12118 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field dilationShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___dilationShader;

  /// @brief Field subdivideSceneCS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___subdivideSceneCS;

  /// @brief Field voxelizeSceneShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___voxelizeSceneShader;

  /// @brief Field traceVirtualOffsetCS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___traceVirtualOffsetCS;

  /// @brief Field traceVirtualOffsetRT, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::RayTracingShader> ___traceVirtualOffsetRT;

  /// @brief Field skyOcclusionCS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___skyOcclusionCS;

  /// @brief Field skyOcclusionRT, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::RayTracingShader> ___skyOcclusionRT;

  /// @brief Field renderingLayerCS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___renderingLayerCS;

  /// @brief Field renderingLayerRT, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::RayTracingShader> ___renderingLayerRT;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___dilationShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___subdivideSceneCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___voxelizeSceneShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___traceVirtualOffsetCS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___traceVirtualOffsetRT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___skyOcclusionCS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___skyOcclusionRT) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___renderingLayerCS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingResources, ___renderingLayerRT) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingResources, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeBakingResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingResources*, "UnityEngine.Rendering", "ProbeVolumeBakingResources");
