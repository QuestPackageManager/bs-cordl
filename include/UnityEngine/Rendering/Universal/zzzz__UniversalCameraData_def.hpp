#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalCameraData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__HDRColorBufferPrecision_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageScalingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ImageUpscalingFilter_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextItem_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingCriteria_def.hpp"
#include "UnityEngine/zzzz__CameraType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalCameraData)
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class StpHistory;
}
namespace UnityEngine::Rendering::Universal {
class TaaHistory;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraHistory;
}
namespace UnityEngine::Rendering::Universal {
class XRPassUniversal;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalCameraData);
// Dependencies UnityEngine.CameraType, UnityEngine.Color, UnityEngine.LayerMask, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.ContextItem,
// UnityEngine.Rendering.SortingCriteria, UnityEngine.Rendering.Universal.AntialiasingMode, UnityEngine.Rendering.Universal.AntialiasingQuality, UnityEngine.Rendering.Universal.CameraRenderType,
// UnityEngine.Rendering.Universal.HDRColorBufferPrecision, UnityEngine.Rendering.Universal.ImageScalingMode, UnityEngine.Rendering.Universal.ImageUpscalingFilter,
// UnityEngine.Rendering.Universal.TemporalAA::Settings, UnityEngine.Vector3, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalCameraData
class CORDL_TYPE UniversalCameraData : public ::UnityEngine::Rendering::ContextItem {
public:
  // Declarations
  /// @brief Field <xr>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__xr_k__BackingField, put = __cordl_internal_set__xr_k__BackingField)) ::UnityEngine::Experimental::Rendering::XRPass* _xr_k__BackingField;

  /// @brief Field allowHDROutput, offset 0x18e, size 0x1
  __declspec(property(get = __cordl_internal_get_allowHDROutput, put = __cordl_internal_set_allowHDROutput)) bool allowHDROutput;

  /// @brief Field antialiasing, offset 0x1cc, size 0x4
  __declspec(property(get = __cordl_internal_get_antialiasing, put = __cordl_internal_set_antialiasing)) ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing;

  /// @brief Field antialiasingQuality, offset 0x1d0, size 0x4
  __declspec(property(get = __cordl_internal_get_antialiasingQuality, put = __cordl_internal_set_antialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  /// @brief Field aspectRatio, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_aspectRatio, put = __cordl_internal_set_aspectRatio)) float_t aspectRatio;

  /// @brief Field backgroundColor, offset 0x1f0, size 0x10
  __declspec(property(get = __cordl_internal_get_backgroundColor, put = __cordl_internal_set_backgroundColor)) ::UnityEngine::Color backgroundColor;

  /// @brief Field baseCamera, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCamera, put = __cordl_internal_set_baseCamera)) ::UnityW<::UnityEngine::Camera> baseCamera;

  /// @brief Field camera, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field cameraTargetDescriptor, offset 0xf8, size 0x34
  __declspec(property(get = __cordl_internal_get_cameraTargetDescriptor, put = __cordl_internal_set_cameraTargetDescriptor)) ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor;

  /// @brief Field cameraType, offset 0x188, size 0x4
  __declspec(property(get = __cordl_internal_get_cameraType, put = __cordl_internal_set_cameraType)) ::UnityEngine::CameraType cameraType;

  /// @brief Field captureActions, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_captureActions, put = __cordl_internal_set_captureActions)) ::System::Collections::Generic::IEnumerator_1<
      ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* captureActions;

  /// @brief Field clearDepth, offset 0x184, size 0x1
  __declspec(property(get = __cordl_internal_get_clearDepth, put = __cordl_internal_set_clearDepth)) bool clearDepth;

  /// @brief Field defaultOpaqueSortFlags, offset 0x198, size 0x4
  __declspec(property(get = __cordl_internal_get_defaultOpaqueSortFlags, put = __cordl_internal_set_defaultOpaqueSortFlags)) ::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags;

  /// @brief Field fsrOverrideSharpness, offset 0x178, size 0x1
  __declspec(property(get = __cordl_internal_get_fsrOverrideSharpness, put = __cordl_internal_set_fsrOverrideSharpness)) bool fsrOverrideSharpness;

  /// @brief Field fsrSharpness, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_fsrSharpness, put = __cordl_internal_set_fsrSharpness)) float_t fsrSharpness;

  /// @brief Field hdrColorBufferPrecision, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_hdrColorBufferPrecision,
                      put = __cordl_internal_set_hdrColorBufferPrecision)) ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision hdrColorBufferPrecision;

  __declspec(property(get = get_hdrDisplayColorGamut)) ::UnityEngine::ColorGamut hdrDisplayColorGamut;

  __declspec(property(get = get_hdrDisplayInformation)) ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation;

  __declspec(property(get = get_historyManager, put = set_historyManager)) ::UnityEngine::Rendering::Universal::UniversalCameraHistory* historyManager;

  /// @brief Field imageScalingMode, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_imageScalingMode, put = __cordl_internal_set_imageScalingMode)) ::UnityEngine::Rendering::Universal::ImageScalingMode imageScalingMode;

  /// @brief Field isAlphaOutputEnabled, offset 0x18f, size 0x1
  __declspec(property(get = __cordl_internal_get_isAlphaOutputEnabled, put = __cordl_internal_set_isAlphaOutputEnabled)) bool isAlphaOutputEnabled;

  /// @brief Field isDefaultViewport, offset 0x18c, size 0x1
  __declspec(property(get = __cordl_internal_get_isDefaultViewport, put = __cordl_internal_set_isDefaultViewport)) bool isDefaultViewport;

  /// @brief Field isDitheringEnabled, offset 0x1c9, size 0x1
  __declspec(property(get = __cordl_internal_get_isDitheringEnabled, put = __cordl_internal_set_isDitheringEnabled)) bool isDitheringEnabled;

  __declspec(property(get = get_isGameCamera)) bool isGameCamera;

  __declspec(property(get = get_isHDROutputActive)) bool isHDROutputActive;

  /// @brief Field isHdrEnabled, offset 0x18d, size 0x1
  __declspec(property(get = __cordl_internal_get_isHdrEnabled, put = __cordl_internal_set_isHdrEnabled)) bool isHdrEnabled;

  __declspec(property(get = get_isPreviewCamera)) bool isPreviewCamera;

  __declspec(property(get = get_isRenderPassSupportedCamera)) bool isRenderPassSupportedCamera;

  __declspec(property(get = get_isSceneViewCamera)) bool isSceneViewCamera;

  /// @brief Field isStopNaNEnabled, offset 0x1c8, size 0x1
  __declspec(property(get = __cordl_internal_get_isStopNaNEnabled, put = __cordl_internal_set_isStopNaNEnabled)) bool isStopNaNEnabled;

  /// @brief Field m_CachedRenderIntoTextureXR, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CachedRenderIntoTextureXR, put = __cordl_internal_set_m_CachedRenderIntoTextureXR)) bool m_CachedRenderIntoTextureXR;

  /// @brief Field m_HistoryManager, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryManager, put = __cordl_internal_set_m_HistoryManager)) ::UnityEngine::Rendering::Universal::UniversalCameraHistory* m_HistoryManager;

  /// @brief Field m_InitBuiltinXRConstants, offset 0xd1, size 0x1
  __declspec(property(get = __cordl_internal_get_m_InitBuiltinXRConstants, put = __cordl_internal_set_m_InitBuiltinXRConstants)) bool m_InitBuiltinXRConstants;

  /// @brief Field m_JitterMatrix, offset 0x90, size 0x40
  __declspec(property(get = __cordl_internal_get_m_JitterMatrix, put = __cordl_internal_set_m_JitterMatrix)) ::UnityEngine::Matrix4x4 m_JitterMatrix;

  /// @brief Field m_ProjectionMatrix, offset 0x50, size 0x40
  __declspec(property(get = __cordl_internal_get_m_ProjectionMatrix, put = __cordl_internal_set_m_ProjectionMatrix)) ::UnityEngine::Matrix4x4 m_ProjectionMatrix;

  /// @brief Field m_ViewMatrix, offset 0x10, size 0x40
  __declspec(property(get = __cordl_internal_get_m_ViewMatrix, put = __cordl_internal_set_m_ViewMatrix)) ::UnityEngine::Matrix4x4 m_ViewMatrix;

  /// @brief Field maxShadowDistance, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxShadowDistance, put = __cordl_internal_set_maxShadowDistance)) float_t maxShadowDistance;

  /// @brief Field pixelHeight, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelHeight, put = __cordl_internal_set_pixelHeight)) int32_t pixelHeight;

  /// @brief Field pixelRect, offset 0x12c, size 0x10
  __declspec(property(get = __cordl_internal_get_pixelRect, put = __cordl_internal_set_pixelRect)) ::UnityEngine::Rect pixelRect;

  /// @brief Field pixelWidth, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelWidth, put = __cordl_internal_set_pixelWidth)) int32_t pixelWidth;

  /// @brief Field postProcessEnabled, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_postProcessEnabled, put = __cordl_internal_set_postProcessEnabled)) bool postProcessEnabled;

  /// @brief Field postProcessingRequiresDepthTexture, offset 0x192, size 0x1
  __declspec(property(get = __cordl_internal_get_postProcessingRequiresDepthTexture, put = __cordl_internal_set_postProcessingRequiresDepthTexture)) bool postProcessingRequiresDepthTexture;

  /// @brief Field renderScale, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_renderScale, put = __cordl_internal_set_renderScale)) float_t renderScale;

  /// @brief Field renderType, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_renderType, put = __cordl_internal_set_renderType)) ::UnityEngine::Rendering::Universal::CameraRenderType renderType;

  /// @brief Field renderer, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_renderer, put = __cordl_internal_set_renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;

  __declspec(property(get = get_rendersOverlayUI)) bool rendersOverlayUI;

  __declspec(property(get = get_requireSrgbConversion)) bool requireSrgbConversion;

  /// @brief Field requiresDepthTexture, offset 0x190, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresDepthTexture, put = __cordl_internal_set_requiresDepthTexture)) bool requiresDepthTexture;

  /// @brief Field requiresOpaqueTexture, offset 0x191, size 0x1
  __declspec(property(get = __cordl_internal_get_requiresOpaqueTexture, put = __cordl_internal_set_requiresOpaqueTexture)) bool requiresOpaqueTexture;

  __declspec(property(get = get_resetHistory)) bool resetHistory;

  /// @brief Field resolveFinalTarget, offset 0x1e0, size 0x1
  __declspec(property(get = __cordl_internal_get_resolveFinalTarget, put = __cordl_internal_set_resolveFinalTarget)) bool resolveFinalTarget;

  __declspec(property(get = get_resolveToScreen)) bool resolveToScreen;

  __declspec(property(get = get_scaledHeight)) int32_t scaledHeight;

  __declspec(property(get = get_scaledWidth)) int32_t scaledWidth;

  /// @brief Field screenCoordScaleBias, offset 0x150, size 0x10
  __declspec(property(get = __cordl_internal_get_screenCoordScaleBias, put = __cordl_internal_set_screenCoordScaleBias)) ::UnityEngine::Vector4 screenCoordScaleBias;

  /// @brief Field screenSizeOverride, offset 0x140, size 0x10
  __declspec(property(get = __cordl_internal_get_screenSizeOverride, put = __cordl_internal_set_screenSizeOverride)) ::UnityEngine::Vector4 screenSizeOverride;

  /// @brief Field stackAnyPostProcessingEnabled, offset 0x1ad, size 0x1
  __declspec(property(get = __cordl_internal_get_stackAnyPostProcessingEnabled, put = __cordl_internal_set_stackAnyPostProcessingEnabled)) bool stackAnyPostProcessingEnabled;

  /// @brief Field stackLastCameraOutputToHDR, offset 0x195, size 0x1
  __declspec(property(get = __cordl_internal_get_stackLastCameraOutputToHDR, put = __cordl_internal_set_stackLastCameraOutputToHDR)) bool stackLastCameraOutputToHDR;

  /// @brief Field stpHistory, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_stpHistory, put = __cordl_internal_set_stpHistory)) ::UnityEngine::Rendering::Universal::StpHistory* stpHistory;

  /// @brief Field taaHistory, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_taaHistory, put = __cordl_internal_set_taaHistory)) ::UnityEngine::Rendering::Universal::TaaHistory* taaHistory;

  /// @brief Field taaSettings, offset 0x210, size 0x20
  __declspec(property(get = __cordl_internal_get_taaSettings, put = __cordl_internal_set_taaSettings)) ::UnityEngine::Rendering::Universal::TemporalAA_Settings taaSettings;

  /// @brief Field targetTexture, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_targetTexture, put = __cordl_internal_set_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  /// @brief Field upscalingFilter, offset 0x174, size 0x4
  __declspec(property(get = __cordl_internal_get_upscalingFilter, put = __cordl_internal_set_upscalingFilter)) ::UnityEngine::Rendering::Universal::ImageUpscalingFilter upscalingFilter;

  /// @brief Field useGPUOcclusionCulling, offset 0x194, size 0x1
  __declspec(property(get = __cordl_internal_get_useGPUOcclusionCulling, put = __cordl_internal_set_useGPUOcclusionCulling)) bool useGPUOcclusionCulling;

  /// @brief Field useScreenCoordOverride, offset 0x13c, size 0x1
  __declspec(property(get = __cordl_internal_get_useScreenCoordOverride, put = __cordl_internal_set_useScreenCoordOverride)) bool useScreenCoordOverride;

  /// @brief Field volumeLayerMask, offset 0x1b8, size 0x4
  __declspec(property(get = __cordl_internal_get_volumeLayerMask, put = __cordl_internal_set_volumeLayerMask)) ::UnityEngine::LayerMask volumeLayerMask;

  /// @brief Field volumeTrigger, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_volumeTrigger, put = __cordl_internal_set_volumeTrigger)) ::UnityW<::UnityEngine::Transform> volumeTrigger;

  /// @brief Field worldSpaceCameraPos, offset 0x1e4, size 0xc
  __declspec(property(get = __cordl_internal_get_worldSpaceCameraPos, put = __cordl_internal_set_worldSpaceCameraPos)) ::UnityEngine::Vector3 worldSpaceCameraPos;

  __declspec(property(get = get_xr, put = set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  /// @brief Field xrRendering, offset 0x193, size 0x1
  __declspec(property(get = __cordl_internal_get_xrRendering, put = __cordl_internal_set_xrRendering)) bool xrRendering;

  __declspec(property(get = get_xrUniversal)) ::UnityEngine::Rendering::Universal::XRPassUniversal* xrUniversal;

  /// @brief Method GetGPUProjectionMatrix, addr 0x66bde2c, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(bool renderIntoTexture, int32_t viewIndex);

  /// @brief Method GetGPUProjectionMatrix, addr 0x66bdbe0, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetGPUProjectionMatrixNoJitter, addr 0x66bdda0, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrixNoJitter(int32_t viewIndex);

  /// @brief Method GetProjectionMatrix, addr 0x66bd9ec, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetProjectionMatrixNoJitter, addr 0x66bdb64, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjectionMatrixNoJitter(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x66bdae8, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method IsCameraProjectionMatrixFlipped, addr 0x66bdcb0, size 0xf0, virtual false, abstract: false, final false
  inline bool IsCameraProjectionMatrixFlipped();

  /// @brief Method IsHandleYFlipped, addr 0x66be4a8, size 0xf4, virtual false, abstract: false, final false
  inline bool IsHandleYFlipped(::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method IsRenderTargetProjectionMatrixFlipped, addr 0x66be59c, size 0xc0, virtual false, abstract: false, final false
  inline bool IsRenderTargetProjectionMatrixFlipped(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth);

  /// @brief Method IsSTPEnabled, addr 0x66be794, size 0x24, virtual false, abstract: false, final false
  inline bool IsSTPEnabled();

  /// @brief Method IsSTPRequested, addr 0x66be770, size 0x24, virtual false, abstract: false, final false
  inline bool IsSTPRequested();

  /// @brief Method IsTemporalAAEnabled, addr 0x66be66c, size 0x104, virtual false, abstract: false, final false
  inline bool IsTemporalAAEnabled();

  /// @brief Method IsTemporalAARequested, addr 0x66be65c, size 0x10, virtual false, abstract: false, final false
  inline bool IsTemporalAARequested();

  static inline ::UnityEngine::Rendering::Universal::UniversalCameraData* New_ctor();

  /// @brief Method PushBuiltinShaderConstantsXR, addr 0x66bd724, size 0x2c8, virtual false, abstract: false, final false
  inline void PushBuiltinShaderConstantsXR(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method Reset, addr 0x66be7d8, size 0xbc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetViewAndProjectionMatrix, addr 0x66bd674, size 0x7c, virtual false, abstract: false, final false
  inline void SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method SetViewProjectionAndJitterMatrix, addr 0x66bd6f0, size 0x34, virtual false, abstract: false, final false
  inline void SetViewProjectionAndJitterMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 jitterMatrix);

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get__xr_k__BackingField() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get__xr_k__BackingField();

  constexpr bool const& __cordl_internal_get_allowHDROutput() const;

  constexpr bool& __cordl_internal_get_allowHDROutput();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode const& __cordl_internal_get_antialiasing() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode& __cordl_internal_get_antialiasing();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& __cordl_internal_get_antialiasingQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& __cordl_internal_get_antialiasingQuality();

  constexpr float_t const& __cordl_internal_get_aspectRatio() const;

  constexpr float_t& __cordl_internal_get_aspectRatio();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_backgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_backgroundColor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_baseCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_baseCamera();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_cameraTargetDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_cameraTargetDescriptor();

  constexpr ::UnityEngine::CameraType const& __cordl_internal_get_cameraType() const;

  constexpr ::UnityEngine::CameraType& __cordl_internal_get_cameraType();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
  __cordl_internal_get_captureActions() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
  __cordl_internal_get_captureActions();

  constexpr bool const& __cordl_internal_get_clearDepth() const;

  constexpr bool& __cordl_internal_get_clearDepth();

  constexpr ::UnityEngine::Rendering::SortingCriteria const& __cordl_internal_get_defaultOpaqueSortFlags() const;

  constexpr ::UnityEngine::Rendering::SortingCriteria& __cordl_internal_get_defaultOpaqueSortFlags();

  constexpr bool const& __cordl_internal_get_fsrOverrideSharpness() const;

  constexpr bool& __cordl_internal_get_fsrOverrideSharpness();

  constexpr float_t const& __cordl_internal_get_fsrSharpness() const;

  constexpr float_t& __cordl_internal_get_fsrSharpness();

  constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision const& __cordl_internal_get_hdrColorBufferPrecision() const;

  constexpr ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision& __cordl_internal_get_hdrColorBufferPrecision();

  constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode const& __cordl_internal_get_imageScalingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::ImageScalingMode& __cordl_internal_get_imageScalingMode();

  constexpr bool const& __cordl_internal_get_isAlphaOutputEnabled() const;

  constexpr bool& __cordl_internal_get_isAlphaOutputEnabled();

  constexpr bool const& __cordl_internal_get_isDefaultViewport() const;

  constexpr bool& __cordl_internal_get_isDefaultViewport();

  constexpr bool const& __cordl_internal_get_isDitheringEnabled() const;

  constexpr bool& __cordl_internal_get_isDitheringEnabled();

  constexpr bool const& __cordl_internal_get_isHdrEnabled() const;

  constexpr bool& __cordl_internal_get_isHdrEnabled();

  constexpr bool const& __cordl_internal_get_isStopNaNEnabled() const;

  constexpr bool& __cordl_internal_get_isStopNaNEnabled();

  constexpr bool const& __cordl_internal_get_m_CachedRenderIntoTextureXR() const;

  constexpr bool& __cordl_internal_get_m_CachedRenderIntoTextureXR();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory* const& __cordl_internal_get_m_HistoryManager() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory*& __cordl_internal_get_m_HistoryManager();

  constexpr bool const& __cordl_internal_get_m_InitBuiltinXRConstants() const;

  constexpr bool& __cordl_internal_get_m_InitBuiltinXRConstants();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_JitterMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_JitterMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_ProjectionMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_ProjectionMatrix();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_ViewMatrix() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_ViewMatrix();

  constexpr float_t const& __cordl_internal_get_maxShadowDistance() const;

  constexpr float_t& __cordl_internal_get_maxShadowDistance();

  constexpr int32_t const& __cordl_internal_get_pixelHeight() const;

  constexpr int32_t& __cordl_internal_get_pixelHeight();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_pixelRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_pixelRect();

  constexpr int32_t const& __cordl_internal_get_pixelWidth() const;

  constexpr int32_t& __cordl_internal_get_pixelWidth();

  constexpr bool const& __cordl_internal_get_postProcessEnabled() const;

  constexpr bool& __cordl_internal_get_postProcessEnabled();

  constexpr bool const& __cordl_internal_get_postProcessingRequiresDepthTexture() const;

  constexpr bool& __cordl_internal_get_postProcessingRequiresDepthTexture();

  constexpr float_t const& __cordl_internal_get_renderScale() const;

  constexpr float_t& __cordl_internal_get_renderScale();

  constexpr ::UnityEngine::Rendering::Universal::CameraRenderType const& __cordl_internal_get_renderType() const;

  constexpr ::UnityEngine::Rendering::Universal::CameraRenderType& __cordl_internal_get_renderType();

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& __cordl_internal_get_renderer() const;

  constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& __cordl_internal_get_renderer();

  constexpr bool const& __cordl_internal_get_requiresDepthTexture() const;

  constexpr bool& __cordl_internal_get_requiresDepthTexture();

  constexpr bool const& __cordl_internal_get_requiresOpaqueTexture() const;

  constexpr bool& __cordl_internal_get_requiresOpaqueTexture();

  constexpr bool const& __cordl_internal_get_resolveFinalTarget() const;

  constexpr bool& __cordl_internal_get_resolveFinalTarget();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_screenCoordScaleBias() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_screenCoordScaleBias();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_screenSizeOverride() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_screenSizeOverride();

  constexpr bool const& __cordl_internal_get_stackAnyPostProcessingEnabled() const;

  constexpr bool& __cordl_internal_get_stackAnyPostProcessingEnabled();

  constexpr bool const& __cordl_internal_get_stackLastCameraOutputToHDR() const;

  constexpr bool& __cordl_internal_get_stackLastCameraOutputToHDR();

  constexpr ::UnityEngine::Rendering::Universal::StpHistory* const& __cordl_internal_get_stpHistory() const;

  constexpr ::UnityEngine::Rendering::Universal::StpHistory*& __cordl_internal_get_stpHistory();

  constexpr ::UnityEngine::Rendering::Universal::TaaHistory* const& __cordl_internal_get_taaHistory() const;

  constexpr ::UnityEngine::Rendering::Universal::TaaHistory*& __cordl_internal_get_taaHistory();

  constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings const& __cordl_internal_get_taaSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings& __cordl_internal_get_taaSettings();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_targetTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_targetTexture();

  constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter const& __cordl_internal_get_upscalingFilter() const;

  constexpr ::UnityEngine::Rendering::Universal::ImageUpscalingFilter& __cordl_internal_get_upscalingFilter();

  constexpr bool const& __cordl_internal_get_useGPUOcclusionCulling() const;

  constexpr bool& __cordl_internal_get_useGPUOcclusionCulling();

  constexpr bool const& __cordl_internal_get_useScreenCoordOverride() const;

  constexpr bool& __cordl_internal_get_useScreenCoordOverride();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_volumeLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_volumeLayerMask();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_volumeTrigger() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_volumeTrigger();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_worldSpaceCameraPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_worldSpaceCameraPos();

  constexpr bool const& __cordl_internal_get_xrRendering() const;

  constexpr bool& __cordl_internal_get_xrRendering();

  constexpr void __cordl_internal_set__xr_k__BackingField(::UnityEngine::Experimental::Rendering::XRPass* value);

  constexpr void __cordl_internal_set_allowHDROutput(bool value);

  constexpr void __cordl_internal_set_antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value);

  constexpr void __cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value);

  constexpr void __cordl_internal_set_aspectRatio(float_t value);

  constexpr void __cordl_internal_set_backgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_baseCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_cameraTargetDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_cameraType(::UnityEngine::CameraType value);

  constexpr void __cordl_internal_set_captureActions(
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value);

  constexpr void __cordl_internal_set_clearDepth(bool value);

  constexpr void __cordl_internal_set_defaultOpaqueSortFlags(::UnityEngine::Rendering::SortingCriteria value);

  constexpr void __cordl_internal_set_fsrOverrideSharpness(bool value);

  constexpr void __cordl_internal_set_fsrSharpness(float_t value);

  constexpr void __cordl_internal_set_hdrColorBufferPrecision(::UnityEngine::Rendering::Universal::HDRColorBufferPrecision value);

  constexpr void __cordl_internal_set_imageScalingMode(::UnityEngine::Rendering::Universal::ImageScalingMode value);

  constexpr void __cordl_internal_set_isAlphaOutputEnabled(bool value);

  constexpr void __cordl_internal_set_isDefaultViewport(bool value);

  constexpr void __cordl_internal_set_isDitheringEnabled(bool value);

  constexpr void __cordl_internal_set_isHdrEnabled(bool value);

  constexpr void __cordl_internal_set_isStopNaNEnabled(bool value);

  constexpr void __cordl_internal_set_m_CachedRenderIntoTextureXR(bool value);

  constexpr void __cordl_internal_set_m_HistoryManager(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value);

  constexpr void __cordl_internal_set_m_InitBuiltinXRConstants(bool value);

  constexpr void __cordl_internal_set_m_JitterMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_ProjectionMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_ViewMatrix(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_maxShadowDistance(float_t value);

  constexpr void __cordl_internal_set_pixelHeight(int32_t value);

  constexpr void __cordl_internal_set_pixelRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_pixelWidth(int32_t value);

  constexpr void __cordl_internal_set_postProcessEnabled(bool value);

  constexpr void __cordl_internal_set_postProcessingRequiresDepthTexture(bool value);

  constexpr void __cordl_internal_set_renderScale(float_t value);

  constexpr void __cordl_internal_set_renderType(::UnityEngine::Rendering::Universal::CameraRenderType value);

  constexpr void __cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer* value);

  constexpr void __cordl_internal_set_requiresDepthTexture(bool value);

  constexpr void __cordl_internal_set_requiresOpaqueTexture(bool value);

  constexpr void __cordl_internal_set_resolveFinalTarget(bool value);

  constexpr void __cordl_internal_set_screenCoordScaleBias(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_screenSizeOverride(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_stackAnyPostProcessingEnabled(bool value);

  constexpr void __cordl_internal_set_stackLastCameraOutputToHDR(bool value);

  constexpr void __cordl_internal_set_stpHistory(::UnityEngine::Rendering::Universal::StpHistory* value);

  constexpr void __cordl_internal_set_taaHistory(::UnityEngine::Rendering::Universal::TaaHistory* value);

  constexpr void __cordl_internal_set_taaSettings(::UnityEngine::Rendering::Universal::TemporalAA_Settings value);

  constexpr void __cordl_internal_set_targetTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_upscalingFilter(::UnityEngine::Rendering::Universal::ImageUpscalingFilter value);

  constexpr void __cordl_internal_set_useGPUOcclusionCulling(bool value);

  constexpr void __cordl_internal_set_useScreenCoordOverride(bool value);

  constexpr void __cordl_internal_set_volumeLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_volumeTrigger(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_worldSpaceCameraPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_xrRendering(bool value);

  /// @brief Method .ctor, addr 0x66be894, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_hdrDisplayColorGamut, addr 0x66be394, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorGamut get_hdrDisplayColorGamut();

  /// @brief Method get_hdrDisplayInformation, addr 0x66be2b0, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation get_hdrDisplayInformation();

  /// @brief Method get_historyManager, addr 0x66bdf8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* get_historyManager();

  /// @brief Method get_isGameCamera, addr 0x66be10c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isGameCamera();

  /// @brief Method get_isHDROutputActive, addr 0x66be1fc, size 0xb4, virtual false, abstract: false, final false
  inline bool get_isHDROutputActive();

  /// @brief Method get_isPreviewCamera, addr 0x66be12c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPreviewCamera();

  /// @brief Method get_isRenderPassSupportedCamera, addr 0x66be13c, size 0x14, virtual false, abstract: false, final false
  inline bool get_isRenderPassSupportedCamera();

  /// @brief Method get_isSceneViewCamera, addr 0x66be11c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isSceneViewCamera();

  /// @brief Method get_rendersOverlayUI, addr 0x66be428, size 0x80, virtual false, abstract: false, final false
  inline bool get_rendersOverlayUI();

  /// @brief Method get_requireSrgbConversion, addr 0x66bdf9c, size 0x170, virtual false, abstract: false, final false
  inline bool get_requireSrgbConversion();

  /// @brief Method get_resetHistory, addr 0x66be7c8, size 0x10, virtual false, abstract: false, final false
  inline bool get_resetHistory();

  /// @brief Method get_resolveToScreen, addr 0x66be150, size 0xac, virtual false, abstract: false, final false
  inline bool get_resolveToScreen();

  /// @brief Method get_scaledHeight, addr 0x66bdf40, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_scaledHeight();

  /// @brief Method get_scaledWidth, addr 0x66bdef4, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_scaledWidth();

  /// @brief Method get_xr, addr 0x66be7b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::XRPass* get_xr();

  /// @brief Method get_xrUniversal, addr 0x66bb784, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::XRPassUniversal* get_xrUniversal();

  /// @brief Method set_historyManager, addr 0x66bdf94, size 0x8, virtual false, abstract: false, final false
  inline void set_historyManager(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value);

  /// @brief Method set_xr, addr 0x66be7c0, size 0x8, virtual false, abstract: false, final false
  inline void set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalCameraData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalCameraData(UniversalCameraData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalCameraData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalCameraData(UniversalCameraData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12727 };

  /// @brief Field m_ViewMatrix, offset: 0x10, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_ViewMatrix;

  /// @brief Field m_ProjectionMatrix, offset: 0x50, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_ProjectionMatrix;

  /// @brief Field m_JitterMatrix, offset: 0x90, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_JitterMatrix;

  /// @brief Field m_CachedRenderIntoTextureXR, offset: 0xd0, size: 0x1, def value: None
  bool ___m_CachedRenderIntoTextureXR;

  /// @brief Field m_InitBuiltinXRConstants, offset: 0xd1, size: 0x1, def value: None
  bool ___m_InitBuiltinXRConstants;

  /// @brief Field camera, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field m_HistoryManager, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraHistory* ___m_HistoryManager;

  /// @brief Field renderType, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CameraRenderType ___renderType;

  /// @brief Field targetTexture, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___targetTexture;

  /// @brief Field cameraTargetDescriptor, offset: 0xf8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___cameraTargetDescriptor;

  /// @brief Field pixelRect, offset: 0x12c, size: 0x10, def value: None
  ::UnityEngine::Rect ___pixelRect;

  /// @brief Field useScreenCoordOverride, offset: 0x13c, size: 0x1, def value: None
  bool ___useScreenCoordOverride;

  /// @brief Field screenSizeOverride, offset: 0x140, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___screenSizeOverride;

  /// @brief Field screenCoordScaleBias, offset: 0x150, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___screenCoordScaleBias;

  /// @brief Field pixelWidth, offset: 0x160, size: 0x4, def value: None
  int32_t ___pixelWidth;

  /// @brief Field pixelHeight, offset: 0x164, size: 0x4, def value: None
  int32_t ___pixelHeight;

  /// @brief Field aspectRatio, offset: 0x168, size: 0x4, def value: None
  float_t ___aspectRatio;

  /// @brief Field renderScale, offset: 0x16c, size: 0x4, def value: None
  float_t ___renderScale;

  /// @brief Field imageScalingMode, offset: 0x170, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ImageScalingMode ___imageScalingMode;

  /// @brief Field upscalingFilter, offset: 0x174, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::ImageUpscalingFilter ___upscalingFilter;

  /// @brief Field fsrOverrideSharpness, offset: 0x178, size: 0x1, def value: None
  bool ___fsrOverrideSharpness;

  /// @brief Field fsrSharpness, offset: 0x17c, size: 0x4, def value: None
  float_t ___fsrSharpness;

  /// @brief Field hdrColorBufferPrecision, offset: 0x180, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision ___hdrColorBufferPrecision;

  /// @brief Field clearDepth, offset: 0x184, size: 0x1, def value: None
  bool ___clearDepth;

  /// @brief Field cameraType, offset: 0x188, size: 0x4, def value: None
  ::UnityEngine::CameraType ___cameraType;

  /// @brief Field isDefaultViewport, offset: 0x18c, size: 0x1, def value: None
  bool ___isDefaultViewport;

  /// @brief Field isHdrEnabled, offset: 0x18d, size: 0x1, def value: None
  bool ___isHdrEnabled;

  /// @brief Field allowHDROutput, offset: 0x18e, size: 0x1, def value: None
  bool ___allowHDROutput;

  /// @brief Field isAlphaOutputEnabled, offset: 0x18f, size: 0x1, def value: None
  bool ___isAlphaOutputEnabled;

  /// @brief Field requiresDepthTexture, offset: 0x190, size: 0x1, def value: None
  bool ___requiresDepthTexture;

  /// @brief Field requiresOpaqueTexture, offset: 0x191, size: 0x1, def value: None
  bool ___requiresOpaqueTexture;

  /// @brief Field postProcessingRequiresDepthTexture, offset: 0x192, size: 0x1, def value: None
  bool ___postProcessingRequiresDepthTexture;

  /// @brief Field xrRendering, offset: 0x193, size: 0x1, def value: None
  bool ___xrRendering;

  /// @brief Field useGPUOcclusionCulling, offset: 0x194, size: 0x1, def value: None
  bool ___useGPUOcclusionCulling;

  /// @brief Field stackLastCameraOutputToHDR, offset: 0x195, size: 0x1, def value: None
  bool ___stackLastCameraOutputToHDR;

  /// @brief Field defaultOpaqueSortFlags, offset: 0x198, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingCriteria ___defaultOpaqueSortFlags;

  /// @brief Field <xr>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ____xr_k__BackingField;

  /// @brief Field maxShadowDistance, offset: 0x1a8, size: 0x4, def value: None
  float_t ___maxShadowDistance;

  /// @brief Field postProcessEnabled, offset: 0x1ac, size: 0x1, def value: None
  bool ___postProcessEnabled;

  /// @brief Field stackAnyPostProcessingEnabled, offset: 0x1ad, size: 0x1, def value: None
  bool ___stackAnyPostProcessingEnabled;

  /// @brief Field captureActions, offset: 0x1b0, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* ___captureActions;

  /// @brief Field volumeLayerMask, offset: 0x1b8, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___volumeLayerMask;

  /// @brief Field volumeTrigger, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___volumeTrigger;

  /// @brief Field isStopNaNEnabled, offset: 0x1c8, size: 0x1, def value: None
  bool ___isStopNaNEnabled;

  /// @brief Field isDitheringEnabled, offset: 0x1c9, size: 0x1, def value: None
  bool ___isDitheringEnabled;

  /// @brief Field antialiasing, offset: 0x1cc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingMode ___antialiasing;

  /// @brief Field antialiasingQuality, offset: 0x1d0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingQuality ___antialiasingQuality;

  /// @brief Field renderer, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScriptableRenderer* ___renderer;

  /// @brief Field resolveFinalTarget, offset: 0x1e0, size: 0x1, def value: None
  bool ___resolveFinalTarget;

  /// @brief Field worldSpaceCameraPos, offset: 0x1e4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___worldSpaceCameraPos;

  /// @brief Field backgroundColor, offset: 0x1f0, size: 0x10, def value: None
  ::UnityEngine::Color ___backgroundColor;

  /// @brief Field taaHistory, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TaaHistory* ___taaHistory;

  /// @brief Field stpHistory, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StpHistory* ___stpHistory;

  /// @brief Field taaSettings, offset: 0x210, size: 0x20, def value: None
  ::UnityEngine::Rendering::Universal::TemporalAA_Settings ___taaSettings;

  /// @brief Field baseCamera, offset: 0x230, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___baseCamera;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_ViewMatrix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_ProjectionMatrix) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_JitterMatrix) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_CachedRenderIntoTextureXR) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_InitBuiltinXRConstants) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___camera) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___m_HistoryManager) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___renderType) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___targetTexture) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___cameraTargetDescriptor) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___pixelRect) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___useScreenCoordOverride) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___screenSizeOverride) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___screenCoordScaleBias) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___pixelWidth) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___pixelHeight) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___aspectRatio) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___renderScale) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___imageScalingMode) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___upscalingFilter) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___fsrOverrideSharpness) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___fsrSharpness) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___hdrColorBufferPrecision) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___clearDepth) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___cameraType) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___isDefaultViewport) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___isHdrEnabled) == 0x18d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___allowHDROutput) == 0x18e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___isAlphaOutputEnabled) == 0x18f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___requiresDepthTexture) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___requiresOpaqueTexture) == 0x191, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___postProcessingRequiresDepthTexture) == 0x192, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___xrRendering) == 0x193, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___useGPUOcclusionCulling) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___stackLastCameraOutputToHDR) == 0x195, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___defaultOpaqueSortFlags) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ____xr_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___maxShadowDistance) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___postProcessEnabled) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___stackAnyPostProcessingEnabled) == 0x1ad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___captureActions) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___volumeLayerMask) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___volumeTrigger) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___isStopNaNEnabled) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___isDitheringEnabled) == 0x1c9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___antialiasing) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___antialiasingQuality) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___renderer) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___resolveFinalTarget) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___worldSpaceCameraPos) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___backgroundColor) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___taaHistory) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___stpHistory) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___taaSettings) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalCameraData, ___baseCamera) == 0x230, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalCameraData, 0x238>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalCameraData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalCameraData*, "UnityEngine.Rendering.Universal", "UniversalCameraData");
