#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusMRCManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OculusMRCManager)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
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
struct __OVRManager__MrcCameraType;
}
namespace GlobalNamespace {
struct __OVRManager__VirtualGreenScreenType;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusMRCManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusMRCManager);
// Type: ::OculusMRCManager
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusMRCManager*
class CORDL_TYPE OculusMRCManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field <capturingCameraDevice>k__BackingField, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get__capturingCameraDevice_k__BackingField,
                      put = __cordl_internal_set__capturingCameraDevice_k__BackingField)) ::GlobalNamespace::__OVRManager__CameraDevice _capturingCameraDevice_k__BackingField;

  /// @brief Field <chromaKeyColor>k__BackingField, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__chromaKeyColor_k__BackingField, put = __cordl_internal_set__chromaKeyColor_k__BackingField)) ::UnityEngine::Color _chromaKeyColor_k__BackingField;

  /// @brief Field <chromaKeySimilarity>k__BackingField, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__chromaKeySimilarity_k__BackingField, put = __cordl_internal_set__chromaKeySimilarity_k__BackingField)) float_t _chromaKeySimilarity_k__BackingField;

  /// @brief Field <chromaKeySmoothRange>k__BackingField, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get__chromaKeySmoothRange_k__BackingField,
                      put = __cordl_internal_set__chromaKeySmoothRange_k__BackingField)) float_t _chromaKeySmoothRange_k__BackingField;

  /// @brief Field <chromaKeySpillRange>k__BackingField, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__chromaKeySpillRange_k__BackingField, put = __cordl_internal_set__chromaKeySpillRange_k__BackingField)) float_t _chromaKeySpillRange_k__BackingField;

  /// @brief Field <compositionMethod>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__compositionMethod_k__BackingField,
                      put = __cordl_internal_set__compositionMethod_k__BackingField)) ::GlobalNamespace::__OVRManager__CompositionMethod _compositionMethod_k__BackingField;

  /// @brief Field <depthQuality>k__BackingField, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__depthQuality_k__BackingField,
                      put = __cordl_internal_set__depthQuality_k__BackingField)) ::GlobalNamespace::__OVRManager__DepthQuality _depthQuality_k__BackingField;

  /// @brief Field <dynamicCullingMask>k__BackingField, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get__dynamicCullingMask_k__BackingField, put = __cordl_internal_set__dynamicCullingMask_k__BackingField)) bool _dynamicCullingMask_k__BackingField;

  /// @brief Field <dynamicLightingDepthVariationClampingValue>k__BackingField, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicLightingDepthVariationClampingValue_k__BackingField,
                      put = __cordl_internal_set__dynamicLightingDepthVariationClampingValue_k__BackingField)) float_t _dynamicLightingDepthVariationClampingValue_k__BackingField;

  /// @brief Field <dynamicLightingSmoothFactor>k__BackingField, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__dynamicLightingSmoothFactor_k__BackingField,
                      put = __cordl_internal_set__dynamicLightingSmoothFactor_k__BackingField)) float_t _dynamicLightingSmoothFactor_k__BackingField;

  /// @brief Field <enableMixedReality>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__enableMixedReality_k__BackingField, put = __cordl_internal_set__enableMixedReality_k__BackingField)) bool _enableMixedReality_k__BackingField;

  /// @brief Field <externalCompositionBackdropColorQuest>k__BackingField, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get__externalCompositionBackdropColorQuest_k__BackingField,
                      put = __cordl_internal_set__externalCompositionBackdropColorQuest_k__BackingField)) ::UnityEngine::Color _externalCompositionBackdropColorQuest_k__BackingField;

  /// @brief Field <externalCompositionBackdropColorRift>k__BackingField, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__externalCompositionBackdropColorRift_k__BackingField,
                      put = __cordl_internal_set__externalCompositionBackdropColorRift_k__BackingField)) ::UnityEngine::Color _externalCompositionBackdropColorRift_k__BackingField;

  /// @brief Field <extraHiddenLayers>k__BackingField, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__extraHiddenLayers_k__BackingField,
                      put = __cordl_internal_set__extraHiddenLayers_k__BackingField)) ::UnityEngine::LayerMask _extraHiddenLayers_k__BackingField;

  /// @brief Field <extraVisibleLayers>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__extraVisibleLayers_k__BackingField,
                      put = __cordl_internal_set__extraVisibleLayers_k__BackingField)) ::UnityEngine::LayerMask _extraVisibleLayers_k__BackingField;

  /// @brief Field <flipCameraFrameHorizontally>k__BackingField, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get__flipCameraFrameHorizontally_k__BackingField,
                      put = __cordl_internal_set__flipCameraFrameHorizontally_k__BackingField)) bool _flipCameraFrameHorizontally_k__BackingField;

  /// @brief Field <flipCameraFrameVertically>k__BackingField, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get__flipCameraFrameVertically_k__BackingField,
                      put = __cordl_internal_set__flipCameraFrameVertically_k__BackingField)) bool _flipCameraFrameVertically_k__BackingField;

  /// @brief Field <handPoseStateLatency>k__BackingField, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__handPoseStateLatency_k__BackingField,
                      put = __cordl_internal_set__handPoseStateLatency_k__BackingField)) float_t _handPoseStateLatency_k__BackingField;

  /// @brief Field _instantiateMixedRealityBackgroundCameraGameObject, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateMixedRealityBackgroundCameraGameObject,
                      put = __cordl_internal_set__instantiateMixedRealityBackgroundCameraGameObject)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*
      _instantiateMixedRealityBackgroundCameraGameObject;

  /// @brief Field _instantiateMixedRealityCameraGameObject, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateMixedRealityCameraGameObject,
                      put = __cordl_internal_set__instantiateMixedRealityCameraGameObject)) ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* _instantiateMixedRealityCameraGameObject;

  /// @brief Field _instantiateMixedRealityForegroundCameraGameObject, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instantiateMixedRealityForegroundCameraGameObject,
                      put = __cordl_internal_set__instantiateMixedRealityForegroundCameraGameObject)) ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*
      _instantiateMixedRealityForegroundCameraGameObject;

  /// @brief Field <mrcActivationMode>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__mrcActivationMode_k__BackingField,
                      put = __cordl_internal_set__mrcActivationMode_k__BackingField)) ::GlobalNamespace::__OVRManager__MrcActivationMode _mrcActivationMode_k__BackingField;

  /// @brief Field <sandwichCompositionBufferedFrames>k__BackingField, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get__sandwichCompositionBufferedFrames_k__BackingField,
                      put = __cordl_internal_set__sandwichCompositionBufferedFrames_k__BackingField)) int32_t _sandwichCompositionBufferedFrames_k__BackingField;

  /// @brief Field <sandwichCompositionRenderLatency>k__BackingField, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get__sandwichCompositionRenderLatency_k__BackingField,
                      put = __cordl_internal_set__sandwichCompositionRenderLatency_k__BackingField)) float_t _sandwichCompositionRenderLatency_k__BackingField;

  /// @brief Field <useDynamicLighting>k__BackingField, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get__useDynamicLighting_k__BackingField, put = __cordl_internal_set__useDynamicLighting_k__BackingField)) bool _useDynamicLighting_k__BackingField;

  /// @brief Field <virtualGreenScreenApplyDepthCulling>k__BackingField, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__virtualGreenScreenApplyDepthCulling_k__BackingField,
                      put = __cordl_internal_set__virtualGreenScreenApplyDepthCulling_k__BackingField)) bool _virtualGreenScreenApplyDepthCulling_k__BackingField;

  /// @brief Field <virtualGreenScreenBottomY>k__BackingField, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualGreenScreenBottomY_k__BackingField,
                      put = __cordl_internal_set__virtualGreenScreenBottomY_k__BackingField)) float_t _virtualGreenScreenBottomY_k__BackingField;

  /// @brief Field <virtualGreenScreenDepthTolerance>k__BackingField, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualGreenScreenDepthTolerance_k__BackingField,
                      put = __cordl_internal_set__virtualGreenScreenDepthTolerance_k__BackingField)) float_t _virtualGreenScreenDepthTolerance_k__BackingField;

  /// @brief Field <virtualGreenScreenTopY>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualGreenScreenTopY_k__BackingField,
                      put = __cordl_internal_set__virtualGreenScreenTopY_k__BackingField)) float_t _virtualGreenScreenTopY_k__BackingField;

  /// @brief Field <virtualGreenScreenType>k__BackingField, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get__virtualGreenScreenType_k__BackingField,
                      put = __cordl_internal_set__virtualGreenScreenType_k__BackingField)) ::GlobalNamespace::__OVRManager__VirtualGreenScreenType _virtualGreenScreenType_k__BackingField;

  /// @brief Field _vrPlatformHelper, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_capturingCameraDevice, put = set_capturingCameraDevice)) ::GlobalNamespace::__OVRManager__CameraDevice capturingCameraDevice;

  __declspec(property(get = get_chromaKeyColor, put = set_chromaKeyColor)) ::UnityEngine::Color chromaKeyColor;

  __declspec(property(get = get_chromaKeySimilarity, put = set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  __declspec(property(get = get_chromaKeySmoothRange, put = set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  __declspec(property(get = get_chromaKeySpillRange, put = set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  __declspec(property(get = get_compositionMethod, put = set_compositionMethod)) ::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod;

  __declspec(property(get = get_depthQuality, put = set_depthQuality)) ::GlobalNamespace::__OVRManager__DepthQuality depthQuality;

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
                      put = set_instantiateMixedRealityCameraGameObject)) ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* instantiateMixedRealityCameraGameObject;

  __declspec(property(get = get_mrcActivationMode, put = set_mrcActivationMode)) ::GlobalNamespace::__OVRManager__MrcActivationMode mrcActivationMode;

  __declspec(property(get = get_sandwichCompositionBufferedFrames, put = set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  __declspec(property(get = get_sandwichCompositionRenderLatency, put = set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  __declspec(property(get = get_useDynamicLighting, put = set_useDynamicLighting)) bool useDynamicLighting;

  __declspec(property(get = get_virtualGreenScreenApplyDepthCulling, put = set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = get_virtualGreenScreenBottomY, put = set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  __declspec(property(get = get_virtualGreenScreenDepthTolerance, put = set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  __declspec(property(get = get_virtualGreenScreenTopY, put = set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  __declspec(property(get = get_virtualGreenScreenType, put = set_virtualGreenScreenType)) ::GlobalNamespace::__OVRManager__VirtualGreenScreenType virtualGreenScreenType;

  /// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept;

  /// @brief Method Init, addr 0x3973b68, size 0x160, virtual false, abstract: false, final false
  inline void Init(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* instantiateMixedRealityBackgroundCameraGameObject,
                   ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* instantiateMixedRealityForegroundCameraGameObject);

  /// @brief Method InstantiateMixedRealityCameraGameObject, addr 0x3973cc8, size 0x34, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> InstantiateMixedRealityCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject, ::GlobalNamespace::__OVRManager__MrcCameraType cameraType);

  static inline ::GlobalNamespace::OculusMRCManager* New_ctor();

  /// @brief Method OnDestroy, addr 0x3973b10, size 0x58, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Update, addr 0x3973a9c, size 0x74, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice const& __cordl_internal_get__capturingCameraDevice_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice& __cordl_internal_get__capturingCameraDevice_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__chromaKeyColor_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__chromaKeyColor_k__BackingField();

  constexpr float_t const& __cordl_internal_get__chromaKeySimilarity_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__chromaKeySimilarity_k__BackingField();

  constexpr float_t const& __cordl_internal_get__chromaKeySmoothRange_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__chromaKeySmoothRange_k__BackingField();

  constexpr float_t const& __cordl_internal_get__chromaKeySpillRange_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__chromaKeySpillRange_k__BackingField();

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod const& __cordl_internal_get__compositionMethod_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod& __cordl_internal_get__compositionMethod_k__BackingField();

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality const& __cordl_internal_get__depthQuality_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality& __cordl_internal_get__depthQuality_k__BackingField();

  constexpr bool const& __cordl_internal_get__dynamicCullingMask_k__BackingField() const;

  constexpr bool& __cordl_internal_get__dynamicCullingMask_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicLightingDepthVariationClampingValue_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicLightingDepthVariationClampingValue_k__BackingField();

  constexpr float_t const& __cordl_internal_get__dynamicLightingSmoothFactor_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__dynamicLightingSmoothFactor_k__BackingField();

  constexpr bool const& __cordl_internal_get__enableMixedReality_k__BackingField() const;

  constexpr bool& __cordl_internal_get__enableMixedReality_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__externalCompositionBackdropColorQuest_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__externalCompositionBackdropColorQuest_k__BackingField();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__externalCompositionBackdropColorRift_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__externalCompositionBackdropColorRift_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__extraHiddenLayers_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__extraHiddenLayers_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__extraVisibleLayers_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__extraVisibleLayers_k__BackingField();

  constexpr bool const& __cordl_internal_get__flipCameraFrameHorizontally_k__BackingField() const;

  constexpr bool& __cordl_internal_get__flipCameraFrameHorizontally_k__BackingField();

  constexpr bool const& __cordl_internal_get__flipCameraFrameVertically_k__BackingField() const;

  constexpr bool& __cordl_internal_get__flipCameraFrameVertically_k__BackingField();

  constexpr float_t const& __cordl_internal_get__handPoseStateLatency_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__handPoseStateLatency_k__BackingField();

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__instantiateMixedRealityBackgroundCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*> const&
  __cordl_internal_get__instantiateMixedRealityBackgroundCameraGameObject() const;

  constexpr ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*& __cordl_internal_get__instantiateMixedRealityCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*> const& __cordl_internal_get__instantiateMixedRealityCameraGameObject() const;

  constexpr ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__instantiateMixedRealityForegroundCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>*> const&
  __cordl_internal_get__instantiateMixedRealityForegroundCameraGameObject() const;

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode const& __cordl_internal_get__mrcActivationMode_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode& __cordl_internal_get__mrcActivationMode_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__sandwichCompositionBufferedFrames_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__sandwichCompositionBufferedFrames_k__BackingField();

  constexpr float_t const& __cordl_internal_get__sandwichCompositionRenderLatency_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__sandwichCompositionRenderLatency_k__BackingField();

  constexpr bool const& __cordl_internal_get__useDynamicLighting_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useDynamicLighting_k__BackingField();

  constexpr bool const& __cordl_internal_get__virtualGreenScreenApplyDepthCulling_k__BackingField() const;

  constexpr bool& __cordl_internal_get__virtualGreenScreenApplyDepthCulling_k__BackingField();

  constexpr float_t const& __cordl_internal_get__virtualGreenScreenBottomY_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__virtualGreenScreenBottomY_k__BackingField();

  constexpr float_t const& __cordl_internal_get__virtualGreenScreenDepthTolerance_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__virtualGreenScreenDepthTolerance_k__BackingField();

  constexpr float_t const& __cordl_internal_get__virtualGreenScreenTopY_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__virtualGreenScreenTopY_k__BackingField();

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const& __cordl_internal_get__virtualGreenScreenType_k__BackingField() const;

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType& __cordl_internal_get__virtualGreenScreenType_k__BackingField();

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__capturingCameraDevice_k__BackingField(::GlobalNamespace::__OVRManager__CameraDevice value);

  constexpr void __cordl_internal_set__chromaKeyColor_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__chromaKeySimilarity_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__chromaKeySmoothRange_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__chromaKeySpillRange_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__compositionMethod_k__BackingField(::GlobalNamespace::__OVRManager__CompositionMethod value);

  constexpr void __cordl_internal_set__depthQuality_k__BackingField(::GlobalNamespace::__OVRManager__DepthQuality value);

  constexpr void __cordl_internal_set__dynamicCullingMask_k__BackingField(bool value);

  constexpr void __cordl_internal_set__dynamicLightingDepthVariationClampingValue_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__dynamicLightingSmoothFactor_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__enableMixedReality_k__BackingField(bool value);

  constexpr void __cordl_internal_set__externalCompositionBackdropColorQuest_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__externalCompositionBackdropColorRift_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__extraHiddenLayers_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__extraVisibleLayers_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__flipCameraFrameHorizontally_k__BackingField(bool value);

  constexpr void __cordl_internal_set__flipCameraFrameVertically_k__BackingField(bool value);

  constexpr void __cordl_internal_set__handPoseStateLatency_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__instantiateMixedRealityBackgroundCameraGameObject(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  constexpr void __cordl_internal_set__instantiateMixedRealityForegroundCameraGameObject(::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__mrcActivationMode_k__BackingField(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  constexpr void __cordl_internal_set__sandwichCompositionBufferedFrames_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__sandwichCompositionRenderLatency_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__useDynamicLighting_k__BackingField(bool value);

  constexpr void __cordl_internal_set__virtualGreenScreenApplyDepthCulling_k__BackingField(bool value);

  constexpr void __cordl_internal_set__virtualGreenScreenBottomY_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__virtualGreenScreenDepthTolerance_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__virtualGreenScreenTopY_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__virtualGreenScreenType_k__BackingField(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  /// @brief Method .ctor, addr 0x3973cfc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_capturingCameraDevice, addr 0x39738c0, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CameraDevice get_capturingCameraDevice();

  /// @brief Method get_chromaKeyColor, addr 0x3973928, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_chromaKeyColor();

  /// @brief Method get_chromaKeySimilarity, addr 0x3973940, size 0x8, virtual true, abstract: false, final true
  inline float_t get_chromaKeySimilarity();

  /// @brief Method get_chromaKeySmoothRange, addr 0x3973950, size 0x8, virtual true, abstract: false, final true
  inline float_t get_chromaKeySmoothRange();

  /// @brief Method get_chromaKeySpillRange, addr 0x3973960, size 0x8, virtual true, abstract: false, final true
  inline float_t get_chromaKeySpillRange();

  /// @brief Method get_compositionMethod, addr 0x3973880, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CompositionMethod get_compositionMethod();

  /// @brief Method get_depthQuality, addr 0x3973984, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__DepthQuality get_depthQuality();

  /// @brief Method get_dynamicCullingMask, addr 0x397386c, size 0x8, virtual true, abstract: false, final true
  inline bool get_dynamicCullingMask();

  /// @brief Method get_dynamicLightingDepthVariationClampingValue, addr 0x39739a4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method get_dynamicLightingSmoothFactor, addr 0x3973994, size 0x8, virtual true, abstract: false, final true
  inline float_t get_dynamicLightingSmoothFactor();

  /// @brief Method get_enableMixedReality, addr 0x3973838, size 0x8, virtual true, abstract: false, final true
  inline bool get_enableMixedReality();

  /// @brief Method get_externalCompositionBackdropColorQuest, addr 0x39738a8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_externalCompositionBackdropColorQuest();

  /// @brief Method get_externalCompositionBackdropColorRift, addr 0x3973890, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color get_externalCompositionBackdropColorRift();

  /// @brief Method get_extraHiddenLayers, addr 0x397384c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask get_extraHiddenLayers();

  /// @brief Method get_extraVisibleLayers, addr 0x397385c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask get_extraVisibleLayers();

  /// @brief Method get_flipCameraFrameHorizontally, addr 0x39738d0, size 0x8, virtual true, abstract: false, final true
  inline bool get_flipCameraFrameHorizontally();

  /// @brief Method get_flipCameraFrameVertically, addr 0x39738e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_flipCameraFrameVertically();

  /// @brief Method get_handPoseStateLatency, addr 0x39738f8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_handPoseStateLatency();

  /// @brief Method get_instantiateMixedRealityCameraGameObject, addr 0x3973a18, size 0x80, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* get_instantiateMixedRealityCameraGameObject();

  /// @brief Method get_mrcActivationMode, addr 0x3973a08, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__MrcActivationMode get_mrcActivationMode();

  /// @brief Method get_sandwichCompositionBufferedFrames, addr 0x3973918, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_sandwichCompositionBufferedFrames();

  /// @brief Method get_sandwichCompositionRenderLatency, addr 0x3973908, size 0x8, virtual true, abstract: false, final true
  inline float_t get_sandwichCompositionRenderLatency();

  /// @brief Method get_useDynamicLighting, addr 0x3973970, size 0x8, virtual true, abstract: false, final true
  inline bool get_useDynamicLighting();

  /// @brief Method get_virtualGreenScreenApplyDepthCulling, addr 0x39739e4, size 0x8, virtual true, abstract: false, final true
  inline bool get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method get_virtualGreenScreenBottomY, addr 0x39739d4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_virtualGreenScreenBottomY();

  /// @brief Method get_virtualGreenScreenDepthTolerance, addr 0x39739f8, size 0x8, virtual true, abstract: false, final true
  inline float_t get_virtualGreenScreenDepthTolerance();

  /// @brief Method get_virtualGreenScreenTopY, addr 0x39739c4, size 0x8, virtual true, abstract: false, final true
  inline float_t get_virtualGreenScreenTopY();

  /// @brief Method get_virtualGreenScreenType, addr 0x39739b4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__VirtualGreenScreenType get_virtualGreenScreenType();

  /// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept;

  /// @brief Method set_capturingCameraDevice, addr 0x39738c8, size 0x8, virtual true, abstract: false, final true
  inline void set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  /// @brief Method set_chromaKeyColor, addr 0x3973934, size 0xc, virtual true, abstract: false, final true
  inline void set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method set_chromaKeySimilarity, addr 0x3973948, size 0x8, virtual true, abstract: false, final true
  inline void set_chromaKeySimilarity(float_t value);

  /// @brief Method set_chromaKeySmoothRange, addr 0x3973958, size 0x8, virtual true, abstract: false, final true
  inline void set_chromaKeySmoothRange(float_t value);

  /// @brief Method set_chromaKeySpillRange, addr 0x3973968, size 0x8, virtual true, abstract: false, final true
  inline void set_chromaKeySpillRange(float_t value);

  /// @brief Method set_compositionMethod, addr 0x3973888, size 0x8, virtual true, abstract: false, final true
  inline void set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  /// @brief Method set_depthQuality, addr 0x397398c, size 0x8, virtual true, abstract: false, final true
  inline void set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  /// @brief Method set_dynamicCullingMask, addr 0x3973874, size 0xc, virtual true, abstract: false, final true
  inline void set_dynamicCullingMask(bool value);

  /// @brief Method set_dynamicLightingDepthVariationClampingValue, addr 0x39739ac, size 0x8, virtual true, abstract: false, final true
  inline void set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method set_dynamicLightingSmoothFactor, addr 0x397399c, size 0x8, virtual true, abstract: false, final true
  inline void set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method set_enableMixedReality, addr 0x3973840, size 0xc, virtual true, abstract: false, final true
  inline void set_enableMixedReality(bool value);

  /// @brief Method set_externalCompositionBackdropColorQuest, addr 0x39738b4, size 0xc, virtual true, abstract: false, final true
  inline void set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method set_externalCompositionBackdropColorRift, addr 0x397389c, size 0xc, virtual true, abstract: false, final true
  inline void set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method set_extraHiddenLayers, addr 0x3973854, size 0x8, virtual true, abstract: false, final true
  inline void set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_extraVisibleLayers, addr 0x3973864, size 0x8, virtual true, abstract: false, final true
  inline void set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_flipCameraFrameHorizontally, addr 0x39738d8, size 0xc, virtual true, abstract: false, final true
  inline void set_flipCameraFrameHorizontally(bool value);

  /// @brief Method set_flipCameraFrameVertically, addr 0x39738ec, size 0xc, virtual true, abstract: false, final true
  inline void set_flipCameraFrameVertically(bool value);

  /// @brief Method set_handPoseStateLatency, addr 0x3973900, size 0x8, virtual true, abstract: false, final true
  inline void set_handPoseStateLatency(float_t value);

  /// @brief Method set_instantiateMixedRealityCameraGameObject, addr 0x3973a98, size 0x4, virtual true, abstract: false, final true
  inline void set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  /// @brief Method set_mrcActivationMode, addr 0x3973a10, size 0x8, virtual true, abstract: false, final true
  inline void set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  /// @brief Method set_sandwichCompositionBufferedFrames, addr 0x3973920, size 0x8, virtual true, abstract: false, final true
  inline void set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method set_sandwichCompositionRenderLatency, addr 0x3973910, size 0x8, virtual true, abstract: false, final true
  inline void set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method set_useDynamicLighting, addr 0x3973978, size 0xc, virtual true, abstract: false, final true
  inline void set_useDynamicLighting(bool value);

  /// @brief Method set_virtualGreenScreenApplyDepthCulling, addr 0x39739ec, size 0xc, virtual true, abstract: false, final true
  inline void set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method set_virtualGreenScreenBottomY, addr 0x39739dc, size 0x8, virtual true, abstract: false, final true
  inline void set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method set_virtualGreenScreenDepthTolerance, addr 0x3973a00, size 0x8, virtual true, abstract: false, final true
  inline void set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method set_virtualGreenScreenTopY, addr 0x39739cc, size 0x8, virtual true, abstract: false, final true
  inline void set_virtualGreenScreenTopY(float_t value);

  /// @brief Method set_virtualGreenScreenType, addr 0x39739bc, size 0x8, virtual true, abstract: false, final true
  inline void set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusMRCManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusMRCManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusMRCManager(OculusMRCManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusMRCManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusMRCManager(OculusMRCManager const&) = delete;

  /// @brief Field _vrPlatformHelper, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _instantiateMixedRealityBackgroundCameraGameObject, offset: 0x28, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* ____instantiateMixedRealityBackgroundCameraGameObject;

  /// @brief Field _instantiateMixedRealityForegroundCameraGameObject, offset: 0x30, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::UnityEngine::GameObject>, ::UnityW<::UnityEngine::GameObject>>* ____instantiateMixedRealityForegroundCameraGameObject;

  /// @brief Field <enableMixedReality>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____enableMixedReality_k__BackingField;

  /// @brief Field <extraHiddenLayers>k__BackingField, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____extraHiddenLayers_k__BackingField;

  /// @brief Field <extraVisibleLayers>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____extraVisibleLayers_k__BackingField;

  /// @brief Field <dynamicCullingMask>k__BackingField, offset: 0x44, size: 0x1, def value: None
  bool ____dynamicCullingMask_k__BackingField;

  /// @brief Field <compositionMethod>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CompositionMethod ____compositionMethod_k__BackingField;

  /// @brief Field <externalCompositionBackdropColorRift>k__BackingField, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Color ____externalCompositionBackdropColorRift_k__BackingField;

  /// @brief Field <externalCompositionBackdropColorQuest>k__BackingField, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Color ____externalCompositionBackdropColorQuest_k__BackingField;

  /// @brief Field <capturingCameraDevice>k__BackingField, offset: 0x6c, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__CameraDevice ____capturingCameraDevice_k__BackingField;

  /// @brief Field <flipCameraFrameHorizontally>k__BackingField, offset: 0x70, size: 0x1, def value: None
  bool ____flipCameraFrameHorizontally_k__BackingField;

  /// @brief Field <flipCameraFrameVertically>k__BackingField, offset: 0x71, size: 0x1, def value: None
  bool ____flipCameraFrameVertically_k__BackingField;

  /// @brief Field <handPoseStateLatency>k__BackingField, offset: 0x74, size: 0x4, def value: None
  float_t ____handPoseStateLatency_k__BackingField;

  /// @brief Field <sandwichCompositionRenderLatency>k__BackingField, offset: 0x78, size: 0x4, def value: None
  float_t ____sandwichCompositionRenderLatency_k__BackingField;

  /// @brief Field <sandwichCompositionBufferedFrames>k__BackingField, offset: 0x7c, size: 0x4, def value: None
  int32_t ____sandwichCompositionBufferedFrames_k__BackingField;

  /// @brief Field <chromaKeyColor>k__BackingField, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____chromaKeyColor_k__BackingField;

  /// @brief Field <chromaKeySimilarity>k__BackingField, offset: 0x90, size: 0x4, def value: None
  float_t ____chromaKeySimilarity_k__BackingField;

  /// @brief Field <chromaKeySmoothRange>k__BackingField, offset: 0x94, size: 0x4, def value: None
  float_t ____chromaKeySmoothRange_k__BackingField;

  /// @brief Field <chromaKeySpillRange>k__BackingField, offset: 0x98, size: 0x4, def value: None
  float_t ____chromaKeySpillRange_k__BackingField;

  /// @brief Field <useDynamicLighting>k__BackingField, offset: 0x9c, size: 0x1, def value: None
  bool ____useDynamicLighting_k__BackingField;

  /// @brief Field <depthQuality>k__BackingField, offset: 0xa0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__DepthQuality ____depthQuality_k__BackingField;

  /// @brief Field <dynamicLightingSmoothFactor>k__BackingField, offset: 0xa4, size: 0x4, def value: None
  float_t ____dynamicLightingSmoothFactor_k__BackingField;

  /// @brief Field <dynamicLightingDepthVariationClampingValue>k__BackingField, offset: 0xa8, size: 0x4, def value: None
  float_t ____dynamicLightingDepthVariationClampingValue_k__BackingField;

  /// @brief Field <virtualGreenScreenType>k__BackingField, offset: 0xac, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__VirtualGreenScreenType ____virtualGreenScreenType_k__BackingField;

  /// @brief Field <virtualGreenScreenTopY>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  float_t ____virtualGreenScreenTopY_k__BackingField;

  /// @brief Field <virtualGreenScreenBottomY>k__BackingField, offset: 0xb4, size: 0x4, def value: None
  float_t ____virtualGreenScreenBottomY_k__BackingField;

  /// @brief Field <virtualGreenScreenApplyDepthCulling>k__BackingField, offset: 0xb8, size: 0x1, def value: None
  bool ____virtualGreenScreenApplyDepthCulling_k__BackingField;

  /// @brief Field <virtualGreenScreenDepthTolerance>k__BackingField, offset: 0xbc, size: 0x4, def value: None
  float_t ____virtualGreenScreenDepthTolerance_k__BackingField;

  /// @brief Field <mrcActivationMode>k__BackingField, offset: 0xc0, size: 0x4, def value: None
  ::GlobalNamespace::__OVRManager__MrcActivationMode ____mrcActivationMode_k__BackingField;

  /// @brief Field _instantiateMixedRealityCameraGameObject, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* ____instantiateMixedRealityCameraGameObject;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16430 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusMRCManager, 0xd0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____vrPlatformHelper) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____instantiateMixedRealityBackgroundCameraGameObject) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____instantiateMixedRealityForegroundCameraGameObject) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____enableMixedReality_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____extraHiddenLayers_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____extraVisibleLayers_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____dynamicCullingMask_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____compositionMethod_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____externalCompositionBackdropColorRift_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____externalCompositionBackdropColorQuest_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____capturingCameraDevice_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____flipCameraFrameHorizontally_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____flipCameraFrameVertically_k__BackingField) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____handPoseStateLatency_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____sandwichCompositionRenderLatency_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____sandwichCompositionBufferedFrames_k__BackingField) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____chromaKeyColor_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____chromaKeySimilarity_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____chromaKeySmoothRange_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____chromaKeySpillRange_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____useDynamicLighting_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____depthQuality_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____dynamicLightingSmoothFactor_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____dynamicLightingDepthVariationClampingValue_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____virtualGreenScreenType_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____virtualGreenScreenTopY_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____virtualGreenScreenBottomY_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____virtualGreenScreenApplyDepthCulling_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____virtualGreenScreenDepthTolerance_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____mrcActivationMode_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusMRCManager, ____instantiateMixedRealityCameraGameObject) == 0xc8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusMRCManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusMRCManager*, "", "OculusMRCManager");
