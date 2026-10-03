#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineRuntimeTerrainShaders.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineRuntimeTerrainShaders)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeTerrainShaders;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineRuntimeTerrainShaders");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "R: Runtime Shaders", Order = 1000)]
// [HideInInspector]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTerrainShaders
class CORDL_TYPE UniversalRenderPipelineRuntimeTerrainShaders : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  /// @brief Field m_TerrainDetailGrass, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailGrass, put = __cordl_internal_set_m_TerrainDetailGrass)) ::UnityW<::UnityEngine::Shader> m_TerrainDetailGrass;

  /// @brief Field m_TerrainDetailGrassBillboard, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailGrassBillboard, put = __cordl_internal_set_m_TerrainDetailGrassBillboard)) ::UnityW<::UnityEngine::Shader>
      m_TerrainDetailGrassBillboard;

  /// @brief Field m_TerrainDetailLit, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailLit, put = __cordl_internal_set_m_TerrainDetailLit)) ::UnityW<::UnityEngine::Shader> m_TerrainDetailLit;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_terrainDetailGrassBillboardShader, put = set_terrainDetailGrassBillboardShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassBillboardShader;

  __declspec(property(get = get_terrainDetailGrassShader, put = set_terrainDetailGrassShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailLitShader, put = set_terrainDetailLitShader)) ::UnityW<::UnityEngine::Shader> terrainDetailLitShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6ce5a3c, size 0x9c, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailGrass() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailGrass();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailGrassBillboard() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailGrassBillboard();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailLit() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailLit();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_TerrainDetailGrass(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TerrainDetailGrassBillboard(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TerrainDetailLit(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6ce5af0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_terrainDetailGrassBillboardShader, addr 0x6ce5ae0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassBillboardShader();

  /// @brief Method get_terrainDetailGrassShader, addr 0x6ce5ae8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailLitShader, addr 0x6ce5ad8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailLitShader();

  /// @brief Method get_version, addr 0x6ce5a34, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_terrainDetailGrassBillboardShader, addr 0x6ce5820, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailGrassBillboardShader(::UnityEngine::Shader* value);

  /// @brief Method set_terrainDetailGrassShader, addr 0x6ce59c0, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailGrassShader(::UnityEngine::Shader* value);

  /// @brief Method set_terrainDetailLitShader, addr 0x6ce5680, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailLitShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineRuntimeTerrainShaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeTerrainShaders", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineRuntimeTerrainShaders(UniversalRenderPipelineRuntimeTerrainShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeTerrainShaders", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineRuntimeTerrainShaders(UniversalRenderPipelineRuntimeTerrainShaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13139 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// [SerializeField]
  /// [ResourcePath("Shaders/Terrain/TerrainDetailLit.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_TerrainDetailLit, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailLit;

  /// [SerializeField]
  /// [ResourcePath("Shaders/Terrain/WavingGrassBillboard.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_TerrainDetailGrassBillboard, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailGrassBillboard;

  /// [SerializeField]
  /// [ResourcePath("Shaders/Terrain/WavingGrass.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_TerrainDetailGrass, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailGrass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders, ___m_TerrainDetailLit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders, ___m_TerrainDetailGrassBillboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders, ___m_TerrainDetailGrass) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTerrainShaders) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
