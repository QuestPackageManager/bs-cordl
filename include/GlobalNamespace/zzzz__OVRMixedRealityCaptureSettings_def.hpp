#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureSettings)
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct __OVRManager__CameraDevice;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct __OVRManager__DepthQuality;
}
namespace GlobalNamespace {
class __OVRManager__InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct __OVRManager__MrcActivationMode;
}
namespace GlobalNamespace {
struct __OVRManager__VirtualGreenScreenType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureSettings);
// Type: ::OVRMixedRealityCaptureSettings
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRMixedRealityCaptureSettings*
class CORDL_TYPE OVRMixedRealityCaptureSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice,
                      put = OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeyColor,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeyColor))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_chromaKeyColor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_compositionMethod,
                      put = OVRMixedRealityCaptureConfiguration_set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_compositionMethod;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_depthQuality,
                      put = OVRMixedRealityCaptureConfiguration_set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_depthQuality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)) bool OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_enableMixedReality,
                      put = OVRMixedRealityCaptureConfiguration_set_enableMixedReality)) bool OVRMixedRealityCaptureConfiguration_enableMixedReality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest))::UnityEngine::Color
      OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)) float_t OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject, put = OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject))::
      GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_mrcActivationMode,
                      put = OVRMixedRealityCaptureConfiguration_set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_mrcActivationMode;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)) int32_t OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)) float_t OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_useDynamicLighting,
                      put = OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)) bool OVRMixedRealityCaptureConfiguration_useDynamicLighting;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)) bool OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType
      OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

  /// @brief Field <OVRMixedRealityCaptureConfiguration.instantiateMixedRealityCameraGameObject>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField,
                      put = __cordl_internal_set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField))::GlobalNamespace::
      __OVRManager__InstantiateMrcCameraDelegate* _OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;

  /// @brief Field capturingCameraDevice, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_capturingCameraDevice, put = __cordl_internal_set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice capturingCameraDevice;

  /// @brief Field chromaKeyColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_chromaKeyColor, put = __cordl_internal_set_chromaKeyColor))::UnityEngine::Color chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySimilarity, put = __cordl_internal_set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySmoothRange, put = __cordl_internal_set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_chromaKeySpillRange, put = __cordl_internal_set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  /// @brief Field compositionMethod, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_compositionMethod, put = __cordl_internal_set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod;

  /// @brief Field depthQuality, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_depthQuality, put = __cordl_internal_set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality depthQuality;

  /// @brief Field dynamicCullingMask, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_dynamicCullingMask, put = __cordl_internal_set_dynamicCullingMask)) bool dynamicCullingMask;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_dynamicLightingDepthVariationClampingValue,
                      put = __cordl_internal_set_dynamicLightingDepthVariationClampingValue)) float_t dynamicLightingDepthVariationClampingValue;

  /// @brief Field dynamicLightingSmoothFactor, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_dynamicLightingSmoothFactor, put = __cordl_internal_set_dynamicLightingSmoothFactor)) float_t dynamicLightingSmoothFactor;

  /// @brief Field enableMixedReality, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_enableMixedReality, put = __cordl_internal_set_enableMixedReality)) bool enableMixedReality;

  /// @brief Field externalCompositionBackdropColorQuest, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_externalCompositionBackdropColorQuest,
                      put = __cordl_internal_set_externalCompositionBackdropColorQuest))::UnityEngine::Color externalCompositionBackdropColorQuest;

  /// @brief Field externalCompositionBackdropColorRift, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_externalCompositionBackdropColorRift,
                      put = __cordl_internal_set_externalCompositionBackdropColorRift))::UnityEngine::Color externalCompositionBackdropColorRift;

  /// @brief Field extraHiddenLayers, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_extraHiddenLayers, put = __cordl_internal_set_extraHiddenLayers))::UnityEngine::LayerMask extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_extraVisibleLayers, put = __cordl_internal_set_extraVisibleLayers))::UnityEngine::LayerMask extraVisibleLayers;

  /// @brief Field flipCameraFrameHorizontally, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_flipCameraFrameHorizontally, put = __cordl_internal_set_flipCameraFrameHorizontally)) bool flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_flipCameraFrameVertically, put = __cordl_internal_set_flipCameraFrameVertically)) bool flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_handPoseStateLatency, put = __cordl_internal_set_handPoseStateLatency)) float_t handPoseStateLatency;

  /// @brief Field mrcActivationMode, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_mrcActivationMode, put = __cordl_internal_set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode mrcActivationMode;

  /// @brief Field sandwichCompositionBufferedFrames, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_sandwichCompositionBufferedFrames, put = __cordl_internal_set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  /// @brief Field sandwichCompositionRenderLatency, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_sandwichCompositionRenderLatency, put = __cordl_internal_set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  /// @brief Field useDynamicLighting, offset 0x7c, size 0x1
  __declspec(property(get = __cordl_internal_get_useDynamicLighting, put = __cordl_internal_set_useDynamicLighting)) bool useDynamicLighting;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset 0x98, size 0x1
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenApplyDepthCulling, put = __cordl_internal_set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenBottomY, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenBottomY, put = __cordl_internal_set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenDepthTolerance, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenDepthTolerance, put = __cordl_internal_set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  /// @brief Field virtualGreenScreenTopY, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenTopY, put = __cordl_internal_set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenType, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_virtualGreenScreenType,
                      put = __cordl_internal_set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType virtualGreenScreenType;

  /// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept;

  static inline ::GlobalNamespace::OVRMixedRealityCaptureSettings* New_ctor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice, addr 0x2bbc508, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor, addr 0x2bbc570, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity, addr 0x2bbc588, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange, addr 0x2bbc598, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange, addr 0x2bbc5a8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod, addr 0x2bbc4c8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality, addr 0x2bbc5cc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask, addr 0x2bbc4b4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue, addr 0x2bbc5ec, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor, addr 0x2bbc5dc, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality, addr 0x2bbc480, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest, addr 0x2bbc4f0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift, addr 0x2bbc4d8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers, addr 0x2bbc494, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers, addr 0x2bbc4a4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally, addr 0x2bbc518, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically, addr 0x2bbc52c, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency, addr 0x2bbc540, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject, addr 0x2bbc660, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode, addr 0x2bbc650, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames, addr 0x2bbc560, size 0x8, virtual true, abstract: false, final true
  inline int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency, addr 0x2bbc550, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting, addr 0x2bbc5b8, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling, addr 0x2bbc62c, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY, addr 0x2bbc61c, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance, addr 0x2bbc640, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY, addr 0x2bbc60c, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType, addr 0x2bbc5fc, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice, addr 0x2bbc510, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor, addr 0x2bbc57c, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity, addr 0x2bbc590, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange, addr 0x2bbc5a0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange, addr 0x2bbc5b0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod, addr 0x2bbc4d0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality, addr 0x2bbc5d4, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask, addr 0x2bbc4bc, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue, addr 0x2bbc5f4, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor, addr 0x2bbc5e4, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality, addr 0x2bbc488, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest, addr 0x2bbc4fc, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift, addr 0x2bbc4e4, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers, addr 0x2bbc49c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers, addr 0x2bbc4ac, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally, addr 0x2bbc520, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically, addr 0x2bbc534, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency, addr 0x2bbc548, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject, addr 0x2bbc668, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode, addr 0x2bbc658, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames, addr 0x2bbc568, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency, addr 0x2bbc558, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting, addr 0x2bbc5c0, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling, addr 0x2bbc634, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY, addr 0x2bbc624, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance, addr 0x2bbc648, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY, addr 0x2bbc614, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType, addr 0x2bbc604, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  constexpr ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*& __cordl_internal_get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*> const&
  __cordl_internal_get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice const& __cordl_internal_get_capturingCameraDevice() const;

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice& __cordl_internal_get_capturingCameraDevice();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_chromaKeyColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_chromaKeyColor();

  constexpr float_t const& __cordl_internal_get_chromaKeySimilarity() const;

  constexpr float_t& __cordl_internal_get_chromaKeySimilarity();

  constexpr float_t const& __cordl_internal_get_chromaKeySmoothRange() const;

  constexpr float_t& __cordl_internal_get_chromaKeySmoothRange();

  constexpr float_t const& __cordl_internal_get_chromaKeySpillRange() const;

  constexpr float_t& __cordl_internal_get_chromaKeySpillRange();

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod const& __cordl_internal_get_compositionMethod() const;

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod& __cordl_internal_get_compositionMethod();

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality const& __cordl_internal_get_depthQuality() const;

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality& __cordl_internal_get_depthQuality();

  constexpr bool const& __cordl_internal_get_dynamicCullingMask() const;

  constexpr bool& __cordl_internal_get_dynamicCullingMask();

  constexpr float_t const& __cordl_internal_get_dynamicLightingDepthVariationClampingValue() const;

  constexpr float_t& __cordl_internal_get_dynamicLightingDepthVariationClampingValue();

  constexpr float_t const& __cordl_internal_get_dynamicLightingSmoothFactor() const;

  constexpr float_t& __cordl_internal_get_dynamicLightingSmoothFactor();

  constexpr bool const& __cordl_internal_get_enableMixedReality() const;

  constexpr bool& __cordl_internal_get_enableMixedReality();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_externalCompositionBackdropColorQuest() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_externalCompositionBackdropColorQuest();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_externalCompositionBackdropColorRift() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_externalCompositionBackdropColorRift();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_extraHiddenLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_extraHiddenLayers();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_extraVisibleLayers() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_extraVisibleLayers();

  constexpr bool const& __cordl_internal_get_flipCameraFrameHorizontally() const;

  constexpr bool& __cordl_internal_get_flipCameraFrameHorizontally();

  constexpr bool const& __cordl_internal_get_flipCameraFrameVertically() const;

  constexpr bool& __cordl_internal_get_flipCameraFrameVertically();

  constexpr float_t const& __cordl_internal_get_handPoseStateLatency() const;

  constexpr float_t& __cordl_internal_get_handPoseStateLatency();

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode const& __cordl_internal_get_mrcActivationMode() const;

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode& __cordl_internal_get_mrcActivationMode();

  constexpr int32_t const& __cordl_internal_get_sandwichCompositionBufferedFrames() const;

  constexpr int32_t& __cordl_internal_get_sandwichCompositionBufferedFrames();

  constexpr float_t const& __cordl_internal_get_sandwichCompositionRenderLatency() const;

  constexpr float_t& __cordl_internal_get_sandwichCompositionRenderLatency();

  constexpr bool const& __cordl_internal_get_useDynamicLighting() const;

  constexpr bool& __cordl_internal_get_useDynamicLighting();

  constexpr bool const& __cordl_internal_get_virtualGreenScreenApplyDepthCulling() const;

  constexpr bool& __cordl_internal_get_virtualGreenScreenApplyDepthCulling();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenBottomY() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenBottomY();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenDepthTolerance() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenDepthTolerance();

  constexpr float_t const& __cordl_internal_get_virtualGreenScreenTopY() const;

  constexpr float_t& __cordl_internal_get_virtualGreenScreenTopY();

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const& __cordl_internal_get_virtualGreenScreenType() const;

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType& __cordl_internal_get_virtualGreenScreenType();

  constexpr void
  __cordl_internal_set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  constexpr void __cordl_internal_set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  constexpr void __cordl_internal_set_chromaKeyColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_chromaKeySimilarity(float_t value);

  constexpr void __cordl_internal_set_chromaKeySmoothRange(float_t value);

  constexpr void __cordl_internal_set_chromaKeySpillRange(float_t value);

  constexpr void __cordl_internal_set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  constexpr void __cordl_internal_set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  constexpr void __cordl_internal_set_dynamicCullingMask(bool value);

  constexpr void __cordl_internal_set_dynamicLightingDepthVariationClampingValue(float_t value);

  constexpr void __cordl_internal_set_dynamicLightingSmoothFactor(float_t value);

  constexpr void __cordl_internal_set_enableMixedReality(bool value);

  constexpr void __cordl_internal_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_flipCameraFrameHorizontally(bool value);

  constexpr void __cordl_internal_set_flipCameraFrameVertically(bool value);

  constexpr void __cordl_internal_set_handPoseStateLatency(float_t value);

  constexpr void __cordl_internal_set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  constexpr void __cordl_internal_set_sandwichCompositionBufferedFrames(int32_t value);

  constexpr void __cordl_internal_set_sandwichCompositionRenderLatency(float_t value);

  constexpr void __cordl_internal_set_useDynamicLighting(bool value);

  constexpr void __cordl_internal_set_virtualGreenScreenApplyDepthCulling(bool value);

  constexpr void __cordl_internal_set_virtualGreenScreenBottomY(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenDepthTolerance(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenTopY(float_t value);

  constexpr void __cordl_internal_set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  /// @brief Method .ctor, addr 0x2bbc670, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings const&) = delete;

  /// @brief Field enableMixedReality, offset: 0x18, size: 0x1, def value: None
  bool ___enableMixedReality;

  /// @brief Field extraHiddenLayers, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___extraVisibleLayers;

  /// @brief Field dynamicCullingMask, offset: 0x24, size: 0x1, def value: None
  bool ___dynamicCullingMask;

  /// @brief Field compositionMethod, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CompositionMethod ___compositionMethod;

  /// @brief Field externalCompositionBackdropColorRift, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorRift;

  /// @brief Field externalCompositionBackdropColorQuest, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Color ___externalCompositionBackdropColorQuest;

  /// @brief Field capturingCameraDevice, offset: 0x4c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CameraDevice ___capturingCameraDevice;

  /// @brief Field flipCameraFrameHorizontally, offset: 0x50, size: 0x1, def value: None
  bool ___flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset: 0x51, size: 0x1, def value: None
  bool ___flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset: 0x54, size: 0x4, def value: None
  float_t ___handPoseStateLatency;

  /// @brief Field sandwichCompositionRenderLatency, offset: 0x58, size: 0x4, def value: None
  float_t ___sandwichCompositionRenderLatency;

  /// @brief Field sandwichCompositionBufferedFrames, offset: 0x5c, size: 0x4, def value: None
  int32_t ___sandwichCompositionBufferedFrames;

  /// @brief Field chromaKeyColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ___chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset: 0x70, size: 0x4, def value: None
  float_t ___chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset: 0x74, size: 0x4, def value: None
  float_t ___chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset: 0x78, size: 0x4, def value: None
  float_t ___chromaKeySpillRange;

  /// @brief Field useDynamicLighting, offset: 0x7c, size: 0x1, def value: None
  bool ___useDynamicLighting;

  /// @brief Field depthQuality, offset: 0x80, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__DepthQuality ___depthQuality;

  /// @brief Field dynamicLightingSmoothFactor, offset: 0x84, size: 0x4, def value: None
  float_t ___dynamicLightingSmoothFactor;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset: 0x88, size: 0x4, def value: None
  float_t ___dynamicLightingDepthVariationClampingValue;

  /// @brief Field virtualGreenScreenType, offset: 0x8c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__VirtualGreenScreenType ___virtualGreenScreenType;

  /// @brief Field virtualGreenScreenTopY, offset: 0x90, size: 0x4, def value: None
  float_t ___virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenBottomY, offset: 0x94, size: 0x4, def value: None
  float_t ___virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset: 0x98, size: 0x1, def value: None
  bool ___virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenDepthTolerance, offset: 0x9c, size: 0x4, def value: None
  float_t ___virtualGreenScreenDepthTolerance;

  /// @brief Field mrcActivationMode, offset: 0xa0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__MrcActivationMode ___mrcActivationMode;

  /// @brief Field <OVRMixedRealityCaptureConfiguration.instantiateMixedRealityCameraGameObject>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* ____OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureSettings, 0xb0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___enableMixedReality) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___extraHiddenLayers) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___extraVisibleLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___dynamicCullingMask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___compositionMethod) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___externalCompositionBackdropColorRift) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___externalCompositionBackdropColorQuest) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___capturingCameraDevice) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___flipCameraFrameHorizontally) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___flipCameraFrameVertically) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___handPoseStateLatency) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___sandwichCompositionRenderLatency) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___sandwichCompositionBufferedFrames) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___chromaKeyColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___chromaKeySimilarity) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___chromaKeySmoothRange) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___chromaKeySpillRange) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___useDynamicLighting) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___depthQuality) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___dynamicLightingSmoothFactor) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___dynamicLightingDepthVariationClampingValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___virtualGreenScreenType) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___virtualGreenScreenTopY) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___virtualGreenScreenBottomY) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___virtualGreenScreenApplyDepthCulling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___virtualGreenScreenDepthTolerance) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ___mrcActivationMode) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureSettings, ____OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField) == 0xa8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureSettings*, "", "OVRMixedRealityCaptureSettings");
