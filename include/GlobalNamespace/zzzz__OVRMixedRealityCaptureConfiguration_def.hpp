#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureConfiguration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureConfiguration)
namespace GlobalNamespace {
struct OVRManager_CameraDevice;
}
namespace GlobalNamespace {
struct OVRManager_CompositionMethod;
}
namespace GlobalNamespace {
struct OVRManager_DepthQuality;
}
namespace GlobalNamespace {
class OVRManager_InstantiateMrcCameraDelegate;
}
namespace GlobalNamespace {
struct OVRManager_MrcActivationMode;
}
namespace GlobalNamespace {
struct OVRManager_VirtualGreenScreenType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureConfiguration);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRMixedRealityCaptureConfiguration
class CORDL_TYPE OVRMixedRealityCaptureConfiguration {
public:
  // Declarations
  __declspec(property(get = get_capturingCameraDevice, put = set_capturingCameraDevice)) ::GlobalNamespace::OVRManager_CameraDevice capturingCameraDevice;

  __declspec(property(get = get_chromaKeyColor, put = set_chromaKeyColor)) ::UnityEngine::Color chromaKeyColor;

  __declspec(property(get = get_chromaKeySimilarity, put = set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  __declspec(property(get = get_chromaKeySmoothRange, put = set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  __declspec(property(get = get_chromaKeySpillRange, put = set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  __declspec(property(get = get_compositionMethod, put = set_compositionMethod)) ::GlobalNamespace::OVRManager_CompositionMethod compositionMethod;

  __declspec(property(get = get_depthQuality, put = set_depthQuality)) ::GlobalNamespace::OVRManager_DepthQuality depthQuality;

  __declspec(property(get = get_dynamicCullingMask, put = set_dynamicCullingMask)) bool dynamicCullingMask;

  __declspec(property(get = get_dynamicLightingDepthVariationClampingValue, put = set_dynamicLightingDepthVariationClampingValue)) float_t dynamicLightingDepthVariationClampingValue;

  __declspec(property(get = get_dynamicLightingSmoothFactor, put = set_dynamicLightingSmoothFactor)) float_t dynamicLightingSmoothFactor;

  __declspec(property(get = get_enableMixedReality, put = set_enableMixedReality)) bool enableMixedReality;

  __declspec(property(get = get_externalCompositionBackdropColorQuest, put = set_externalCompositionBackdropColorQuest)) ::UnityEngine::Color externalCompositionBackdropColorQuest;

  __declspec(property(get = get_externalCompositionBackdropColorRift, put = set_externalCompositionBackdropColorRift)) ::UnityEngine::Color externalCompositionBackdropColorRift;

  __declspec(property(get = get_extraHiddenLayers, put = set_extraHiddenLayers)) ::UnityEngine::LayerMask extraHiddenLayers;

  __declspec(property(get = get_extraVisibleLayers, put = set_extraVisibleLayers)) ::UnityEngine::LayerMask extraVisibleLayers;

  __declspec(property(get = get_flipCameraFrameHorizontally, put = set_flipCameraFrameHorizontally)) bool flipCameraFrameHorizontally;

  __declspec(property(get = get_flipCameraFrameVertically, put = set_flipCameraFrameVertically)) bool flipCameraFrameVertically;

  __declspec(property(get = get_handPoseStateLatency, put = set_handPoseStateLatency)) float_t handPoseStateLatency;

  __declspec(property(get = get_instantiateMixedRealityCameraGameObject,
                      put = set_instantiateMixedRealityCameraGameObject)) ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* instantiateMixedRealityCameraGameObject;

  __declspec(property(get = get_mrcActivationMode, put = set_mrcActivationMode)) ::GlobalNamespace::OVRManager_MrcActivationMode mrcActivationMode;

  __declspec(property(get = get_sandwichCompositionBufferedFrames, put = set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  __declspec(property(get = get_sandwichCompositionRenderLatency, put = set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  __declspec(property(get = get_useDynamicLighting, put = set_useDynamicLighting)) bool useDynamicLighting;

  __declspec(property(get = get_virtualGreenScreenApplyDepthCulling, put = set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = get_virtualGreenScreenBottomY, put = set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  __declspec(property(get = get_virtualGreenScreenDepthTolerance, put = set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  __declspec(property(get = get_virtualGreenScreenTopY, put = set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  __declspec(property(get = get_virtualGreenScreenType, put = set_virtualGreenScreenType)) ::GlobalNamespace::OVRManager_VirtualGreenScreenType virtualGreenScreenType;

  /// @brief Method get_capturingCameraDevice, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_CameraDevice get_capturingCameraDevice();

  /// @brief Method get_chromaKeyColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_chromaKeyColor();

  /// @brief Method get_chromaKeySimilarity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_chromaKeySimilarity();

  /// @brief Method get_chromaKeySmoothRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_chromaKeySmoothRange();

  /// @brief Method get_chromaKeySpillRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_chromaKeySpillRange();

  /// @brief Method get_compositionMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_CompositionMethod get_compositionMethod();

  /// @brief Method get_depthQuality, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_DepthQuality get_depthQuality();

  /// @brief Method get_dynamicCullingMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_dynamicCullingMask();

  /// @brief Method get_dynamicLightingDepthVariationClampingValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method get_dynamicLightingSmoothFactor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_dynamicLightingSmoothFactor();

  /// @brief Method get_enableMixedReality, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_enableMixedReality();

  /// @brief Method get_externalCompositionBackdropColorQuest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_externalCompositionBackdropColorQuest();

  /// @brief Method get_externalCompositionBackdropColorRift, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_externalCompositionBackdropColorRift();

  /// @brief Method get_extraHiddenLayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::LayerMask get_extraHiddenLayers();

  /// @brief Method get_extraVisibleLayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::LayerMask get_extraVisibleLayers();

  /// @brief Method get_flipCameraFrameHorizontally, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_flipCameraFrameHorizontally();

  /// @brief Method get_flipCameraFrameVertically, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_flipCameraFrameVertically();

  /// @brief Method get_handPoseStateLatency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_handPoseStateLatency();

  /// @brief Method get_instantiateMixedRealityCameraGameObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* get_instantiateMixedRealityCameraGameObject();

  /// @brief Method get_mrcActivationMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_MrcActivationMode get_mrcActivationMode();

  /// @brief Method get_sandwichCompositionBufferedFrames, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_sandwichCompositionBufferedFrames();

  /// @brief Method get_sandwichCompositionRenderLatency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_sandwichCompositionRenderLatency();

  /// @brief Method get_useDynamicLighting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_useDynamicLighting();

  /// @brief Method get_virtualGreenScreenApplyDepthCulling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method get_virtualGreenScreenBottomY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_virtualGreenScreenBottomY();

  /// @brief Method get_virtualGreenScreenDepthTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_virtualGreenScreenDepthTolerance();

  /// @brief Method get_virtualGreenScreenTopY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_virtualGreenScreenTopY();

  /// @brief Method get_virtualGreenScreenType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::OVRManager_VirtualGreenScreenType get_virtualGreenScreenType();

  /// @brief Method set_capturingCameraDevice, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_capturingCameraDevice(::GlobalNamespace::OVRManager_CameraDevice value);

  /// @brief Method set_chromaKeyColor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method set_chromaKeySimilarity, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_chromaKeySimilarity(float_t value);

  /// @brief Method set_chromaKeySmoothRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_chromaKeySmoothRange(float_t value);

  /// @brief Method set_chromaKeySpillRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_chromaKeySpillRange(float_t value);

  /// @brief Method set_compositionMethod, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_compositionMethod(::GlobalNamespace::OVRManager_CompositionMethod value);

  /// @brief Method set_depthQuality, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_depthQuality(::GlobalNamespace::OVRManager_DepthQuality value);

  /// @brief Method set_dynamicCullingMask, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_dynamicCullingMask(bool value);

  /// @brief Method set_dynamicLightingDepthVariationClampingValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method set_dynamicLightingSmoothFactor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method set_enableMixedReality, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_enableMixedReality(bool value);

  /// @brief Method set_externalCompositionBackdropColorQuest, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method set_externalCompositionBackdropColorRift, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method set_extraHiddenLayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_extraVisibleLayers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_flipCameraFrameHorizontally, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flipCameraFrameHorizontally(bool value);

  /// @brief Method set_flipCameraFrameVertically, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_flipCameraFrameVertically(bool value);

  /// @brief Method set_handPoseStateLatency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_handPoseStateLatency(float_t value);

  /// @brief Method set_instantiateMixedRealityCameraGameObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::OVRManager_InstantiateMrcCameraDelegate* value);

  /// @brief Method set_mrcActivationMode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_mrcActivationMode(::GlobalNamespace::OVRManager_MrcActivationMode value);

  /// @brief Method set_sandwichCompositionBufferedFrames, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method set_sandwichCompositionRenderLatency, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method set_useDynamicLighting, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_useDynamicLighting(bool value);

  /// @brief Method set_virtualGreenScreenApplyDepthCulling, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method set_virtualGreenScreenBottomY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method set_virtualGreenScreenDepthTolerance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method set_virtualGreenScreenTopY, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_virtualGreenScreenTopY(float_t value);

  /// @brief Method set_virtualGreenScreenType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_virtualGreenScreenType(::GlobalNamespace::OVRManager_VirtualGreenScreenType value);

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureConfiguration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureConfiguration(OVRMixedRealityCaptureConfiguration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureConfiguration);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, "", "OVRMixedRealityCaptureConfiguration");
