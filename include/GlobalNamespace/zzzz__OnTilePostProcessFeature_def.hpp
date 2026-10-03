#pragma once
// IWYU pragma private; include "GlobalNamespace/OnTilePostProcessFeature.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(OnTilePostProcessFeature)
namespace GlobalNamespace {
class OnTilePostProcessPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class OnTilePostProcessFeature;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnTilePostProcessFeature*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnTilePostProcessFeature*, "", "OnTilePostProcessFeature");
// [DisallowMultipleRendererFeature("On Tile Post Processing (Untethered XR)")]
// Dependencies UnityEngine.Rendering.Universal.RenderPassEvent, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnTilePostProcessFeature
class CORDL_TYPE OnTilePostProcessFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field m_ColorGradingLutPass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorGradingLutPass,
                      put = __cordl_internal_set_m_ColorGradingLutPass)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPass;

  /// @brief Field m_OnTilePostProcessMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTilePostProcessMaterial, put = __cordl_internal_set_m_OnTilePostProcessMaterial)) ::UnityW<::UnityEngine::Material> m_OnTilePostProcessMaterial;

  /// @brief Field m_OnTilePostProcessPass, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnTilePostProcessPass, put = __cordl_internal_set_m_OnTilePostProcessPass)) ::GlobalNamespace::OnTilePostProcessPass* m_OnTilePostProcessPass;

  /// @brief Field m_PostProcessData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostProcessData, put = __cordl_internal_set_m_PostProcessData)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_PostProcessData;

  /// @brief Field m_UberPostShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UberPostShader, put = __cordl_internal_set_m_UberPostShader)) ::UnityW<::UnityEngine::Shader> m_UberPostShader;

  /// @brief Field postProcessingEvent, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_postProcessingEvent, put = __cordl_internal_set_postProcessingEvent)) ::UnityEngine::Rendering::Universal::RenderPassEvent postProcessingEvent;

  /// @brief Method AddRenderPasses, addr 0x6c71de4, size 0x2cc, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x6c71bf4, size 0x128, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x6c720bc, size 0x14, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method IsRuntimePlatformUntetheredXR, addr 0x6c71d6c, size 0x78, virtual false, abstract: false, final false
  inline bool IsRuntimePlatformUntetheredXR();

  static inline ::GlobalNamespace::OnTilePostProcessFeature* New_ctor();

  /// @brief Method TryLoadResources, addr 0x6c719ec, size 0x208, virtual false, abstract: false, final false
  inline bool TryLoadResources();

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* const& __cordl_internal_get_m_ColorGradingLutPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*& __cordl_internal_get_m_ColorGradingLutPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_OnTilePostProcessMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_OnTilePostProcessMaterial();

  constexpr ::GlobalNamespace::OnTilePostProcessPass* const& __cordl_internal_get_m_OnTilePostProcessPass() const;

  constexpr ::GlobalNamespace::OnTilePostProcessPass*& __cordl_internal_get_m_OnTilePostProcessPass();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_PostProcessData() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_PostProcessData();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_UberPostShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_UberPostShader();

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent const& __cordl_internal_get_postProcessingEvent() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderPassEvent& __cordl_internal_get_postProcessingEvent();

  constexpr void __cordl_internal_set_m_ColorGradingLutPass(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* value);

  constexpr void __cordl_internal_set_m_OnTilePostProcessMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_OnTilePostProcessPass(::GlobalNamespace::OnTilePostProcessPass* value);

  constexpr void __cordl_internal_set_m_PostProcessData(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_m_UberPostShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_postProcessingEvent(::UnityEngine::Rendering::Universal::RenderPassEvent value);

  /// @brief Method .ctor, addr 0x6c720d0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnTilePostProcessFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessFeature", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnTilePostProcessFeature(OnTilePostProcessFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnTilePostProcessFeature", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnTilePostProcessFeature(OnTilePostProcessFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12779 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_PostProcessData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_PostProcessData;

  /// @brief Field m_UberPostShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_UberPostShader;

  /// @brief Field postProcessingEvent, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent ___postProcessingEvent;

  /// @brief Field m_OnTilePostProcessMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_OnTilePostProcessMaterial;

  /// @brief Field m_ColorGradingLutPass, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* ___m_ColorGradingLutPass;

  /// @brief Field m_OnTilePostProcessPass, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OnTilePostProcessPass* ___m_OnTilePostProcessPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___m_PostProcessData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___m_UberPostShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___postProcessingEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___m_OnTilePostProcessMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___m_ColorGradingLutPass) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OnTilePostProcessFeature, ___m_OnTilePostProcessPass) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OnTilePostProcessFeature) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
