#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RenderPipelineAsset)
namespace System {
class Type;
}
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
MARK_REF_T(::UnityEngine::Rendering::RenderPipelineAsset*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderPipelineAsset*, "UnityEngine.Rendering", "RenderPipelineAsset");
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineAsset
class CORDL_TYPE RenderPipelineAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field <requiresCompatibleRenderPipelineGlobalSettings>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__requiresCompatibleRenderPipelineGlobalSettings_k__BackingField,
                      put = __cordl_internal_set__requiresCompatibleRenderPipelineGlobalSettings_k__BackingField)) bool _requiresCompatibleRenderPipelineGlobalSettings_k__BackingField;

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

  __declspec(property(get = get_defaultSpeedTree9Shader)) ::UnityW<::UnityEngine::Shader> defaultSpeedTree9Shader;

  __declspec(property(get = get_defaultTerrainMaterial)) ::UnityW<::UnityEngine::Material> defaultTerrainMaterial;

  __declspec(property(get = get_defaultUIETC1SupportedMaterial)) ::UnityW<::UnityEngine::Material> defaultUIETC1SupportedMaterial;

  __declspec(property(get = get_defaultUIMaterial)) ::UnityW<::UnityEngine::Material> defaultUIMaterial;

  __declspec(property(get = get_defaultUIOverdrawMaterial)) ::UnityW<::UnityEngine::Material> defaultUIOverdrawMaterial;

  __declspec(property(get = get_pipelineType)) ::System::Type* pipelineType;

  __declspec(property(get = get_pipelineTypeFullName)) ::StringW pipelineTypeFullName;

  /// @brief [Obsolete("This property is obsolete. Use RenderingLayerMask API and Tags & Layers project settings instead. #from(23.3)", false)]
  __declspec(property(get = get_prefixedRenderingLayerMaskNames)) ::ArrayW<::StringW> prefixedRenderingLayerMaskNames;

  __declspec(property(get = get_renderPipelineShaderTag)) ::StringW renderPipelineShaderTag;

  /// @brief [Obsolete("This property is obsolete. Use pipelineType instead. #from(23.2)", false)]
  __declspec(property(get = get_renderPipelineType)) ::System::Type* renderPipelineType;

  /// @brief [Obsolete("This property is obsolete. Use RenderingLayerMask API and Tags & Layers project settings instead. #from(23.3)", false)]
  __declspec(property(get = get_renderingLayerMaskNames)) ::ArrayW<::StringW> renderingLayerMaskNames;

  __declspec(property(get = get_requiresCompatibleRenderPipelineGlobalSettings)) bool requiresCompatibleRenderPipelineGlobalSettings;

  __declspec(property(get = get_terrainDetailGrassBillboardShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassBillboardShader;

  __declspec(property(get = get_terrainDetailGrassShader)) ::UnityW<::UnityEngine::Shader> terrainDetailGrassShader;

  __declspec(property(get = get_terrainDetailLitShader)) ::UnityW<::UnityEngine::Shader> terrainDetailLitShader;

  /// @brief Method CreatePipeline, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Rendering::RenderPipeline* CreatePipeline();

  /// @brief Method EnsureGlobalSettings, addr 0x6f8091c, size 0x4, virtual true, abstract: false, final false
  inline void EnsureGlobalSettings();

  /// @brief Method InternalCreatePipeline, addr 0x6f8065c, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderPipeline* InternalCreatePipeline();

  static inline ::UnityEngine::Rendering::RenderPipelineAsset* New_ctor();

  /// @brief Method OnDisable, addr 0x6f809c0, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnValidate, addr 0x6f80920, size 0x4, virtual true, abstract: false, final false
  inline void OnValidate();

  constexpr bool const& __cordl_internal_get__requiresCompatibleRenderPipelineGlobalSettings_k__BackingField() const;

  constexpr bool& __cordl_internal_get__requiresCompatibleRenderPipelineGlobalSettings_k__BackingField();

  constexpr void __cordl_internal_set__requiresCompatibleRenderPipelineGlobalSettings_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x6f80bd8, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_autodeskInteractiveMaskedShader, addr 0x6f8075c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveMaskedShader();

  /// @brief Method get_autodeskInteractiveShader, addr 0x6f8074c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveShader();

  /// @brief Method get_autodeskInteractiveTransparentShader, addr 0x6f80754, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_autodeskInteractiveTransparentShader();

  /// @brief Method get_default2DMaskMaterial, addr 0x6f807b4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaskMaterial();

  /// @brief Method get_default2DMaterial, addr 0x6f807ac, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_default2DMaterial();

  /// @brief Method get_defaultLineMaterial, addr 0x6f80784, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultLineMaterial();

  /// @brief Method get_defaultMaterial, addr 0x6f80744, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultMaterial();

  /// @brief Method get_defaultParticleMaterial, addr 0x6f8077c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultParticleMaterial();

  /// @brief Method get_defaultShader, addr 0x6f807bc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultShader();

  /// @brief Method get_defaultSpeedTree7Shader, addr 0x6f807c4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultSpeedTree7Shader();

  /// @brief Method get_defaultSpeedTree8Shader, addr 0x6f807cc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultSpeedTree8Shader();

  /// @brief Method get_defaultSpeedTree9Shader, addr 0x6f807d4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_defaultSpeedTree9Shader();

  /// @brief Method get_defaultTerrainMaterial, addr 0x6f8078c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultTerrainMaterial();

  /// @brief Method get_defaultUIETC1SupportedMaterial, addr 0x6f807a4, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIETC1SupportedMaterial();

  /// @brief Method get_defaultUIMaterial, addr 0x6f80794, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIMaterial();

  /// @brief Method get_defaultUIOverdrawMaterial, addr 0x6f8079c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_defaultUIOverdrawMaterial();

  /// @brief Method get_pipelineType, addr 0x6f80860, size 0x78, virtual true, abstract: false, final false
  inline ::System::Type* get_pipelineType();

  /// @brief Method get_pipelineTypeFullName, addr 0x6f808d8, size 0x44, virtual false, abstract: false, final false
  inline ::StringW get_pipelineTypeFullName();

  /// @brief Method get_prefixedRenderingLayerMaskNames, addr 0x6f80bd0, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> get_prefixedRenderingLayerMaskNames();

  /// @brief Method get_renderPipelineShaderTag, addr 0x6f807dc, size 0x84, virtual true, abstract: false, final false
  inline ::StringW get_renderPipelineShaderTag();

  /// @brief Method get_renderPipelineType, addr 0x6f80b50, size 0x78, virtual true, abstract: false, final false
  inline ::System::Type* get_renderPipelineType();

  /// @brief Method get_renderingLayerMaskNames, addr 0x6f80bc8, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW> get_renderingLayerMaskNames();

  /// [CompilerGenerated]
  /// @brief Method get_requiresCompatibleRenderPipelineGlobalSettings, addr 0x6f80b48, size 0x8, virtual true, abstract: false, final false
  inline bool get_requiresCompatibleRenderPipelineGlobalSettings();

  /// @brief Method get_terrainDetailGrassBillboardShader, addr 0x6f80774, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassBillboardShader();

  /// @brief Method get_terrainDetailGrassShader, addr 0x6f8076c, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailGrassShader();

  /// @brief Method get_terrainDetailLitShader, addr 0x6f80764, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_terrainDetailLitShader();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineAsset(RenderPipelineAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineAsset", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineAsset(RenderPipelineAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10424 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <requiresCompatibleRenderPipelineGlobalSettings>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____requiresCompatibleRenderPipelineGlobalSettings_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipelineAsset, ____requiresCompatibleRenderPipelineGlobalSettings_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderPipelineAsset) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
