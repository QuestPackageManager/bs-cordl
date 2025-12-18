#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/CameraData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraData)
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
struct AntialiasingMode;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingQuality;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
struct HDRColorBufferPrecision;
}
namespace UnityEngine::Rendering::Universal {
struct ImageScalingMode;
}
namespace UnityEngine::Rendering::Universal {
struct ImageUpscalingFilter;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class TaaHistory;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAA_Settings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
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
class ContextContainer;
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
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
struct CameraType;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::CameraData);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.CameraData
struct CORDL_TYPE CameraData {
public:
  // Declarations
  __declspec(property(get = get_allowHDROutput)) bool allowHDROutput;

  __declspec(property(get = get_antialiasing)) ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing;

  __declspec(property(get = get_antialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  __declspec(property(get = get_aspectRatio)) float_t aspectRatio;

  __declspec(property(get = get_backgroundColor)) ::UnityEngine::Color backgroundColor;

  __declspec(property(get = get_baseCamera)) ::UnityW<::UnityEngine::Camera> baseCamera;

  __declspec(property(get = get_camera)) ::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(get = get_cameraTargetDescriptor)) ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor;

  __declspec(property(get = get_cameraType)) ::UnityEngine::CameraType cameraType;

  __declspec(property(
      get = get_captureActions)) ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
      captureActions;

  __declspec(property(get = get_clearDepth)) bool clearDepth;

  __declspec(property(get = get_defaultOpaqueSortFlags)) ::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags;

  __declspec(property(get = get_fsrOverrideSharpness)) bool fsrOverrideSharpness;

  __declspec(property(get = get_fsrSharpness)) float_t fsrSharpness;

  __declspec(property(get = get_hdrColorBufferPrecision)) ::UnityEngine::Rendering::Universal::HDRColorBufferPrecision hdrColorBufferPrecision;

  __declspec(property(get = get_hdrDisplayColorGamut)) ::UnityEngine::ColorGamut hdrDisplayColorGamut;

  __declspec(property(get = get_hdrDisplayInformation)) ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation;

  __declspec(property(get = get_historyManager)) ::UnityEngine::Rendering::Universal::UniversalCameraHistory* historyManager;

  __declspec(property(get = get_imageScalingMode)) ::UnityEngine::Rendering::Universal::ImageScalingMode imageScalingMode;

  __declspec(property(get = get_isAlphaOutputEnabled)) bool isAlphaOutputEnabled;

  __declspec(property(get = get_isDefaultViewport)) bool isDefaultViewport;

  __declspec(property(get = get_isDitheringEnabled)) bool isDitheringEnabled;

  __declspec(property(get = get_isHDROutputActive)) bool isHDROutputActive;

  __declspec(property(get = get_isHdrEnabled)) bool isHdrEnabled;

  __declspec(property(get = get_isPreviewCamera)) bool isPreviewCamera;

  __declspec(property(get = get_isRenderPassSupportedCamera)) bool isRenderPassSupportedCamera;

  __declspec(property(get = get_isSceneViewCamera)) bool isSceneViewCamera;

  __declspec(property(get = get_isStopNaNEnabled)) bool isStopNaNEnabled;

  __declspec(property(get = get_maxShadowDistance)) float_t maxShadowDistance;

  __declspec(property(get = get_pixelHeight)) int32_t pixelHeight;

  __declspec(property(get = get_pixelRect)) ::UnityEngine::Rect pixelRect;

  __declspec(property(get = get_pixelWidth)) int32_t pixelWidth;

  __declspec(property(get = get_postProcessEnabled)) bool postProcessEnabled;

  __declspec(property(get = get_postProcessingRequiresDepthTexture)) bool postProcessingRequiresDepthTexture;

  __declspec(property(get = get_renderScale)) float_t renderScale;

  __declspec(property(get = get_renderType)) ::UnityEngine::Rendering::Universal::CameraRenderType renderType;

  __declspec(property(get = get_renderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer;

  __declspec(property(get = get_rendersOverlayUI)) bool rendersOverlayUI;

  __declspec(property(get = get_requireSrgbConversion)) bool requireSrgbConversion;

  __declspec(property(get = get_requiresDepthTexture)) bool requiresDepthTexture;

  __declspec(property(get = get_requiresOpaqueTexture)) bool requiresOpaqueTexture;

  __declspec(property(get = get_resetHistory)) bool resetHistory;

  __declspec(property(get = get_resolveFinalTarget)) bool resolveFinalTarget;

  __declspec(property(get = get_resolveToScreen)) bool resolveToScreen;

  __declspec(property(get = get_screenCoordScaleBias)) ::UnityEngine::Vector4 screenCoordScaleBias;

  __declspec(property(get = get_screenSizeOverride)) ::UnityEngine::Vector4 screenSizeOverride;

  __declspec(property(get = get_taaHistory)) ::UnityEngine::Rendering::Universal::TaaHistory* taaHistory;

  __declspec(property(get = get_taaSettings)) ::UnityEngine::Rendering::Universal::TemporalAA_Settings taaSettings;

  __declspec(property(get = get_targetTexture)) ::UnityW<::UnityEngine::RenderTexture> targetTexture;

  __declspec(property(get = get_universalCameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* universalCameraData;

  __declspec(property(get = get_upscalingFilter)) ::UnityEngine::Rendering::Universal::ImageUpscalingFilter upscalingFilter;

  __declspec(property(get = get_useScreenCoordOverride)) bool useScreenCoordOverride;

  __declspec(property(get = get_volumeLayerMask)) ::UnityEngine::LayerMask volumeLayerMask;

  __declspec(property(get = get_volumeTrigger)) ::UnityW<::UnityEngine::Transform> volumeTrigger;

  __declspec(property(get = get_worldSpaceCameraPos)) ::UnityEngine::Vector3 worldSpaceCameraPos;

  __declspec(property(get = get_xr, put = set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  __declspec(property(get = get_xrRendering)) bool xrRendering;

  __declspec(property(get = get_xrUniversal)) ::UnityEngine::Rendering::Universal::XRPassUniversal* xrUniversal;

  /// @brief Method GetGPUProjectionMatrix, addr 0x672bda4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(bool renderIntoTexture, int32_t viewIndex);

  /// @brief Method GetGPUProjectionMatrix, addr 0x672bc7c, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetGPUProjectionMatrixNoJitter, addr 0x672bd10, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetGPUProjectionMatrixNoJitter(int32_t viewIndex);

  /// @brief Method GetProjectionMatrix, addr 0x672bb54, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjectionMatrix(int32_t viewIndex);

  /// @brief Method GetProjectionMatrixNoJitter, addr 0x672bbe8, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjectionMatrixNoJitter(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x672bac0, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method IsCameraProjectionMatrixFlipped, addr 0x672ccb4, size 0x60, virtual false, abstract: false, final false
  inline bool IsCameraProjectionMatrixFlipped();

  /// @brief Method IsHandleYFlipped, addr 0x672cc44, size 0x70, virtual false, abstract: false, final false
  inline bool IsHandleYFlipped(::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method IsRenderTargetProjectionMatrixFlipped, addr 0x672cd14, size 0x78, virtual false, abstract: false, final false
  inline bool IsRenderTargetProjectionMatrixFlipped(::UnityEngine::Rendering::RTHandle* color, ::UnityEngine::Rendering::RTHandle* depth);

  /// @brief Method IsTemporalAAEnabled, addr 0x672cd8c, size 0x60, virtual false, abstract: false, final false
  inline bool IsTemporalAAEnabled();

  /// @brief Method PushBuiltinShaderConstantsXR, addr 0x672ba48, size 0x78, virtual false, abstract: false, final false
  inline void PushBuiltinShaderConstantsXR(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method SetViewAndProjectionMatrix, addr 0x672b894, size 0xe4, virtual false, abstract: false, final false
  inline void SetViewAndProjectionMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method SetViewProjectionAndJitterMatrix, addr 0x672b978, size 0xd0, virtual false, abstract: false, final false
  inline void SetViewProjectionAndJitterMatrix(::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, ::UnityEngine::Matrix4x4 jitterMatrix);

  /// @brief Method .ctor, addr 0x672b838, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method get_allowHDROutput, addr 0x672c688, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_allowHDROutput();

  /// @brief Method get_antialiasing, addr 0x672d218, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::AntialiasingMode> get_antialiasing();

  /// @brief Method get_antialiasingQuality, addr 0x672d278, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::AntialiasingQuality> get_antialiasingQuality();

  /// @brief Method get_aspectRatio, addr 0x672c268, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<float_t> get_aspectRatio();

  /// @brief Method get_backgroundColor, addr 0x672d3f8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Color> get_backgroundColor();

  /// @brief Method get_baseCamera, addr 0x672d580, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityW<::UnityEngine::Camera>> get_baseCamera();

  /// @brief Method get_camera, addr 0x672be48, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityW<::UnityEngine::Camera>> get_camera();

  /// @brief Method get_cameraTargetDescriptor, addr 0x672bfc8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::RenderTextureDescriptor> get_cameraTargetDescriptor();

  /// @brief Method get_cameraType, addr 0x672c568, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::CameraType> get_cameraType();

  /// @brief Method get_captureActions, addr 0x672d038, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*> get_captureActions();

  /// @brief Method get_clearDepth, addr 0x672c508, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_clearDepth();

  /// @brief Method get_defaultOpaqueSortFlags, addr 0x672cdec, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::SortingCriteria> get_defaultOpaqueSortFlags();

  /// @brief Method get_fsrOverrideSharpness, addr 0x672c3e8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_fsrOverrideSharpness();

  /// @brief Method get_fsrSharpness, addr 0x672c448, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<float_t> get_fsrSharpness();

  /// @brief Method get_hdrColorBufferPrecision, addr 0x672c4a8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::HDRColorBufferPrecision> get_hdrColorBufferPrecision();

  /// @brief Method get_hdrDisplayColorGamut, addr 0x672cb84, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorGamut get_hdrDisplayColorGamut();

  /// @brief Method get_hdrDisplayInformation, addr 0x672cb24, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation get_hdrDisplayInformation();

  /// @brief Method get_historyManager, addr 0x672bea8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraHistory*> get_historyManager();

  /// @brief Method get_imageScalingMode, addr 0x672c328, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::ImageScalingMode> get_imageScalingMode();

  /// @brief Method get_isAlphaOutputEnabled, addr 0x672c6e8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_isAlphaOutputEnabled();

  /// @brief Method get_isDefaultViewport, addr 0x672c5c8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_isDefaultViewport();

  /// @brief Method get_isDitheringEnabled, addr 0x672d1b8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_isDitheringEnabled();

  /// @brief Method get_isHDROutputActive, addr 0x672cac4, size 0x60, virtual false, abstract: false, final false
  inline bool get_isHDROutputActive();

  /// @brief Method get_isHdrEnabled, addr 0x672c628, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_isHdrEnabled();

  /// @brief Method get_isPreviewCamera, addr 0x672c990, size 0x68, virtual false, abstract: false, final false
  inline bool get_isPreviewCamera();

  /// @brief Method get_isRenderPassSupportedCamera, addr 0x672c9f8, size 0x6c, virtual false, abstract: false, final false
  inline bool get_isRenderPassSupportedCamera();

  /// @brief Method get_isSceneViewCamera, addr 0x672c928, size 0x68, virtual false, abstract: false, final false
  inline bool get_isSceneViewCamera();

  /// @brief Method get_isStopNaNEnabled, addr 0x672d158, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_isStopNaNEnabled();

  /// @brief Method get_maxShadowDistance, addr 0x672cf78, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<float_t> get_maxShadowDistance();

  /// @brief Method get_pixelHeight, addr 0x672c208, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_pixelHeight();

  /// @brief Method get_pixelRect, addr 0x672c028, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rect> get_pixelRect();

  /// @brief Method get_pixelWidth, addr 0x672c1a8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<int32_t> get_pixelWidth();

  /// @brief Method get_postProcessEnabled, addr 0x672cfd8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_postProcessEnabled();

  /// @brief Method get_postProcessingRequiresDepthTexture, addr 0x672c808, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_postProcessingRequiresDepthTexture();

  /// @brief Method get_renderScale, addr 0x672c2c8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<float_t> get_renderScale();

  /// @brief Method get_renderType, addr 0x672bf08, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::CameraRenderType> get_renderType();

  /// @brief Method get_renderer, addr 0x672d2d8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> get_renderer();

  /// @brief Method get_rendersOverlayUI, addr 0x672cbe4, size 0x60, virtual false, abstract: false, final false
  inline bool get_rendersOverlayUI();

  /// @brief Method get_requireSrgbConversion, addr 0x672c8c8, size 0x60, virtual false, abstract: false, final false
  inline bool get_requireSrgbConversion();

  /// @brief Method get_requiresDepthTexture, addr 0x672c748, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_requiresDepthTexture();

  /// @brief Method get_requiresOpaqueTexture, addr 0x672c7a8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_requiresOpaqueTexture();

  /// @brief Method get_resetHistory, addr 0x672d518, size 0x68, virtual false, abstract: false, final false
  inline bool get_resetHistory();

  /// @brief Method get_resolveFinalTarget, addr 0x672d338, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_resolveFinalTarget();

  /// @brief Method get_resolveToScreen, addr 0x672ca64, size 0x60, virtual false, abstract: false, final false
  inline bool get_resolveToScreen();

  /// @brief Method get_screenCoordScaleBias, addr 0x672c148, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Vector4> get_screenCoordScaleBias();

  /// @brief Method get_screenSizeOverride, addr 0x672c0e8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Vector4> get_screenSizeOverride();

  /// @brief Method get_taaHistory, addr 0x672d458, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::TaaHistory*> get_taaHistory();

  /// @brief Method get_taaSettings, addr 0x672d4b8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> get_taaSettings();

  /// @brief Method get_targetTexture, addr 0x672bf68, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityW<::UnityEngine::RenderTexture>> get_targetTexture();

  /// @brief Method get_universalCameraData, addr 0x672b840, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalCameraData* get_universalCameraData();

  /// @brief Method get_upscalingFilter, addr 0x672c388, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::ImageUpscalingFilter> get_upscalingFilter();

  /// @brief Method get_useScreenCoordOverride, addr 0x672c088, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_useScreenCoordOverride();

  /// @brief Method get_volumeLayerMask, addr 0x672d098, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::LayerMask> get_volumeLayerMask();

  /// @brief Method get_volumeTrigger, addr 0x672d0f8, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityW<::UnityEngine::Transform>> get_volumeTrigger();

  /// @brief Method get_worldSpaceCameraPos, addr 0x672d398, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Vector3> get_worldSpaceCameraPos();

  /// @brief Method get_xr, addr 0x672ce4c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::XRPass* get_xr();

  /// @brief Method get_xrRendering, addr 0x672c868, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<bool> get_xrRendering();

  /// @brief Method get_xrUniversal, addr 0x672cf18, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::XRPassUniversal* get_xrUniversal();

  /// @brief Method set_xr, addr 0x672ceac, size 0x6c, virtual false, abstract: false, final false
  inline void set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraData();

  // Ctor Parameters [CppParam { name: "frameData", ty: "::UnityEngine::Rendering::ContextContainer*", modifiers: "", def_value: None }]
  constexpr CameraData(::UnityEngine::Rendering::ContextContainer* frameData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field frameData, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ContextContainer* frameData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::CameraData, frameData) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::CameraData, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::CameraData, "UnityEngine.Rendering.Universal", "CameraData");
