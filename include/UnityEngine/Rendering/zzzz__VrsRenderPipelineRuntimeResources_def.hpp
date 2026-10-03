#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsRenderPipelineRuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VrsRenderPipelineRuntimeResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine::Rendering {
class VrsLut;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VrsRenderPipelineRuntimeResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources*, "UnityEngine.Rendering", "VrsRenderPipelineRuntimeResources");
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "VRS - Runtime Resources", Order = 1000)]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VrsRenderPipelineRuntimeResources
class CORDL_TYPE VrsRenderPipelineRuntimeResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_conversionLookupTable, put = set_conversionLookupTable)) ::UnityEngine::Rendering::VrsLut* conversionLookupTable;

  /// @brief Field m_ConversionLookupTable, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ConversionLookupTable, put = __cordl_internal_set_m_ConversionLookupTable)) ::UnityEngine::Rendering::VrsLut* m_ConversionLookupTable;

  /// @brief Field m_TextureComputeShader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureComputeShader, put = __cordl_internal_set_m_TextureComputeShader)) ::UnityW<::UnityEngine::ComputeShader> m_TextureComputeShader;

  /// @brief Field m_VisualizationLookupTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualizationLookupTable, put = __cordl_internal_set_m_VisualizationLookupTable)) ::UnityEngine::Rendering::VrsLut* m_VisualizationLookupTable;

  /// @brief Field m_VisualizationShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualizationShader, put = __cordl_internal_set_m_VisualizationShader)) ::UnityW<::UnityEngine::Shader> m_VisualizationShader;

  __declspec(property(get = get_textureComputeShader, put = set_textureComputeShader)) ::UnityW<::UnityEngine::ComputeShader> textureComputeShader;

  __declspec(property(get = get_version)) int32_t version;

  __declspec(property(get = get_visualizationLookupTable, put = set_visualizationLookupTable)) ::UnityEngine::Rendering::VrsLut* visualizationLookupTable;

  __declspec(property(get = get_visualizationShader, put = set_visualizationShader)) ::UnityW<::UnityEngine::Shader> visualizationShader;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6bf03d4, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityEngine::Rendering::VrsLut* const& __cordl_internal_get_m_ConversionLookupTable() const;

  constexpr ::UnityEngine::Rendering::VrsLut*& __cordl_internal_get_m_ConversionLookupTable();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_TextureComputeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_TextureComputeShader();

  constexpr ::UnityEngine::Rendering::VrsLut* const& __cordl_internal_get_m_VisualizationLookupTable() const;

  constexpr ::UnityEngine::Rendering::VrsLut*& __cordl_internal_get_m_VisualizationLookupTable();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_VisualizationShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_VisualizationShader();

  constexpr void __cordl_internal_set_m_ConversionLookupTable(::UnityEngine::Rendering::VrsLut* value);

  constexpr void __cordl_internal_set_m_TextureComputeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_VisualizationLookupTable(::UnityEngine::Rendering::VrsLut* value);

  constexpr void __cordl_internal_set_m_VisualizationShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x6bf05bc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_conversionLookupTable, addr 0x6bf0544, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VrsLut* get_conversionLookupTable();

  /// @brief Method get_textureComputeShader, addr 0x6bf03dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_textureComputeShader();

  /// @brief Method get_version, addr 0x6bf03cc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Method get_visualizationLookupTable, addr 0x6bf04cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VrsLut* get_visualizationLookupTable();

  /// @brief Method get_visualizationShader, addr 0x6bf0454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_visualizationShader();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_conversionLookupTable, addr 0x6bf054c, size 0x70, virtual false, abstract: false, final false
  inline void set_conversionLookupTable(::UnityEngine::Rendering::VrsLut* value);

  /// @brief Method set_textureComputeShader, addr 0x6bf03e4, size 0x70, virtual false, abstract: false, final false
  inline void set_textureComputeShader(::UnityEngine::ComputeShader* value);

  /// @brief Method set_visualizationLookupTable, addr 0x6bf04d4, size 0x70, virtual false, abstract: false, final false
  inline void set_visualizationLookupTable(::UnityEngine::Rendering::VrsLut* value);

  /// @brief Method set_visualizationShader, addr 0x6bf045c, size 0x70, virtual false, abstract: false, final false
  inline void set_visualizationShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VrsRenderPipelineRuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VrsRenderPipelineRuntimeResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VrsRenderPipelineRuntimeResources(VrsRenderPipelineRuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VrsRenderPipelineRuntimeResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VrsRenderPipelineRuntimeResources(VrsRenderPipelineRuntimeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9265 };

  /// [SerializeField]
  /// [Tooltip("Compute shader used for converting textures to shading rate values")]
  /// [ResourcePath("Runtime/Vrs/Shaders/VrsTexture.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_TextureComputeShader, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_TextureComputeShader;

  /// [SerializeField]
  /// [Tooltip("Shader used when visualizing shading rate values as a color image")]
  /// [ResourcePath("Runtime/Vrs/Shaders/VrsVisualization.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_VisualizationShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_VisualizationShader;

  /// [SerializeField]
  /// [Tooltip("Colors to visualize the shading rates")]
  /// @brief Field m_VisualizationLookupTable, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::VrsLut* ___m_VisualizationLookupTable;

  /// [SerializeField]
  /// [Tooltip("Colors to convert between shading rates and textures")]
  /// @brief Field m_ConversionLookupTable, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::VrsLut* ___m_ConversionLookupTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources, ___m_TextureComputeShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources, ___m_VisualizationShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources, ___m_VisualizationLookupTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources, ___m_ConversionLookupTable) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering
