#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderPipelineAsset)
namespace UnityEngine::Rendering {
class RenderPipeline;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineAsset);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineAsset
class CORDL_TYPE RenderPipelineAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_autodeskInteractiveMaskedShader)) ::UnityW<::UnityEngine::Shader> autodeskInteractiveMaskedShader;

  __declspec(property(get = get_autodeskInteractiveShader)) ::UnityW<::UnityEngine::Shader> autodeskInteractiveShader;

  __declspec(property(get = get_autodeskInteractiveTransparentShader)) ::UnityW<::UnityEngine::Shader> autodeskInteractiveTransparentShader;

  __declspec(property(get = get_default2DMaskMaterial)) ::UnityW<::UnityEngine::Material> default2DMaskMaterial;

  __declspec(property(get = get_default2DMaterial)) ::UnityW<::UnityEngine::Material> default2DMaterial;

  __declspec(property(get = get_defaultLineMaterial)) ::UnityW<::UnityEngine::Material> defaultLineMaterial;

  __declspec(property(get = get_defaultMaterial)) ::UnityW<::UnityEngine::Material> defaultMaterial;

  __declspec(property(get = get_defaultParticleMaterial)) ::UnityW<::UnityEngine::Material> defaultParticleMaterial;

  __declspec(property(get = get_defaultShader)) ::UnityW<::UnityEngine::Shader> defaultShader;

  __declspec(property(get = get_defaultSpeedTree7Shader)) ::UnityW<::UnityEngine::Shader> defaultSpeedTree7Shader;

  __declspec(property(get = get_defaultSpeedTree8Shader)) ::UnityW<::UnityEngine::Shader> defaultSpeedTree8Shader;

  __declspec(property(get = get_defaultTerrainMaterial)) ::UnityW<::UnityEngine::Material> defaultTerrainMaterial;

  __declspec(property(get = get_defaultUIETC1SupportedMaterial)) ::UnityW<::UnityEngine::Material> defaultUIETC1SupportedMaterial;

  __declspec(property(get = get_defaultUIMaterial)) ::UnityW<::UnityEngine::Material> defaultUIMaterial;

  __declspec(property(get = get_defaultUIOverdrawMaterial)) ::UnityW<::UnityEngine::Material> defaultUIOverdrawMaterial;

  __declspec(property(get = get_prefixedRenderingLayerMaskNames)) ::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_renderPipelineShaderTag)) ::StringW renderPipelineShaderTag;

  __declspec(property(get = get_renderingLayerMaskNames)) ::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerMaskNames;

  __declspec(property(get = get_terrainDetailGrassBillboardShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassBillboardShader;

  __declspec(property(get = get_terrainDetailGrassShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailLitShader)) ::UnityW<::UnityEngine::Shader> terrainDetailLitShader;

  /// @brief Method CreatePipeline, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderPipeline* CreatePipeline();

  /// @brief Method InternalCreatePipeline, addr 0x48c8aac, size 0x2f8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();

  static inline ::UnityEngine::Rendering::RenderPipelineAsset* New_ctor();

  /// @brief Method OnDisable, addr 0x48c91f0, size 0x4c, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x48c8ed0, size 0xb8, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method .ctor, addr 0x48c923c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_autodeskInteractiveMaskedShader, addr 0x48c8dcc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveMaskedShader();

  /// @brief Method get_autodeskInteractiveShader, addr 0x48c8dbc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveShader();

  /// @brief Method get_autodeskInteractiveTransparentShader, addr 0x48c8dc4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveTransparentShader();

  /// @brief Method get_default2DMaskMaterial, addr 0x48c8e24, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaskMaterial();

  /// @brief Method get_default2DMaterial, addr 0x48c8e1c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaterial();

  /// @brief Method get_defaultLineMaterial, addr 0x48c8df4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultLineMaterial();

  /// @brief Method get_defaultMaterial, addr 0x48c8db4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_defaultParticleMaterial, addr 0x48c8dec, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultParticleMaterial();

  /// @brief Method get_defaultShader, addr 0x48c8e2c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultShader();

  /// @brief Method get_defaultSpeedTree7Shader, addr 0x48c8e34, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultSpeedTree7Shader();

  /// @brief Method get_defaultSpeedTree8Shader, addr 0x48c8e3c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultSpeedTree8Shader();

  /// @brief Method get_defaultTerrainMaterial, addr 0x48c8dfc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultTerrainMaterial();

  /// @brief Method get_defaultUIETC1SupportedMaterial, addr 0x48c8e14, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIETC1SupportedMaterial();

  /// @brief Method get_defaultUIMaterial, addr 0x48c8e04, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIMaterial();

  /// @brief Method get_defaultUIOverdrawMaterial, addr 0x48c8e0c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIOverdrawMaterial();

  /// @brief Method get_prefixedRenderingLayerMaskNames, addr 0x48c8dac, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_renderPipelineShaderTag, addr 0x48c8e44, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW get_renderPipelineShaderTag();

  /// @brief Method get_renderingLayerMaskNames, addr 0x48c8da4, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerMaskNames();

  /// @brief Method get_terrainDetailGrassBillboardShader, addr 0x48c8de4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassBillboardShader();

  /// @brief Method get_terrainDetailGrassShader, addr 0x48c8ddc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailLitShader, addr 0x48c8dd4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailLitShader();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineAsset(RenderPipelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineAsset(RenderPipelineAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11233 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
