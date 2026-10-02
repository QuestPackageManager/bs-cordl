#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/OnTilePostProcessResource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OnTilePostProcessResource)
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
class OnTilePostProcessResource;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::OnTilePostProcessResource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::OnTilePostProcessResource*, "UnityEngine.Rendering.Universal", "OnTilePostProcessResource");
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "R: On Tile Post Process Resources", Order = 1000)]
// [HideInInspector]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.OnTilePostProcessResource
class CORDL_TYPE OnTilePostProcessResource : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  /// @brief Field m_UberPostShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UberPostShader, put = __cordl_internal_set_m_UberPostShader)) ::UnityW<::UnityEngine::Shader> m_UberPostShader;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_uberPostShader, put = set_uberPostShader)) ::UnityW<::UnityEngine::Shader> uberPostShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::OnTilePostProcessResource* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6ce8d24, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_UberPostShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_UberPostShader();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_UberPostShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6ce8da4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_uberPostShader, addr 0x6ce8d2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_uberPostShader();

  /// @brief Method get_version, addr 0x6ce8d1c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_uberPostShader, addr 0x6ce8d34, size 0x70, virtual false, abstract: false, final false
  inline void set_uberPostShader(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessResource", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessResource(OnTilePostProcessResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessResource", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessResource(OnTilePostProcessResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13160 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// [SerializeField]
  /// [ResourcePath("Runtime/RendererFeatures/OnTileUberPost.shader", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_UberPostShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_UberPostShader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::OnTilePostProcessResource, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::OnTilePostProcessResource, ___m_UberPostShader) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::OnTilePostProcessResource) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
