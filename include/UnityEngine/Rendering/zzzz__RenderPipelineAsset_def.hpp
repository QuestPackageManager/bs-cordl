#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderPipelineAsset)
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::Rendering {
class RenderPipeline;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineAsset);
// Type: UnityEngine.Rendering::RenderPipelineAsset
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10279))
// CS Name: ::UnityEngine.Rendering::RenderPipelineAsset*
class CORDL_TYPE RenderPipelineAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_renderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> renderingLayerMaskNames;

  __declspec(property(get = get_prefixedRenderingLayerMaskNames))::ArrayW<::StringW, ::Array<::StringW>*> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_defaultMaterial))::UnityEngine::Material* defaultMaterial;

  __declspec(property(get = get_autodeskInteractiveShader))::UnityEngine::Shader* autodeskInteractiveShader;

  __declspec(property(get = get_autodeskInteractiveTransparentShader))::UnityEngine::Shader* autodeskInteractiveTransparentShader;

  __declspec(property(get = get_autodeskInteractiveMaskedShader))::UnityEngine::Shader* autodeskInteractiveMaskedShader;

  __declspec(property(get = get_terrainDetailLitShader))::UnityEngine::Shader* terrainDetailLitShader;

  __declspec(property(get = get_terrainDetailGrassShader))::UnityEngine::Shader* terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailGrassBillboardShader))::UnityEngine::Shader* terrainDetailGrassBillboardShader;

  __declspec(property(get = get_defaultParticleMaterial))::UnityEngine::Material* defaultParticleMaterial;

  __declspec(property(get = get_defaultLineMaterial))::UnityEngine::Material* defaultLineMaterial;

  __declspec(property(get = get_defaultTerrainMaterial))::UnityEngine::Material* defaultTerrainMaterial;

  __declspec(property(get = get_defaultUIMaterial))::UnityEngine::Material* defaultUIMaterial;

  __declspec(property(get = get_defaultUIOverdrawMaterial))::UnityEngine::Material* defaultUIOverdrawMaterial;

  __declspec(property(get = get_defaultUIETC1SupportedMaterial))::UnityEngine::Material* defaultUIETC1SupportedMaterial;

  __declspec(property(get = get_default2DMaterial))::UnityEngine::Material* default2DMaterial;

  __declspec(property(get = get_default2DMaskMaterial))::UnityEngine::Material* default2DMaskMaterial;

  __declspec(property(get = get_defaultShader))::UnityEngine::Shader* defaultShader;

  __declspec(property(get = get_defaultSpeedTree7Shader))::UnityEngine::Shader* defaultSpeedTree7Shader;

  __declspec(property(get = get_defaultSpeedTree8Shader))::UnityEngine::Shader* defaultSpeedTree8Shader;

  /// @brief Method InternalCreatePipeline addr 0x2b862f4 size 0x2f8 virtual false final false
  inline ::UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();

  /// @brief Method get_renderingLayerMaskNames addr 0x2b8692c size 0x8 virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_renderingLayerMaskNames();

  /// @brief Method get_prefixedRenderingLayerMaskNames addr 0x2b86934 size 0x8 virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_defaultMaterial addr 0x2b8693c size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultMaterial();

  /// @brief Method get_autodeskInteractiveShader addr 0x2b86944 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_autodeskInteractiveShader();

  /// @brief Method get_autodeskInteractiveTransparentShader addr 0x2b8694c size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_autodeskInteractiveTransparentShader();

  /// @brief Method get_autodeskInteractiveMaskedShader addr 0x2b86954 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_autodeskInteractiveMaskedShader();

  /// @brief Method get_terrainDetailLitShader addr 0x2b8695c size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_terrainDetailLitShader();

  /// @brief Method get_terrainDetailGrassShader addr 0x2b86964 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailGrassBillboardShader addr 0x2b8696c size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_terrainDetailGrassBillboardShader();

  /// @brief Method get_defaultParticleMaterial addr 0x2b86974 size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultParticleMaterial();

  /// @brief Method get_defaultLineMaterial addr 0x2b8697c size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultLineMaterial();

  /// @brief Method get_defaultTerrainMaterial addr 0x2b86984 size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultTerrainMaterial();

  /// @brief Method get_defaultUIMaterial addr 0x2b8698c size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultUIMaterial();

  /// @brief Method get_defaultUIOverdrawMaterial addr 0x2b86994 size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultUIOverdrawMaterial();

  /// @brief Method get_defaultUIETC1SupportedMaterial addr 0x2b8699c size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_defaultUIETC1SupportedMaterial();

  /// @brief Method get_default2DMaterial addr 0x2b869a4 size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_default2DMaterial();

  /// @brief Method get_default2DMaskMaterial addr 0x2b869ac size 0x8 virtual true final false
  inline ::UnityEngine::Material* get_default2DMaskMaterial();

  /// @brief Method get_defaultShader addr 0x2b869b4 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_defaultShader();

  /// @brief Method get_defaultSpeedTree7Shader addr 0x2b869bc size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_defaultSpeedTree7Shader();

  /// @brief Method get_defaultSpeedTree8Shader addr 0x2b869c4 size 0x8 virtual true final false
  inline ::UnityEngine::Shader* get_defaultSpeedTree8Shader();

  /// @brief Method CreatePipeline addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Rendering::RenderPipeline* CreatePipeline();

  /// @brief Method OnValidate addr 0x2b869cc size 0xbc virtual true final false
  inline void OnValidate();

  /// @brief Method OnDisable addr 0x2b86a88 size 0x4c virtual true final false
  inline void OnDisable();

  static inline ::UnityEngine::Rendering::RenderPipelineAsset* New_ctor();

  /// @brief Method .ctor addr 0x2b86ad4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineAsset(RenderPipelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineAsset(RenderPipelineAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineAsset();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
