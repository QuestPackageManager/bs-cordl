#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderPipelineRuntimeShaders.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderPipelineRuntimeShaders)
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
class UniversalRenderPipelineRuntimeShaders;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeShaders
class CORDL_TYPE UniversalRenderPipelineRuntimeShaders : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_blitHDROverlay, put = set_blitHDROverlay)) ::UnityW<::UnityEngine::Shader> blitHDROverlay;

  __declspec(property(get = get_coreBlitColorAndDepthPS, put = set_coreBlitColorAndDepthPS)) ::UnityW<::UnityEngine::Shader> coreBlitColorAndDepthPS;

  __declspec(property(get = get_coreBlitPS, put = set_coreBlitPS)) ::UnityW<::UnityEngine::Shader> coreBlitPS;

  __declspec(property(get = get_fallbackErrorShader, put = set_fallbackErrorShader)) ::UnityW<::UnityEngine::Shader> fallbackErrorShader;

  /// @brief Field m_BlitHDROverlay, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitHDROverlay, put = __cordl_internal_set_m_BlitHDROverlay)) ::UnityW<::UnityEngine::Shader> m_BlitHDROverlay;

  /// @brief Field m_CoreBlitColorAndDepthPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CoreBlitColorAndDepthPS, put = __cordl_internal_set_m_CoreBlitColorAndDepthPS)) ::UnityW<::UnityEngine::Shader> m_CoreBlitColorAndDepthPS;

  /// @brief Field m_CoreBlitPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CoreBlitPS, put = __cordl_internal_set_m_CoreBlitPS)) ::UnityW<::UnityEngine::Shader> m_CoreBlitPS;

  /// @brief Field m_FallbackErrorShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FallbackErrorShader, put = __cordl_internal_set_m_FallbackErrorShader)) ::UnityW<::UnityEngine::Shader> m_FallbackErrorShader;

  /// @brief Field m_SamplingPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingPS, put = __cordl_internal_set_m_SamplingPS)) ::UnityW<::UnityEngine::Shader> m_SamplingPS;

  /// @brief Field m_TerrainDetailGrass, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailGrass, put = __cordl_internal_set_m_TerrainDetailGrass)) ::UnityW<::UnityEngine::Shader> m_TerrainDetailGrass;

  /// @brief Field m_TerrainDetailGrassBillboard, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailGrassBillboard, put = __cordl_internal_set_m_TerrainDetailGrassBillboard)) ::UnityW<::UnityEngine::Shader>
      m_TerrainDetailGrassBillboard;

  /// @brief Field m_TerrainDetailLit, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TerrainDetailLit, put = __cordl_internal_set_m_TerrainDetailLit)) ::UnityW<::UnityEngine::Shader> m_TerrainDetailLit;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_samplingPS, put = set_samplingPS)) ::UnityW<::UnityEngine::Shader> samplingPS;

  __declspec(property(get = get_terrainDetailGrassBillboardShader, put = set_terrainDetailGrassBillboardShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassBillboardShader;

  __declspec(property(get = get_terrainDetailGrassShader, put = set_terrainDetailGrassShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailLitShader, put = set_terrainDetailLitShader)) ::UnityW<::UnityEngine::Shader> terrainDetailLitShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6697258, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_BlitHDROverlay() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_BlitHDROverlay();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_CoreBlitColorAndDepthPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_CoreBlitColorAndDepthPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_CoreBlitPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_CoreBlitPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_FallbackErrorShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_FallbackErrorShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_SamplingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_SamplingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailGrass() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailGrass();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailGrassBillboard() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailGrassBillboard();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_TerrainDetailLit() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_TerrainDetailLit();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_BlitHDROverlay(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_CoreBlitColorAndDepthPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_CoreBlitPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_FallbackErrorShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_SamplingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TerrainDetailGrass(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TerrainDetailGrassBillboard(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_TerrainDetailLit(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6697620, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_blitHDROverlay, addr 0x66972d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_blitHDROverlay();

  /// @brief Method get_coreBlitColorAndDepthPS, addr 0x66973c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_coreBlitColorAndDepthPS();

  /// @brief Method get_coreBlitPS, addr 0x6697350, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_coreBlitPS();

  /// @brief Method get_fallbackErrorShader, addr 0x6697260, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_fallbackErrorShader();

  /// @brief Method get_samplingPS, addr 0x6697440, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_samplingPS();

  /// @brief Method get_terrainDetailGrassBillboardShader, addr 0x6697530, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassBillboardShader();

  /// @brief Method get_terrainDetailGrassShader, addr 0x66975a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailLitShader, addr 0x66974b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailLitShader();

  /// @brief Method get_version, addr 0x6697250, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_blitHDROverlay, addr 0x66972e0, size 0x70, virtual false, abstract: false, final false
  inline void set_blitHDROverlay(::UnityEngine::Shader* value);

  /// @brief Method set_coreBlitColorAndDepthPS, addr 0x66973d0, size 0x70, virtual false, abstract: false, final false
  inline void set_coreBlitColorAndDepthPS(::UnityEngine::Shader* value);

  /// @brief Method set_coreBlitPS, addr 0x6697358, size 0x70, virtual false, abstract: false, final false
  inline void set_coreBlitPS(::UnityEngine::Shader* value);

  /// @brief Method set_fallbackErrorShader, addr 0x6697268, size 0x70, virtual false, abstract: false, final false
  inline void set_fallbackErrorShader(::UnityEngine::Shader* value);

  /// @brief Method set_samplingPS, addr 0x6697448, size 0x70, virtual false, abstract: false, final false
  inline void set_samplingPS(::UnityEngine::Shader* value);

  /// @brief Method set_terrainDetailGrassBillboardShader, addr 0x6697538, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailGrassBillboardShader(::UnityEngine::Shader* value);

  /// @brief Method set_terrainDetailGrassShader, addr 0x66975b0, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailGrassShader(::UnityEngine::Shader* value);

  /// @brief Method set_terrainDetailLitShader, addr 0x66974c0, size 0x70, virtual false, abstract: false, final false
  inline void set_terrainDetailLitShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderPipelineRuntimeShaders();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeShaders", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderPipelineRuntimeShaders(UniversalRenderPipelineRuntimeShaders&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderPipelineRuntimeShaders", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderPipelineRuntimeShaders(UniversalRenderPipelineRuntimeShaders const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12911 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field m_FallbackErrorShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_FallbackErrorShader;

  /// @brief Field m_BlitHDROverlay, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_BlitHDROverlay;

  /// @brief Field m_CoreBlitPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_CoreBlitPS;

  /// @brief Field m_CoreBlitColorAndDepthPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_CoreBlitColorAndDepthPS;

  /// @brief Field m_SamplingPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_SamplingPS;

  /// @brief Field m_TerrainDetailLit, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailLit;

  /// @brief Field m_TerrainDetailGrassBillboard, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailGrassBillboard;

  /// @brief Field m_TerrainDetailGrass, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_TerrainDetailGrass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_FallbackErrorShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_BlitHDROverlay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_CoreBlitPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_CoreBlitColorAndDepthPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_SamplingPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_TerrainDetailLit) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_TerrainDetailGrassBillboard) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, ___m_TerrainDetailGrass) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeShaders*, "UnityEngine.Rendering.Universal", "UniversalRenderPipelineRuntimeShaders");
