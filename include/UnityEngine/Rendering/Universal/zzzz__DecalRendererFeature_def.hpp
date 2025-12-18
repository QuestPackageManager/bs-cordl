#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalRendererFeature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__DecalTechnique_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
CORDL_MODULE_EXPORT(DecalRendererFeature)
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class DBufferCopyDepthPass;
}
namespace UnityEngine::Rendering::Universal {
class DBufferRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DBufferSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalCreateDrawCallSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawDBufferSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawErrorSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawFowardEmissiveSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawGBufferSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalDrawScreenSpaceSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalEntityManager;
}
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass;
}
namespace UnityEngine::Rendering::Universal {
class DecalGBufferRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalPreviewPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalScreenSpaceSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalSettings;
}
namespace UnityEngine::Rendering::Universal {
class DecalSkipCulledSystem;
}
namespace UnityEngine::Rendering::Universal {
struct DecalTechnique;
}
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCachedSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCulledSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalUpdateCullingGroupSystem;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_Event;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class SharedDecalEntityManager;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalRendererFeature;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalRendererFeature);
// Dependencies UnityEngine.Rendering.Universal.DecalTechnique, UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalRendererFeature
class CORDL_TYPE DecalRendererFeature : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field <sharedDecalEntityManager>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sharedDecalEntityManager_k__BackingField,
                      put = setStaticF__sharedDecalEntityManager_k__BackingField)) ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* _sharedDecalEntityManager_k__BackingField;

  __declspec(property(get = get_intermediateRendering)) bool intermediateRendering;

  /// @brief Field m_CopyDepthPass, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthPass, put = __cordl_internal_set_m_CopyDepthPass)) ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* m_CopyDepthPass;

  /// @brief Field m_DBufferClearMaterial, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferClearMaterial, put = __cordl_internal_set_m_DBufferClearMaterial)) ::UnityW<::UnityEngine::Material> m_DBufferClearMaterial;

  /// @brief Field m_DBufferRenderPass, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferRenderPass, put = __cordl_internal_set_m_DBufferRenderPass)) ::UnityEngine::Rendering::Universal::DBufferRenderPass* m_DBufferRenderPass;

  /// @brief Field m_DBufferSettings, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DBufferSettings, put = __cordl_internal_set_m_DBufferSettings)) ::UnityEngine::Rendering::Universal::DBufferSettings* m_DBufferSettings;

  /// @brief Field m_DecalCreateDrawCallSystem, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalCreateDrawCallSystem,
                      put = __cordl_internal_set_m_DecalCreateDrawCallSystem)) ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* m_DecalCreateDrawCallSystem;

  /// @brief Field m_DecalDrawDBufferSystem, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalDrawDBufferSystem,
                      put = __cordl_internal_set_m_DecalDrawDBufferSystem)) ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* m_DecalDrawDBufferSystem;

  /// @brief Field m_DecalDrawForwardEmissiveSystem, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalDrawForwardEmissiveSystem,
                      put = __cordl_internal_set_m_DecalDrawForwardEmissiveSystem)) ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* m_DecalDrawForwardEmissiveSystem;

  /// @brief Field m_DecalDrawScreenSpaceSystem, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalDrawScreenSpaceSystem,
                      put = __cordl_internal_set_m_DecalDrawScreenSpaceSystem)) ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* m_DecalDrawScreenSpaceSystem;

  /// @brief Field m_DecalEntityManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalEntityManager, put = __cordl_internal_set_m_DecalEntityManager)) ::UnityEngine::Rendering::Universal::DecalEntityManager* m_DecalEntityManager;

  /// @brief Field m_DecalPreviewPass, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalPreviewPass, put = __cordl_internal_set_m_DecalPreviewPass)) ::UnityEngine::Rendering::Universal::DecalPreviewPass* m_DecalPreviewPass;

  /// @brief Field m_DecalSkipCulledSystem, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalSkipCulledSystem,
                      put = __cordl_internal_set_m_DecalSkipCulledSystem)) ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* m_DecalSkipCulledSystem;

  /// @brief Field m_DecalUpdateCachedSystem, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalUpdateCachedSystem,
                      put = __cordl_internal_set_m_DecalUpdateCachedSystem)) ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* m_DecalUpdateCachedSystem;

  /// @brief Field m_DecalUpdateCulledSystem, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalUpdateCulledSystem,
                      put = __cordl_internal_set_m_DecalUpdateCulledSystem)) ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* m_DecalUpdateCulledSystem;

  /// @brief Field m_DecalUpdateCullingGroupSystem, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalUpdateCullingGroupSystem,
                      put = __cordl_internal_set_m_DecalUpdateCullingGroupSystem)) ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* m_DecalUpdateCullingGroupSystem;

  /// @brief Field m_DeferredLights, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DrawErrorSystem, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawErrorSystem, put = __cordl_internal_set_m_DrawErrorSystem)) ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* m_DrawErrorSystem;

  /// @brief Field m_DrawGBufferSystem, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawGBufferSystem, put = __cordl_internal_set_m_DrawGBufferSystem)) ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* m_DrawGBufferSystem;

  /// @brief Field m_ForwardEmissivePass, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ForwardEmissivePass,
                      put = __cordl_internal_set_m_ForwardEmissivePass)) ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* m_ForwardEmissivePass;

  /// @brief Field m_GBufferRenderPass, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferRenderPass, put = __cordl_internal_set_m_GBufferRenderPass)) ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* m_GBufferRenderPass;

  /// @brief Field m_RecreateSystems, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RecreateSystems, put = __cordl_internal_set_m_RecreateSystems)) bool m_RecreateSystems;

  /// @brief Field m_ScreenSpaceDecalRenderPass, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceDecalRenderPass,
                      put = __cordl_internal_set_m_ScreenSpaceDecalRenderPass)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* m_ScreenSpaceDecalRenderPass;

  /// @brief Field m_ScreenSpaceSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceSettings,
                      put = __cordl_internal_set_m_ScreenSpaceSettings)) ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* m_ScreenSpaceSettings;

  /// @brief Field m_Settings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::DecalSettings* m_Settings;

  /// @brief Field m_Technique, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Technique, put = __cordl_internal_set_m_Technique)) ::UnityEngine::Rendering::Universal::DecalTechnique m_Technique;

  __declspec(property(get = get_requiresDecalLayers)) bool requiresDecalLayers;

  __declspec(property(get = get_settings)) ::UnityEngine::Rendering::Universal::DecalSettings* settings;

  /// @brief Method AddRenderPasses, addr 0x66f6c78, size 0x1ac, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ChangeAdaptivePerformanceDrawDistances, addr 0x66f7118, size 0x4, virtual false, abstract: false, final false
  inline void ChangeAdaptivePerformanceDrawDistances();

  /// @brief Method Create, addr 0x66f5e0c, size 0x64, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x66f6ff4, size 0x124, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetDBufferSettings, addr 0x66f6120, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DBufferSettings* GetDBufferSettings();

  /// @brief Method GetScreenSpaceSettings, addr 0x66f6190, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* GetScreenSpaceSettings();

  /// @brief Method GetTechnique, addr 0x66f5f38, size 0x1e8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalTechnique GetTechnique(bool isDeferred, bool needsGBufferAccurateNormals, bool checkForInvalidTechniques);

  /// @brief Method GetTechnique, addr 0x66f6344, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalTechnique GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer);

  /// @brief Method GetTechnique, addr 0x66f6200, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DecalTechnique GetTechnique(::UnityEngine::Rendering::Universal::ScriptableRendererData* renderer);

  /// @brief Method IsAutomaticDBuffer, addr 0x66f6440, size 0xf4, virtual false, abstract: false, final false
  inline bool IsAutomaticDBuffer();

  static inline ::UnityEngine::Rendering::Universal::DecalRendererFeature* New_ctor();

  /// @brief Method OnCameraPreCull, addr 0x66f6b34, size 0x144, virtual true, abstract: false, final false
  inline void OnCameraPreCull(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method RecreateSystemsIfNeeded, addr 0x66f6534, size 0x600, virtual false, abstract: false, final false
  inline bool RecreateSystemsIfNeeded(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method RequireRenderingLayers, addr 0x66f5e70, size 0xc8, virtual true, abstract: false, final false
  inline bool RequireRenderingLayers(bool isDeferred, bool needsGBufferAccurateNormals, ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event> atEvent,
                                     ::ByRef<::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize> maskSize);

  /// @brief Method SetupRenderPasses, addr 0x66f6e38, size 0x1bc, virtual true, abstract: false, final false
  inline void SetupRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SupportsNativeRenderPass, addr 0x66f6e24, size 0x14, virtual true, abstract: false, final false
  inline bool SupportsNativeRenderPass();

  constexpr ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* const& __cordl_internal_get_m_CopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass*& __cordl_internal_get_m_CopyDepthPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DBufferClearMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DBufferClearMaterial();

  constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass* const& __cordl_internal_get_m_DBufferRenderPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferRenderPass*& __cordl_internal_get_m_DBufferRenderPass();

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings* const& __cordl_internal_get_m_DBufferSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DBufferSettings*& __cordl_internal_get_m_DBufferSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* const& __cordl_internal_get_m_DecalCreateDrawCallSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem*& __cordl_internal_get_m_DecalCreateDrawCallSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* const& __cordl_internal_get_m_DecalDrawDBufferSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem*& __cordl_internal_get_m_DecalDrawDBufferSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const& __cordl_internal_get_m_DecalDrawForwardEmissiveSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& __cordl_internal_get_m_DecalDrawForwardEmissiveSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* const& __cordl_internal_get_m_DecalDrawScreenSpaceSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem*& __cordl_internal_get_m_DecalDrawScreenSpaceSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager* const& __cordl_internal_get_m_DecalEntityManager() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalEntityManager*& __cordl_internal_get_m_DecalEntityManager();

  constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass* const& __cordl_internal_get_m_DecalPreviewPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass*& __cordl_internal_get_m_DecalPreviewPass();

  constexpr ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* const& __cordl_internal_get_m_DecalSkipCulledSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem*& __cordl_internal_get_m_DecalSkipCulledSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* const& __cordl_internal_get_m_DecalUpdateCachedSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem*& __cordl_internal_get_m_DecalUpdateCachedSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* const& __cordl_internal_get_m_DecalUpdateCulledSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem*& __cordl_internal_get_m_DecalUpdateCulledSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* const& __cordl_internal_get_m_DecalUpdateCullingGroupSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem*& __cordl_internal_get_m_DecalUpdateCullingGroupSystem();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* const& __cordl_internal_get_m_DrawErrorSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem*& __cordl_internal_get_m_DrawErrorSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* const& __cordl_internal_get_m_DrawGBufferSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem*& __cordl_internal_get_m_DrawGBufferSystem();

  constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* const& __cordl_internal_get_m_ForwardEmissivePass() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*& __cordl_internal_get_m_ForwardEmissivePass();

  constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* const& __cordl_internal_get_m_GBufferRenderPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass*& __cordl_internal_get_m_GBufferRenderPass();

  constexpr bool const& __cordl_internal_get_m_RecreateSystems() const;

  constexpr bool& __cordl_internal_get_m_RecreateSystems();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* const& __cordl_internal_get_m_ScreenSpaceDecalRenderPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass*& __cordl_internal_get_m_ScreenSpaceDecalRenderPass();

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* const& __cordl_internal_get_m_ScreenSpaceSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings*& __cordl_internal_get_m_ScreenSpaceSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalSettings*& __cordl_internal_get_m_Settings();

  constexpr ::UnityEngine::Rendering::Universal::DecalTechnique const& __cordl_internal_get_m_Technique() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalTechnique& __cordl_internal_get_m_Technique();

  constexpr void __cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* value);

  constexpr void __cordl_internal_set_m_DBufferClearMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DBufferRenderPass(::UnityEngine::Rendering::Universal::DBufferRenderPass* value);

  constexpr void __cordl_internal_set_m_DBufferSettings(::UnityEngine::Rendering::Universal::DBufferSettings* value);

  constexpr void __cordl_internal_set_m_DecalCreateDrawCallSystem(::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* value);

  constexpr void __cordl_internal_set_m_DecalDrawDBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* value);

  constexpr void __cordl_internal_set_m_DecalDrawForwardEmissiveSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value);

  constexpr void __cordl_internal_set_m_DecalDrawScreenSpaceSystem(::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* value);

  constexpr void __cordl_internal_set_m_DecalEntityManager(::UnityEngine::Rendering::Universal::DecalEntityManager* value);

  constexpr void __cordl_internal_set_m_DecalPreviewPass(::UnityEngine::Rendering::Universal::DecalPreviewPass* value);

  constexpr void __cordl_internal_set_m_DecalSkipCulledSystem(::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* value);

  constexpr void __cordl_internal_set_m_DecalUpdateCachedSystem(::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* value);

  constexpr void __cordl_internal_set_m_DecalUpdateCulledSystem(::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* value);

  constexpr void __cordl_internal_set_m_DecalUpdateCullingGroupSystem(::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* value);

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DrawErrorSystem(::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* value);

  constexpr void __cordl_internal_set_m_DrawGBufferSystem(::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* value);

  constexpr void __cordl_internal_set_m_ForwardEmissivePass(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* value);

  constexpr void __cordl_internal_set_m_GBufferRenderPass(::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* value);

  constexpr void __cordl_internal_set_m_RecreateSystems(bool value);

  constexpr void __cordl_internal_set_m_ScreenSpaceDecalRenderPass(::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* value);

  constexpr void __cordl_internal_set_m_ScreenSpaceSettings(::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::DecalSettings* value);

  constexpr void __cordl_internal_set_m_Technique(::UnityEngine::Rendering::Universal::DecalTechnique value);

  /// @brief Method .ctor, addr 0x66f711c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* getStaticF__sharedDecalEntityManager_k__BackingField();

  /// @brief Method get_intermediateRendering, addr 0x66f5d84, size 0x10, virtual false, abstract: false, final false
  inline bool get_intermediateRendering();

  /// @brief Method get_isGLDevice, addr 0x66f5dac, size 0x60, virtual false, abstract: false, final false
  static inline bool get_isGLDevice();

  /// @brief Method get_requiresDecalLayers, addr 0x66f5d94, size 0x18, virtual false, abstract: false, final false
  inline bool get_requiresDecalLayers();

  /// @brief Method get_settings, addr 0x66f5d7c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::DecalSettings*> get_settings();

  /// @brief Method get_sharedDecalEntityManager, addr 0x66f5d20, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::SharedDecalEntityManager* get_sharedDecalEntityManager();

  static inline void setStaticF__sharedDecalEntityManager_k__BackingField(::UnityEngine::Rendering::Universal::SharedDecalEntityManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalRendererFeature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalRendererFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalRendererFeature(DecalRendererFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalRendererFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalRendererFeature(DecalRendererFeature const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12885 };

  /// @brief Field m_Settings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalSettings* ___m_Settings;

  /// @brief Field m_Technique, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DecalTechnique ___m_Technique;

  /// @brief Field m_DBufferSettings, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferSettings* ___m_DBufferSettings;

  /// @brief Field m_ScreenSpaceSettings, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceSettings* ___m_ScreenSpaceSettings;

  /// @brief Field m_RecreateSystems, offset: 0x40, size: 0x1, def value: None
  bool ___m_RecreateSystems;

  /// @brief Field m_DecalPreviewPass, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalPreviewPass* ___m_DecalPreviewPass;

  /// @brief Field m_DecalEntityManager, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalEntityManager* ___m_DecalEntityManager;

  /// @brief Field m_DecalUpdateCachedSystem, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalUpdateCachedSystem* ___m_DecalUpdateCachedSystem;

  /// @brief Field m_DecalUpdateCullingGroupSystem, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalUpdateCullingGroupSystem* ___m_DecalUpdateCullingGroupSystem;

  /// @brief Field m_DecalUpdateCulledSystem, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalUpdateCulledSystem* ___m_DecalUpdateCulledSystem;

  /// @brief Field m_DecalCreateDrawCallSystem, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalCreateDrawCallSystem* ___m_DecalCreateDrawCallSystem;

  /// @brief Field m_DrawErrorSystem, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawErrorSystem* ___m_DrawErrorSystem;

  /// @brief Field m_CopyDepthPass, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferCopyDepthPass* ___m_CopyDepthPass;

  /// @brief Field m_DBufferRenderPass, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DBufferRenderPass* ___m_DBufferRenderPass;

  /// @brief Field m_ForwardEmissivePass, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* ___m_ForwardEmissivePass;

  /// @brief Field m_DecalDrawDBufferSystem, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawDBufferSystem* ___m_DecalDrawDBufferSystem;

  /// @brief Field m_DecalDrawForwardEmissiveSystem, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* ___m_DecalDrawForwardEmissiveSystem;

  /// @brief Field m_DBufferClearMaterial, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DBufferClearMaterial;

  /// @brief Field m_ScreenSpaceDecalRenderPass, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalScreenSpaceRenderPass* ___m_ScreenSpaceDecalRenderPass;

  /// @brief Field m_DecalDrawScreenSpaceSystem, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawScreenSpaceSystem* ___m_DecalDrawScreenSpaceSystem;

  /// @brief Field m_DecalSkipCulledSystem, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalSkipCulledSystem* ___m_DecalSkipCulledSystem;

  /// @brief Field m_GBufferRenderPass, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalGBufferRenderPass* ___m_GBufferRenderPass;

  /// @brief Field m_DrawGBufferSystem, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawGBufferSystem* ___m_DrawGBufferSystem;

  /// @brief Field m_DeferredLights, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_Technique) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DBufferSettings) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_ScreenSpaceSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_RecreateSystems) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalPreviewPass) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalEntityManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalUpdateCachedSystem) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalUpdateCullingGroupSystem) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalUpdateCulledSystem) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalCreateDrawCallSystem) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DrawErrorSystem) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_CopyDepthPass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DBufferRenderPass) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_ForwardEmissivePass) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalDrawDBufferSystem) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalDrawForwardEmissiveSystem) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DBufferClearMaterial) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_ScreenSpaceDecalRenderPass) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalDrawScreenSpaceSystem) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DecalSkipCulledSystem) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_GBufferRenderPass) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DrawGBufferSystem) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalRendererFeature, ___m_DeferredLights) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalRendererFeature, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalRendererFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalRendererFeature*, "UnityEngine.Rendering.Universal", "DecalRendererFeature");
