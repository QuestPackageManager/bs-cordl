#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugHandler)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
struct DebugFullScreenMode;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler_DebugFinalValidationPassData;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler_DebugSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler___c;
}
namespace UnityEngine::Rendering::Universal {
class DebugRendererLists;
}
namespace UnityEngine::Rendering::Universal {
class HDRDebugViewPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineDebugDisplaySettings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderPipelineRuntimeTextures;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler_DebugFinalValidationPassData;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler_DebugSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugHandler);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugHandler___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugHandler/DebugFinalValidationPassData
class CORDL_TYPE DebugHandler_DebugFinalValidationPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugFontTextureHandle, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get_debugFontTextureHandle,
                      put = __cordl_internal_set_debugFontTextureHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugFontTextureHandle;

  /// @brief Field debugRenderTargetHandle, offset 0x14, size 0x10
  __declspec(property(get = __cordl_internal_get_debugRenderTargetHandle,
                      put = __cordl_internal_set_debugRenderTargetHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle debugRenderTargetHandle;

  /// @brief Field debugRenderTargetPixelRect, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_debugRenderTargetPixelRect, put = __cordl_internal_set_debugRenderTargetPixelRect)) ::UnityEngine::Vector4 debugRenderTargetPixelRect;

  /// @brief Field debugRenderTargetRangeRemap, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_debugRenderTargetRangeRemap, put = __cordl_internal_set_debugRenderTargetRangeRemap)) ::UnityEngine::Vector4 debugRenderTargetRangeRemap;

  /// @brief Field debugRenderTargetSupportsStereo, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_debugRenderTargetSupportsStereo, put = __cordl_internal_set_debugRenderTargetSupportsStereo)) int32_t debugRenderTargetSupportsStereo;

  /// @brief Field debugTexturePropertyId, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_debugTexturePropertyId, put = __cordl_internal_set_debugTexturePropertyId)) int32_t debugTexturePropertyId;

  /// @brief Field hasDebugRenderTarget, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_hasDebugRenderTarget, put = __cordl_internal_set_hasDebugRenderTarget)) bool hasDebugRenderTarget;

  /// @brief Field isActiveForCamera, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveForCamera, put = __cordl_internal_set_isActiveForCamera)) bool isActiveForCamera;

  /// @brief Field isFinalPass, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isFinalPass, put = __cordl_internal_set_isFinalPass)) bool isFinalPass;

  /// @brief Field renderingSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingSettings,
                      put = __cordl_internal_set_renderingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* renderingSettings;

  /// @brief Field resolveFinalTarget, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_resolveFinalTarget, put = __cordl_internal_set_resolveFinalTarget)) bool resolveFinalTarget;

  static inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_debugFontTextureHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_debugFontTextureHandle();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_debugRenderTargetHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_debugRenderTargetHandle();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_debugRenderTargetPixelRect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_debugRenderTargetPixelRect();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_debugRenderTargetRangeRemap() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_debugRenderTargetRangeRemap();

  constexpr int32_t const& __cordl_internal_get_debugRenderTargetSupportsStereo() const;

  constexpr int32_t& __cordl_internal_get_debugRenderTargetSupportsStereo();

  constexpr int32_t const& __cordl_internal_get_debugTexturePropertyId() const;

  constexpr int32_t& __cordl_internal_get_debugTexturePropertyId();

  constexpr bool const& __cordl_internal_get_hasDebugRenderTarget() const;

  constexpr bool& __cordl_internal_get_hasDebugRenderTarget();

  constexpr bool const& __cordl_internal_get_isActiveForCamera() const;

  constexpr bool& __cordl_internal_get_isActiveForCamera();

  constexpr bool const& __cordl_internal_get_isFinalPass() const;

  constexpr bool& __cordl_internal_get_isFinalPass();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const& __cordl_internal_get_renderingSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_renderingSettings();

  constexpr bool const& __cordl_internal_get_resolveFinalTarget() const;

  constexpr bool& __cordl_internal_get_resolveFinalTarget();

  constexpr void __cordl_internal_set_debugFontTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_debugRenderTargetHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_debugRenderTargetPixelRect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_debugRenderTargetRangeRemap(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_debugRenderTargetSupportsStereo(int32_t value);

  constexpr void __cordl_internal_set_debugTexturePropertyId(int32_t value);

  constexpr void __cordl_internal_set_hasDebugRenderTarget(bool value);

  constexpr void __cordl_internal_set_isActiveForCamera(bool value);

  constexpr void __cordl_internal_set_isFinalPass(bool value);

  constexpr void __cordl_internal_set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  constexpr void __cordl_internal_set_resolveFinalTarget(bool value);

  /// @brief Method .ctor, addr 0x6695ad8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugHandler_DebugFinalValidationPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler_DebugFinalValidationPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugHandler_DebugFinalValidationPassData(DebugHandler_DebugFinalValidationPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler_DebugFinalValidationPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugHandler_DebugFinalValidationPassData(DebugHandler_DebugFinalValidationPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12636 };

  /// @brief Field isFinalPass, offset: 0x10, size: 0x1, def value: None
  bool ___isFinalPass;

  /// @brief Field resolveFinalTarget, offset: 0x11, size: 0x1, def value: None
  bool ___resolveFinalTarget;

  /// @brief Field isActiveForCamera, offset: 0x12, size: 0x1, def value: None
  bool ___isActiveForCamera;

  /// @brief Field hasDebugRenderTarget, offset: 0x13, size: 0x1, def value: None
  bool ___hasDebugRenderTarget;

  /// @brief Field debugRenderTargetHandle, offset: 0x14, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___debugRenderTargetHandle;

  /// @brief Field debugTexturePropertyId, offset: 0x24, size: 0x4, def value: None
  int32_t ___debugTexturePropertyId;

  /// @brief Field debugRenderTargetPixelRect, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___debugRenderTargetPixelRect;

  /// @brief Field debugRenderTargetSupportsStereo, offset: 0x38, size: 0x4, def value: None
  int32_t ___debugRenderTargetSupportsStereo;

  /// @brief Field debugRenderTargetRangeRemap, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___debugRenderTargetRangeRemap;

  /// @brief Field debugFontTextureHandle, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___debugFontTextureHandle;

  /// @brief Field renderingSettings, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___renderingSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___isFinalPass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___resolveFinalTarget) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___isActiveForCamera) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___hasDebugRenderTarget) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugRenderTargetHandle) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugTexturePropertyId) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugRenderTargetPixelRect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugRenderTargetSupportsStereo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugRenderTargetRangeRemap) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___debugFontTextureHandle) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, ___renderingSettings) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugHandler/DebugSetupPassData
class CORDL_TYPE DebugHandler_DebugSetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field isActiveForCamera, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_isActiveForCamera, put = __cordl_internal_set_isActiveForCamera)) bool isActiveForCamera;

  /// @brief Field lightingSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_lightingSettings, put = __cordl_internal_set_lightingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* lightingSettings;

  /// @brief Field materialSettings, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_materialSettings, put = __cordl_internal_set_materialSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* materialSettings;

  /// @brief Field renderingSettings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_renderingSettings,
                      put = __cordl_internal_set_renderingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* renderingSettings;

  static inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* New_ctor();

  constexpr bool const& __cordl_internal_get_isActiveForCamera() const;

  constexpr bool& __cordl_internal_get_isActiveForCamera();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* const& __cordl_internal_get_lightingSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting*& __cordl_internal_get_lightingSettings();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* const& __cordl_internal_get_materialSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial*& __cordl_internal_get_materialSettings();

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* const& __cordl_internal_get_renderingSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering*& __cordl_internal_get_renderingSettings();

  constexpr void __cordl_internal_set_isActiveForCamera(bool value);

  constexpr void __cordl_internal_set_lightingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* value);

  constexpr void __cordl_internal_set_materialSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* value);

  constexpr void __cordl_internal_set_renderingSettings(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* value);

  /// @brief Method .ctor, addr 0x6695ad4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugHandler_DebugSetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler_DebugSetupPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugHandler_DebugSetupPassData(DebugHandler_DebugSetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler_DebugSetupPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugHandler_DebugSetupPassData(DebugHandler_DebugSetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12637 };

  /// @brief Field isActiveForCamera, offset: 0x10, size: 0x1, def value: None
  bool ___isActiveForCamera;

  /// @brief Field materialSettings, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* ___materialSettings;

  /// @brief Field renderingSettings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* ___renderingSettings;

  /// @brief Field lightingSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* ___lightingSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData, ___isActiveForCamera) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData, ___materialSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData, ___renderingSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData, ___lightingSettings) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugHandler/<>c
class CORDL_TYPE DebugHandler___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DebugHandler___c* __9;

  /// @brief Field <>9__101_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__101_0,
                      put = setStaticF___9__101_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__101_0;

  /// @brief Field <>9__106_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__106_0,
                      put = setStaticF___9__106_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__106_0;

  static inline ::UnityEngine::Rendering::Universal::DebugHandler___c* New_ctor();

  /// @brief Method <Setup>b__106_0, addr 0x6698d70, size 0x4, virtual false, abstract: false, final false
  inline void _Setup_b__106_0(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <UpdateShaderGlobalPropertiesForFinalValidationPass>b__101_0, addr 0x6698d08, size 0x68, virtual false, abstract: false, final false
  inline void _UpdateShaderGlobalPropertiesForFinalValidationPass_b__101_0(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* data,
                                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6698d04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DebugHandler___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__101_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__106_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DebugHandler___c* value);

  static inline void setStaticF___9__101_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__106_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugHandler___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugHandler___c(DebugHandler___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugHandler___c(DebugHandler___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12638 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugHandler___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugHandler
class CORDL_TYPE DebugHandler : public ::System::Object {
public:
  // Declarations
  using DebugFinalValidationPassData = ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData;

  using DebugSetupPassData = ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData;

  using __c = ::UnityEngine::Rendering::Universal::DebugHandler___c;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  __declspec(property(get = get_DebugDisplaySettings)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* DebugDisplaySettings;

  __declspec(property(get = get_DebugScreenColorHandle)) ::UnityEngine::Rendering::RTHandle* DebugScreenColorHandle;

  __declspec(property(get = get_DebugScreenDepthHandle)) ::UnityEngine::Rendering::RTHandle* DebugScreenDepthHandle;

  __declspec(property(get = get_IsActiveModeUnsupportedForDeferred)) bool IsActiveModeUnsupportedForDeferred;

  __declspec(property(get = get_IsLightingActive)) bool IsLightingActive;

  __declspec(property(get = get_IsPostProcessingAllowed)) bool IsPostProcessingAllowed;

  __declspec(property(get = get_IsRenderPassSupported)) bool IsRenderPassSupported;

  __declspec(property(get = get_IsScreenClearNeeded)) bool IsScreenClearNeeded;

  __declspec(property(get = get_LightingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* LightingSettings;

  __declspec(property(get = get_MaterialSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* MaterialSettings;

  __declspec(property(get = get_RenderingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* RenderingSettings;

  __declspec(property(get = get_ReplacementMaterial)) ::UnityW<::UnityEngine::Material> ReplacementMaterial;

  __declspec(property(get = get_hdrDebugViewPass)) ::UnityEngine::Rendering::Universal::HDRDebugViewPass* hdrDebugViewPass;

  /// @brief Field k_DebugColorInvalidModePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugColorInvalidModePropertyId, put = setStaticF_k_DebugColorInvalidModePropertyId)) int32_t k_DebugColorInvalidModePropertyId;

  /// @brief Field k_DebugColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugColorPropertyId, put = setStaticF_k_DebugColorPropertyId)) int32_t k_DebugColorPropertyId;

  /// @brief Field k_DebugCurrentRealTimeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugCurrentRealTimeId, put = setStaticF_k_DebugCurrentRealTimeId)) int32_t k_DebugCurrentRealTimeId;

  /// @brief Field k_DebugFontId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugFontId, put = setStaticF_k_DebugFontId)) int32_t k_DebugFontId;

  /// @brief Field k_DebugFullScreenModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugFullScreenModeId, put = setStaticF_k_DebugFullScreenModeId)) int32_t k_DebugFullScreenModeId;

  /// @brief Field k_DebugLightingFeatureFlagsId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugLightingFeatureFlagsId, put = setStaticF_k_DebugLightingFeatureFlagsId)) int32_t k_DebugLightingFeatureFlagsId;

  /// @brief Field k_DebugLightingModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugLightingModeId, put = setStaticF_k_DebugLightingModeId)) int32_t k_DebugLightingModeId;

  /// @brief Field k_DebugMaterialModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMaterialModeId, put = setStaticF_k_DebugMaterialModeId)) int32_t k_DebugMaterialModeId;

  /// @brief Field k_DebugMaterialValidationModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMaterialValidationModeId, put = setStaticF_k_DebugMaterialValidationModeId)) int32_t k_DebugMaterialValidationModeId;

  /// @brief Field k_DebugMaxPixelCost, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMaxPixelCost, put = setStaticF_k_DebugMaxPixelCost)) int32_t k_DebugMaxPixelCost;

  /// @brief Field k_DebugMipInfoModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipInfoModeId, put = setStaticF_k_DebugMipInfoModeId)) int32_t k_DebugMipInfoModeId;

  /// @brief Field k_DebugMipMapOpacityId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipMapOpacityId, put = setStaticF_k_DebugMipMapOpacityId)) int32_t k_DebugMipMapOpacityId;

  /// @brief Field k_DebugMipMapRecentlyUpdatedCooldownId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipMapRecentlyUpdatedCooldownId, put = setStaticF_k_DebugMipMapRecentlyUpdatedCooldownId)) int32_t k_DebugMipMapRecentlyUpdatedCooldownId;

  /// @brief Field k_DebugMipMapShowStatusCodeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipMapShowStatusCodeId, put = setStaticF_k_DebugMipMapShowStatusCodeId)) int32_t k_DebugMipMapShowStatusCodeId;

  /// @brief Field k_DebugMipMapStatusModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipMapStatusModeId, put = setStaticF_k_DebugMipMapStatusModeId)) int32_t k_DebugMipMapStatusModeId;

  /// @brief Field k_DebugMipMapTerrainTextureModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugMipMapTerrainTextureModeId, put = setStaticF_k_DebugMipMapTerrainTextureModeId)) int32_t k_DebugMipMapTerrainTextureModeId;

  /// @brief Field k_DebugRenderTargetRangeRemap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugRenderTargetRangeRemap, put = setStaticF_k_DebugRenderTargetRangeRemap)) int32_t k_DebugRenderTargetRangeRemap;

  /// @brief Field k_DebugRenderTargetSupportsStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugRenderTargetSupportsStereo, put = setStaticF_k_DebugRenderTargetSupportsStereo)) int32_t k_DebugRenderTargetSupportsStereo;

  /// @brief Field k_DebugSceneOverrideModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugSceneOverrideModeId, put = setStaticF_k_DebugSceneOverrideModeId)) int32_t k_DebugSceneOverrideModeId;

  /// @brief Field k_DebugTextureDisplayRect, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugTextureDisplayRect, put = setStaticF_k_DebugTextureDisplayRect)) int32_t k_DebugTextureDisplayRect;

  /// @brief Field k_DebugTextureNoStereoPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugTextureNoStereoPropertyId, put = setStaticF_k_DebugTextureNoStereoPropertyId)) int32_t k_DebugTextureNoStereoPropertyId;

  /// @brief Field k_DebugTexturePropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugTexturePropertyId, put = setStaticF_k_DebugTexturePropertyId)) int32_t k_DebugTexturePropertyId;

  /// @brief Field k_DebugValidateAboveMaxThresholdColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId,
                      put = setStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId)) int32_t k_DebugValidateAboveMaxThresholdColorPropertyId;

  /// @brief Field k_DebugValidateAlbedoCompareColorId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAlbedoCompareColorId, put = setStaticF_k_DebugValidateAlbedoCompareColorId)) int32_t k_DebugValidateAlbedoCompareColorId;

  /// @brief Field k_DebugValidateAlbedoHueToleranceId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAlbedoHueToleranceId, put = setStaticF_k_DebugValidateAlbedoHueToleranceId)) int32_t k_DebugValidateAlbedoHueToleranceId;

  /// @brief Field k_DebugValidateAlbedoMaxLuminanceId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAlbedoMaxLuminanceId, put = setStaticF_k_DebugValidateAlbedoMaxLuminanceId)) int32_t k_DebugValidateAlbedoMaxLuminanceId;

  /// @brief Field k_DebugValidateAlbedoMinLuminanceId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAlbedoMinLuminanceId, put = setStaticF_k_DebugValidateAlbedoMinLuminanceId)) int32_t k_DebugValidateAlbedoMinLuminanceId;

  /// @brief Field k_DebugValidateAlbedoSaturationToleranceId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateAlbedoSaturationToleranceId, put = setStaticF_k_DebugValidateAlbedoSaturationToleranceId)) int32_t k_DebugValidateAlbedoSaturationToleranceId;

  /// @brief Field k_DebugValidateBelowMinThresholdColorPropertyId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateBelowMinThresholdColorPropertyId,
                      put = setStaticF_k_DebugValidateBelowMinThresholdColorPropertyId)) int32_t k_DebugValidateBelowMinThresholdColorPropertyId;

  /// @brief Field k_DebugValidateMetallicMaxValueId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateMetallicMaxValueId, put = setStaticF_k_DebugValidateMetallicMaxValueId)) int32_t k_DebugValidateMetallicMaxValueId;

  /// @brief Field k_DebugValidateMetallicMinValueId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidateMetallicMinValueId, put = setStaticF_k_DebugValidateMetallicMinValueId)) int32_t k_DebugValidateMetallicMinValueId;

  /// @brief Field k_DebugValidationModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugValidationModeId, put = setStaticF_k_DebugValidationModeId)) int32_t k_DebugValidationModeId;

  /// @brief Field k_DebugVertexAttributeModeId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_DebugVertexAttributeModeId, put = setStaticF_k_DebugVertexAttributeModeId)) int32_t k_DebugVertexAttributeModeId;

  /// @brief Field k_RangeMaximumId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_RangeMaximumId, put = setStaticF_k_RangeMaximumId)) int32_t k_RangeMaximumId;

  /// @brief Field k_RangeMinimumId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_RangeMinimumId, put = setStaticF_k_RangeMinimumId)) int32_t k_RangeMinimumId;

  /// @brief Field k_ValidationChannelsId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ValidationChannelsId, put = setStaticF_k_ValidationChannelsId)) int32_t k_ValidationChannelsId;

  /// @brief Field m_DebugDisplaySettings, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugDisplaySettings,
                      put = __cordl_internal_set_m_DebugDisplaySettings)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* m_DebugDisplaySettings;

  /// @brief Field m_DebugFontTexture, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFontTexture, put = __cordl_internal_set_m_DebugFontTexture)) ::UnityEngine::Rendering::RTHandle* m_DebugFontTexture;

  /// @brief Field m_DebugRenderTarget, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTarget, put = __cordl_internal_set_m_DebugRenderTarget)) ::UnityEngine::Rendering::RTHandle* m_DebugRenderTarget;

  /// @brief Field m_DebugRenderTargetPixelRect, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetPixelRect, put = __cordl_internal_set_m_DebugRenderTargetPixelRect)) ::UnityEngine::Vector4 m_DebugRenderTargetPixelRect;

  /// @brief Field m_DebugRenderTargetRangeRemap, offset 0x64, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetRangeRemap, put = __cordl_internal_set_m_DebugRenderTargetRangeRemap)) ::UnityEngine::Vector4 m_DebugRenderTargetRangeRemap;

  /// @brief Field m_DebugRenderTargetSupportsStereo, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DebugRenderTargetSupportsStereo, put = __cordl_internal_set_m_DebugRenderTargetSupportsStereo)) bool m_DebugRenderTargetSupportsStereo;

  /// @brief Field m_DebugScreenColorHandle, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugScreenColorHandle, put = __cordl_internal_set_m_DebugScreenColorHandle)) ::UnityEngine::Rendering::RTHandle* m_DebugScreenColorHandle;

  /// @brief Field m_DebugScreenDepthHandle, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugScreenDepthHandle, put = __cordl_internal_set_m_DebugScreenDepthHandle)) ::UnityEngine::Rendering::RTHandle* m_DebugScreenDepthHandle;

  /// @brief Field m_HDRDebugViewMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HDRDebugViewMaterial, put = __cordl_internal_set_m_HDRDebugViewMaterial)) ::UnityW<::UnityEngine::Material> m_HDRDebugViewMaterial;

  /// @brief Field m_HDRDebugViewPass, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HDRDebugViewPass, put = __cordl_internal_set_m_HDRDebugViewPass)) ::UnityEngine::Rendering::Universal::HDRDebugViewPass* m_HDRDebugViewPass;

  /// @brief Field m_HasDebugRenderTarget, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasDebugRenderTarget, put = __cordl_internal_set_m_HasDebugRenderTarget)) bool m_HasDebugRenderTarget;

  /// @brief Field m_ReplacementMaterial, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ReplacementMaterial, put = __cordl_internal_set_m_ReplacementMaterial)) ::UnityW<::UnityEngine::Material> m_ReplacementMaterial;

  /// @brief Field m_RuntimeTextures, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeTextures,
                      put = __cordl_internal_set_m_RuntimeTextures)) ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* m_RuntimeTextures;

  /// @brief Field m_debugDisplayConstant, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_debugDisplayConstant, put = __cordl_internal_set_m_debugDisplayConstant)) ::UnityEngine::GraphicsBuffer* m_debugDisplayConstant;

  /// @brief Field s_DebugFinalValidationPassData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_s_DebugFinalValidationPassData,
                      put = __cordl_internal_set_s_DebugFinalValidationPassData)) ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* s_DebugFinalValidationPassData;

  /// @brief Field s_DebugFinalValidationSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DebugFinalValidationSampler, put = setStaticF_s_DebugFinalValidationSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_DebugFinalValidationSampler;

  /// @brief Field s_DebugSetupPassData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_s_DebugSetupPassData,
                      put = __cordl_internal_set_s_DebugSetupPassData)) ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* s_DebugSetupPassData;

  /// @brief Field s_DebugSetupSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DebugSetupSampler, put = setStaticF_s_DebugSetupSampler)) ::UnityEngine::Rendering::ProfilingSampler* s_DebugSetupSampler;

  __declspec(property(get = get_stpDebugViewIndex)) int32_t stpDebugViewIndex;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  /// @brief Method ConfigureColorDescriptorForDebugScreen, addr 0x6695c18, size 0x1c, virtual false, abstract: false, final false
  static inline void ConfigureColorDescriptorForDebugScreen(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, int32_t cameraWidth, int32_t cameraHeight);

  /// @brief Method ConfigureDepthDescriptorForDebugScreen, addr 0x6695c34, size 0x1c, virtual false, abstract: false, final false
  static inline void ConfigureDepthDescriptorForDebugScreen(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                                            int32_t cameraWidth, int32_t cameraHeight);

  /// @brief Method CreateRendererListsWithDebugRenderState, addr 0x6697ab0, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugRendererLists* CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                                                          ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                          ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                          ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                          ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock);

  /// @brief Method CreateRendererListsWithDebugRenderState, addr 0x6698044, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugRendererLists* CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                          ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                                                                          ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings,
                                                                                                          ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                                                                          ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock);

  /// @brief Method Dispose, addr 0x6695adc, size 0xc0, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method HDRDebugViewIsActive, addr 0x6695694, size 0x30, virtual false, abstract: false, final false
  inline bool HDRDebugViewIsActive(bool resolveFinalTarget);

  /// @brief Method InitDebugFinalValidationPassData, addr 0x6696224, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*
  InitDebugFinalValidationPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* passData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                   bool isFinalPass);

  /// @brief Method InitDebugSetupPassData, addr 0x6697168, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* InitDebugSetupPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* passData,
                                                                                                      bool isPreviewCamera);

  /// @brief Method IsActiveForCamera, addr 0x6695b9c, size 0x28, virtual false, abstract: false, final false
  inline bool IsActiveForCamera(bool isPreviewCamera);

  static inline ::UnityEngine::Rendering::Universal::DebugHandler* New_ctor();

  /// @brief Method Render, addr 0x66979e4, size 0xcc, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle srcColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle overlayTexture,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dstColor);

  /// @brief Method ResetDebugRenderTarget, addr 0x669621c, size 0x8, virtual false, abstract: false, final false
  inline void ResetDebugRenderTarget();

  /// @brief Method SetDebugRenderTarget, addr 0x66961f8, size 0x24, virtual false, abstract: false, final false
  inline void SetDebugRenderTarget(::UnityEngine::Rendering::RTHandle* renderTarget, ::UnityEngine::Rect displayRect, bool supportsStereo, ::UnityEngine::Vector4 dataRangeRemap);

  /// @brief Method Setup, addr 0x66975e0, size 0x4, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::CommandBuffer* cmd, bool isPreviewCamera);

  /// @brief Method Setup, addr 0x66971d0, size 0x410, virtual false, abstract: false, final false
  static inline void Setup(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* passData);

  /// @brief Method Setup, addr 0x66975e4, size 0x400, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool isPreviewCamera);

  /// @brief Method SetupShaderProperties, addr 0x6695c50, size 0x5a8, virtual false, abstract: false, final false
  inline void SetupShaderProperties(::UnityEngine::Rendering::RasterCommandBuffer* cmd, int32_t passIndex);

  /// @brief Method TryGetFullscreenDebugMode, addr 0x6695bc4, size 0x18, virtual false, abstract: false, final false
  inline bool TryGetFullscreenDebugMode(::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode);

  /// @brief Method TryGetFullscreenDebugMode, addr 0x6695bdc, size 0x3c, virtual false, abstract: false, final false
  inline bool TryGetFullscreenDebugMode(::ByRef<::UnityEngine::Rendering::Universal::DebugFullScreenMode> debugFullScreenMode, ::ByRef<int32_t> textureHeightPercent);

  /// @brief Method TryGetScreenClearColor, addr 0x6695650, size 0x1c, virtual true, abstract: false, final true
  inline bool TryGetScreenClearColor(::ByRef<::UnityEngine::Color> color);

  /// @brief Method UpdateShaderGlobalPropertiesForFinalValidationPass, addr 0x669673c, size 0x1b0, virtual false, abstract: false, final false
  inline void UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isFinalPass);

  /// @brief Method UpdateShaderGlobalPropertiesForFinalValidationPass, addr 0x6696410, size 0x32c, virtual false, abstract: false, final false
  static inline void UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::RasterCommandBuffer* cmd,
                                                                        ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* data);

  /// @brief Method UpdateShaderGlobalPropertiesForFinalValidationPass, addr 0x66968ec, size 0x87c, virtual false, abstract: false, final false
  inline void UpdateShaderGlobalPropertiesForFinalValidationPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                 ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool isFinalPass);

  /// @brief Method WriteToDebugScreenTexture, addr 0x66956c4, size 0x4, virtual false, abstract: false, final false
  inline bool WriteToDebugScreenTexture(bool resolveFinalTarget);

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* const& __cordl_internal_get_m_DebugDisplaySettings() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings*& __cordl_internal_get_m_DebugDisplaySettings();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DebugFontTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DebugFontTexture();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DebugRenderTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DebugRenderTarget();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_DebugRenderTargetPixelRect() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_DebugRenderTargetPixelRect();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_DebugRenderTargetRangeRemap() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_DebugRenderTargetRangeRemap();

  constexpr bool const& __cordl_internal_get_m_DebugRenderTargetSupportsStereo() const;

  constexpr bool& __cordl_internal_get_m_DebugRenderTargetSupportsStereo();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DebugScreenColorHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DebugScreenColorHandle();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DebugScreenDepthHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DebugScreenDepthHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_HDRDebugViewMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_HDRDebugViewMaterial();

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass* const& __cordl_internal_get_m_HDRDebugViewPass() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRDebugViewPass*& __cordl_internal_get_m_HDRDebugViewPass();

  constexpr bool const& __cordl_internal_get_m_HasDebugRenderTarget() const;

  constexpr bool& __cordl_internal_get_m_HasDebugRenderTarget();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ReplacementMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ReplacementMaterial();

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* const& __cordl_internal_get_m_RuntimeTextures() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures*& __cordl_internal_get_m_RuntimeTextures();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_debugDisplayConstant() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_debugDisplayConstant();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* const& __cordl_internal_get_s_DebugFinalValidationPassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*& __cordl_internal_get_s_DebugFinalValidationPassData();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* const& __cordl_internal_get_s_DebugSetupPassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*& __cordl_internal_get_s_DebugSetupPassData();

  constexpr void __cordl_internal_set_m_DebugDisplaySettings(::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* value);

  constexpr void __cordl_internal_set_m_DebugFontTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DebugRenderTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetPixelRect(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetRangeRemap(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_DebugRenderTargetSupportsStereo(bool value);

  constexpr void __cordl_internal_set_m_DebugScreenColorHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DebugScreenDepthHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_HDRDebugViewMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_HDRDebugViewPass(::UnityEngine::Rendering::Universal::HDRDebugViewPass* value);

  constexpr void __cordl_internal_set_m_HasDebugRenderTarget(bool value);

  constexpr void __cordl_internal_set_m_ReplacementMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_RuntimeTextures(::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* value);

  constexpr void __cordl_internal_set_m_debugDisplayConstant(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_s_DebugFinalValidationPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* value);

  constexpr void __cordl_internal_set_s_DebugSetupPassData(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* value);

  /// @brief Method .ctor, addr 0x6695750, size 0x384, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_k_DebugColorInvalidModePropertyId();

  static inline int32_t getStaticF_k_DebugColorPropertyId();

  static inline int32_t getStaticF_k_DebugCurrentRealTimeId();

  static inline int32_t getStaticF_k_DebugFontId();

  static inline int32_t getStaticF_k_DebugFullScreenModeId();

  static inline int32_t getStaticF_k_DebugLightingFeatureFlagsId();

  static inline int32_t getStaticF_k_DebugLightingModeId();

  static inline int32_t getStaticF_k_DebugMaterialModeId();

  static inline int32_t getStaticF_k_DebugMaterialValidationModeId();

  static inline int32_t getStaticF_k_DebugMaxPixelCost();

  static inline int32_t getStaticF_k_DebugMipInfoModeId();

  static inline int32_t getStaticF_k_DebugMipMapOpacityId();

  static inline int32_t getStaticF_k_DebugMipMapRecentlyUpdatedCooldownId();

  static inline int32_t getStaticF_k_DebugMipMapShowStatusCodeId();

  static inline int32_t getStaticF_k_DebugMipMapStatusModeId();

  static inline int32_t getStaticF_k_DebugMipMapTerrainTextureModeId();

  static inline int32_t getStaticF_k_DebugRenderTargetRangeRemap();

  static inline int32_t getStaticF_k_DebugRenderTargetSupportsStereo();

  static inline int32_t getStaticF_k_DebugSceneOverrideModeId();

  static inline int32_t getStaticF_k_DebugTextureDisplayRect();

  static inline int32_t getStaticF_k_DebugTextureNoStereoPropertyId();

  static inline int32_t getStaticF_k_DebugTexturePropertyId();

  static inline int32_t getStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoCompareColorId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoHueToleranceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoMaxLuminanceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoMinLuminanceId();

  static inline int32_t getStaticF_k_DebugValidateAlbedoSaturationToleranceId();

  static inline int32_t getStaticF_k_DebugValidateBelowMinThresholdColorPropertyId();

  static inline int32_t getStaticF_k_DebugValidateMetallicMaxValueId();

  static inline int32_t getStaticF_k_DebugValidateMetallicMinValueId();

  static inline int32_t getStaticF_k_DebugValidationModeId();

  static inline int32_t getStaticF_k_DebugVertexAttributeModeId();

  static inline int32_t getStaticF_k_RangeMaximumId();

  static inline int32_t getStaticF_k_RangeMinimumId();

  static inline int32_t getStaticF_k_ValidationChannelsId();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_DebugFinalValidationSampler();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_s_DebugSetupSampler();

  /// @brief Method get_AreAnySettingsActive, addr 0x6695588, size 0x1c, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Method get_DebugDisplaySettings, addr 0x6695674, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* get_DebugDisplaySettings();

  /// @brief Method get_DebugScreenColorHandle, addr 0x669567c, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::RTHandle*> get_DebugScreenColorHandle();

  /// @brief Method get_DebugScreenDepthHandle, addr 0x6695684, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::RTHandle*> get_DebugScreenDepthHandle();

  /// @brief Method get_IsActiveModeUnsupportedForDeferred, addr 0x66955dc, size 0x74, virtual false, abstract: false, final false
  inline bool get_IsActiveModeUnsupportedForDeferred();

  /// @brief Method get_IsLightingActive, addr 0x66955c0, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsLightingActive();

  /// @brief Method get_IsPostProcessingAllowed, addr 0x66955a4, size 0x1c, virtual true, abstract: false, final true
  inline bool get_IsPostProcessingAllowed();

  /// @brief Method get_IsRenderPassSupported, addr 0x6695700, size 0x2c, virtual false, abstract: false, final false
  inline bool get_IsRenderPassSupported();

  /// @brief Method get_IsScreenClearNeeded, addr 0x66956c8, size 0x38, virtual false, abstract: false, final false
  inline bool get_IsScreenClearNeeded();

  /// @brief Method get_LightingSettings, addr 0x6695540, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings();

  /// @brief Method get_MaterialSettings, addr 0x6695558, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings();

  /// @brief Method get_RenderingSettings, addr 0x6695570, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings();

  /// @brief Method get_ReplacementMaterial, addr 0x669566c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_ReplacementMaterial();

  /// @brief Method get_hdrDebugViewPass, addr 0x669568c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::HDRDebugViewPass* get_hdrDebugViewPass();

  /// @brief Method get_stpDebugViewIndex, addr 0x669572c, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_stpDebugViewIndex();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

  static inline void setStaticF_k_DebugColorInvalidModePropertyId(int32_t value);

  static inline void setStaticF_k_DebugColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugCurrentRealTimeId(int32_t value);

  static inline void setStaticF_k_DebugFontId(int32_t value);

  static inline void setStaticF_k_DebugFullScreenModeId(int32_t value);

  static inline void setStaticF_k_DebugLightingFeatureFlagsId(int32_t value);

  static inline void setStaticF_k_DebugLightingModeId(int32_t value);

  static inline void setStaticF_k_DebugMaterialModeId(int32_t value);

  static inline void setStaticF_k_DebugMaterialValidationModeId(int32_t value);

  static inline void setStaticF_k_DebugMaxPixelCost(int32_t value);

  static inline void setStaticF_k_DebugMipInfoModeId(int32_t value);

  static inline void setStaticF_k_DebugMipMapOpacityId(int32_t value);

  static inline void setStaticF_k_DebugMipMapRecentlyUpdatedCooldownId(int32_t value);

  static inline void setStaticF_k_DebugMipMapShowStatusCodeId(int32_t value);

  static inline void setStaticF_k_DebugMipMapStatusModeId(int32_t value);

  static inline void setStaticF_k_DebugMipMapTerrainTextureModeId(int32_t value);

  static inline void setStaticF_k_DebugRenderTargetRangeRemap(int32_t value);

  static inline void setStaticF_k_DebugRenderTargetSupportsStereo(int32_t value);

  static inline void setStaticF_k_DebugSceneOverrideModeId(int32_t value);

  static inline void setStaticF_k_DebugTextureDisplayRect(int32_t value);

  static inline void setStaticF_k_DebugTextureNoStereoPropertyId(int32_t value);

  static inline void setStaticF_k_DebugTexturePropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateAboveMaxThresholdColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoCompareColorId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoHueToleranceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoMaxLuminanceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoMinLuminanceId(int32_t value);

  static inline void setStaticF_k_DebugValidateAlbedoSaturationToleranceId(int32_t value);

  static inline void setStaticF_k_DebugValidateBelowMinThresholdColorPropertyId(int32_t value);

  static inline void setStaticF_k_DebugValidateMetallicMaxValueId(int32_t value);

  static inline void setStaticF_k_DebugValidateMetallicMinValueId(int32_t value);

  static inline void setStaticF_k_DebugValidationModeId(int32_t value);

  static inline void setStaticF_k_DebugVertexAttributeModeId(int32_t value);

  static inline void setStaticF_k_RangeMaximumId(int32_t value);

  static inline void setStaticF_k_RangeMinimumId(int32_t value);

  static inline void setStaticF_k_ValidationChannelsId(int32_t value);

  static inline void setStaticF_s_DebugFinalValidationSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_DebugSetupSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugHandler(DebugHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugHandler(DebugHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12639 };

  /// @brief Field s_DebugSetupPassData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData* ___s_DebugSetupPassData;

  /// @brief Field s_DebugFinalValidationPassData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData* ___s_DebugFinalValidationPassData;

  /// @brief Field m_ReplacementMaterial, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ReplacementMaterial;

  /// @brief Field m_HDRDebugViewMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_HDRDebugViewMaterial;

  /// @brief Field m_HDRDebugViewPass, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::HDRDebugViewPass* ___m_HDRDebugViewPass;

  /// @brief Field m_DebugScreenColorHandle, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DebugScreenColorHandle;

  /// @brief Field m_DebugScreenDepthHandle, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DebugScreenDepthHandle;

  /// @brief Field m_RuntimeTextures, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineRuntimeTextures* ___m_RuntimeTextures;

  /// @brief Field m_HasDebugRenderTarget, offset: 0x50, size: 0x1, def value: None
  bool ___m_HasDebugRenderTarget;

  /// @brief Field m_DebugRenderTargetSupportsStereo, offset: 0x51, size: 0x1, def value: None
  bool ___m_DebugRenderTargetSupportsStereo;

  /// @brief Field m_DebugRenderTargetPixelRect, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_DebugRenderTargetPixelRect;

  /// @brief Field m_DebugRenderTargetRangeRemap, offset: 0x64, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_DebugRenderTargetRangeRemap;

  /// @brief Field m_DebugRenderTarget, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DebugRenderTarget;

  /// @brief Field m_DebugFontTexture, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DebugFontTexture;

  /// @brief Field m_debugDisplayConstant, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_debugDisplayConstant;

  /// @brief Field m_DebugDisplaySettings, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderPipelineDebugDisplaySettings* ___m_DebugDisplaySettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___s_DebugSetupPassData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___s_DebugFinalValidationPassData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_ReplacementMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_HDRDebugViewMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_HDRDebugViewPass) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugScreenColorHandle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugScreenDepthHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_RuntimeTextures) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_HasDebugRenderTarget) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetSupportsStereo) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetPixelRect) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTargetRangeRemap) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugRenderTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugFontTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_debugDisplayConstant) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugHandler, ___m_DebugDisplaySettings) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugHandler, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler*, "UnityEngine.Rendering.Universal", "DebugHandler");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler_DebugFinalValidationPassData*, "UnityEngine.Rendering.Universal", "DebugHandler/DebugFinalValidationPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler_DebugSetupPassData*, "UnityEngine.Rendering.Universal", "DebugHandler/DebugSetupPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugHandler___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugHandler___c*, "UnityEngine.Rendering.Universal", "DebugHandler/<>c");
