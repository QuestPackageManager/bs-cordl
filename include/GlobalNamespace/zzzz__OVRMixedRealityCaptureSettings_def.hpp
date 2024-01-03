#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(7640)), TypeDefinitionIndex(TypeDefinitionIndex(7643)),
// TypeDefinitionIndex(TypeDefinitionIndex(7641)), TypeDefinitionIndex(TypeDefinitionIndex(7644)), TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(7642)),
// TypeDefinitionIndex(TypeDefinitionIndex(10210))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8135)) CS Name: ::OVRMixedRealityCaptureSettings*
class CORDL_TYPE OVRMixedRealityCaptureSettings : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field enableMixedReality, offset 0x18, size 0x1
  __declspec(property(get = __get_enableMixedReality, put = __set_enableMixedReality)) bool enableMixedReality;

  /// @brief Field extraHiddenLayers, offset 0x1c, size 0x4
  __declspec(property(get = __get_extraHiddenLayers, put = __set_extraHiddenLayers))::UnityEngine::LayerMask extraHiddenLayers;

  /// @brief Field extraVisibleLayers, offset 0x20, size 0x4
  __declspec(property(get = __get_extraVisibleLayers, put = __set_extraVisibleLayers))::UnityEngine::LayerMask extraVisibleLayers;

  /// @brief Field dynamicCullingMask, offset 0x24, size 0x1
  __declspec(property(get = __get_dynamicCullingMask, put = __set_dynamicCullingMask)) bool dynamicCullingMask;

  /// @brief Field compositionMethod, offset 0x28, size 0x4
  __declspec(property(get = __get_compositionMethod, put = __set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod compositionMethod;

  /// @brief Field externalCompositionBackdropColorRift, offset 0x2c, size 0x10
  __declspec(property(get = __get_externalCompositionBackdropColorRift, put = __set_externalCompositionBackdropColorRift))::UnityEngine::Color externalCompositionBackdropColorRift;

  /// @brief Field externalCompositionBackdropColorQuest, offset 0x3c, size 0x10
  __declspec(property(get = __get_externalCompositionBackdropColorQuest, put = __set_externalCompositionBackdropColorQuest))::UnityEngine::Color externalCompositionBackdropColorQuest;

  /// @brief Field capturingCameraDevice, offset 0x4c, size 0x4
  __declspec(property(get = __get_capturingCameraDevice, put = __set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice capturingCameraDevice;

  /// @brief Field flipCameraFrameHorizontally, offset 0x50, size 0x1
  __declspec(property(get = __get_flipCameraFrameHorizontally, put = __set_flipCameraFrameHorizontally)) bool flipCameraFrameHorizontally;

  /// @brief Field flipCameraFrameVertically, offset 0x51, size 0x1
  __declspec(property(get = __get_flipCameraFrameVertically, put = __set_flipCameraFrameVertically)) bool flipCameraFrameVertically;

  /// @brief Field handPoseStateLatency, offset 0x54, size 0x4
  __declspec(property(get = __get_handPoseStateLatency, put = __set_handPoseStateLatency)) float_t handPoseStateLatency;

  /// @brief Field sandwichCompositionRenderLatency, offset 0x58, size 0x4
  __declspec(property(get = __get_sandwichCompositionRenderLatency, put = __set_sandwichCompositionRenderLatency)) float_t sandwichCompositionRenderLatency;

  /// @brief Field sandwichCompositionBufferedFrames, offset 0x5c, size 0x4
  __declspec(property(get = __get_sandwichCompositionBufferedFrames, put = __set_sandwichCompositionBufferedFrames)) int32_t sandwichCompositionBufferedFrames;

  /// @brief Field chromaKeyColor, offset 0x60, size 0x10
  __declspec(property(get = __get_chromaKeyColor, put = __set_chromaKeyColor))::UnityEngine::Color chromaKeyColor;

  /// @brief Field chromaKeySimilarity, offset 0x70, size 0x4
  __declspec(property(get = __get_chromaKeySimilarity, put = __set_chromaKeySimilarity)) float_t chromaKeySimilarity;

  /// @brief Field chromaKeySmoothRange, offset 0x74, size 0x4
  __declspec(property(get = __get_chromaKeySmoothRange, put = __set_chromaKeySmoothRange)) float_t chromaKeySmoothRange;

  /// @brief Field chromaKeySpillRange, offset 0x78, size 0x4
  __declspec(property(get = __get_chromaKeySpillRange, put = __set_chromaKeySpillRange)) float_t chromaKeySpillRange;

  /// @brief Field useDynamicLighting, offset 0x7c, size 0x1
  __declspec(property(get = __get_useDynamicLighting, put = __set_useDynamicLighting)) bool useDynamicLighting;

  /// @brief Field depthQuality, offset 0x80, size 0x4
  __declspec(property(get = __get_depthQuality, put = __set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality depthQuality;

  /// @brief Field dynamicLightingSmoothFactor, offset 0x84, size 0x4
  __declspec(property(get = __get_dynamicLightingSmoothFactor, put = __set_dynamicLightingSmoothFactor)) float_t dynamicLightingSmoothFactor;

  /// @brief Field dynamicLightingDepthVariationClampingValue, offset 0x88, size 0x4
  __declspec(property(get = __get_dynamicLightingDepthVariationClampingValue, put = __set_dynamicLightingDepthVariationClampingValue)) float_t dynamicLightingDepthVariationClampingValue;

  /// @brief Field virtualGreenScreenType, offset 0x8c, size 0x4
  __declspec(property(get = __get_virtualGreenScreenType, put = __set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType virtualGreenScreenType;

  /// @brief Field virtualGreenScreenTopY, offset 0x90, size 0x4
  __declspec(property(get = __get_virtualGreenScreenTopY, put = __set_virtualGreenScreenTopY)) float_t virtualGreenScreenTopY;

  /// @brief Field virtualGreenScreenBottomY, offset 0x94, size 0x4
  __declspec(property(get = __get_virtualGreenScreenBottomY, put = __set_virtualGreenScreenBottomY)) float_t virtualGreenScreenBottomY;

  /// @brief Field virtualGreenScreenApplyDepthCulling, offset 0x98, size 0x1
  __declspec(property(get = __get_virtualGreenScreenApplyDepthCulling, put = __set_virtualGreenScreenApplyDepthCulling)) bool virtualGreenScreenApplyDepthCulling;

  /// @brief Field virtualGreenScreenDepthTolerance, offset 0x9c, size 0x4
  __declspec(property(get = __get_virtualGreenScreenDepthTolerance, put = __set_virtualGreenScreenDepthTolerance)) float_t virtualGreenScreenDepthTolerance;

  /// @brief Field mrcActivationMode, offset 0xa0, size 0x4
  __declspec(property(get = __get_mrcActivationMode, put = __set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode mrcActivationMode;

  /// @brief Field <OVRMixedRealityCaptureConfiguration.instantiateMixedRealityCameraGameObject>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField,
                      put = __set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField))::GlobalNamespace::
      __OVRManager__InstantiateMrcCameraDelegate* _OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_enableMixedReality,
                      put = OVRMixedRealityCaptureConfiguration_set_enableMixedReality)) bool OVRMixedRealityCaptureConfiguration_enableMixedReality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraHiddenLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers,
                      put = OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers))::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_extraVisibleLayers;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask)) bool OVRMixedRealityCaptureConfiguration_dynamicCullingMask;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_compositionMethod,
                      put = OVRMixedRealityCaptureConfiguration_set_compositionMethod))::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_compositionMethod;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorRift;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest,
                      put = OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest))::UnityEngine::Color
      OVRMixedRealityCaptureConfiguration_externalCompositionBackdropColorQuest;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice,
                      put = OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice))::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_capturingCameraDevice;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameHorizontally;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically,
                      put = OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically)) bool OVRMixedRealityCaptureConfiguration_flipCameraFrameVertically;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency)) float_t OVRMixedRealityCaptureConfiguration_handPoseStateLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency)) float_t OVRMixedRealityCaptureConfiguration_sandwichCompositionRenderLatency;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames,
                      put = OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames)) int32_t OVRMixedRealityCaptureConfiguration_sandwichCompositionBufferedFrames;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeyColor,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeyColor))::UnityEngine::Color OVRMixedRealityCaptureConfiguration_chromaKeyColor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySimilarity;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySmoothRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange,
                      put = OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange)) float_t OVRMixedRealityCaptureConfiguration_chromaKeySpillRange;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_useDynamicLighting,
                      put = OVRMixedRealityCaptureConfiguration_set_useDynamicLighting)) bool OVRMixedRealityCaptureConfiguration_useDynamicLighting;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_depthQuality,
                      put = OVRMixedRealityCaptureConfiguration_set_depthQuality))::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_depthQuality;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingSmoothFactor;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue,
                      put = OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue)) float_t OVRMixedRealityCaptureConfiguration_dynamicLightingDepthVariationClampingValue;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType))::GlobalNamespace::__OVRManager__VirtualGreenScreenType
      OVRMixedRealityCaptureConfiguration_virtualGreenScreenType;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenTopY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenBottomY;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling)) bool OVRMixedRealityCaptureConfiguration_virtualGreenScreenApplyDepthCulling;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance,
                      put = OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance)) float_t OVRMixedRealityCaptureConfiguration_virtualGreenScreenDepthTolerance;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_mrcActivationMode,
                      put = OVRMixedRealityCaptureConfiguration_set_mrcActivationMode))::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_mrcActivationMode;

  __declspec(property(get = OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject, put = OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject))::
      GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject;

  /// @brief Convert operator to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr operator ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*() noexcept;

  /// @brief Convert to "::GlobalNamespace::OVRMixedRealityCaptureConfiguration"
  constexpr ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* i___GlobalNamespace__OVRMixedRealityCaptureConfiguration() noexcept;

  constexpr bool& __get_enableMixedReality();

  constexpr bool const& __get_enableMixedReality() const;

  constexpr void __set_enableMixedReality(bool value);

  constexpr ::UnityEngine::LayerMask& __get_extraHiddenLayers();

  constexpr ::UnityEngine::LayerMask const& __get_extraHiddenLayers() const;

  constexpr void __set_extraHiddenLayers(::UnityEngine::LayerMask value);

  constexpr ::UnityEngine::LayerMask& __get_extraVisibleLayers();

  constexpr ::UnityEngine::LayerMask const& __get_extraVisibleLayers() const;

  constexpr void __set_extraVisibleLayers(::UnityEngine::LayerMask value);

  constexpr bool& __get_dynamicCullingMask();

  constexpr bool const& __get_dynamicCullingMask() const;

  constexpr void __set_dynamicCullingMask(bool value);

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod& __get_compositionMethod();

  constexpr ::GlobalNamespace::__OVRManager__CompositionMethod const& __get_compositionMethod() const;

  constexpr void __set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  constexpr ::UnityEngine::Color& __get_externalCompositionBackdropColorRift();

  constexpr ::UnityEngine::Color const& __get_externalCompositionBackdropColorRift() const;

  constexpr void __set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get_externalCompositionBackdropColorQuest();

  constexpr ::UnityEngine::Color const& __get_externalCompositionBackdropColorQuest() const;

  constexpr void __set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice& __get_capturingCameraDevice();

  constexpr ::GlobalNamespace::__OVRManager__CameraDevice const& __get_capturingCameraDevice() const;

  constexpr void __set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  constexpr bool& __get_flipCameraFrameHorizontally();

  constexpr bool const& __get_flipCameraFrameHorizontally() const;

  constexpr void __set_flipCameraFrameHorizontally(bool value);

  constexpr bool& __get_flipCameraFrameVertically();

  constexpr bool const& __get_flipCameraFrameVertically() const;

  constexpr void __set_flipCameraFrameVertically(bool value);

  constexpr float_t& __get_handPoseStateLatency();

  constexpr float_t const& __get_handPoseStateLatency() const;

  constexpr void __set_handPoseStateLatency(float_t value);

  constexpr float_t& __get_sandwichCompositionRenderLatency();

  constexpr float_t const& __get_sandwichCompositionRenderLatency() const;

  constexpr void __set_sandwichCompositionRenderLatency(float_t value);

  constexpr int32_t& __get_sandwichCompositionBufferedFrames();

  constexpr int32_t const& __get_sandwichCompositionBufferedFrames() const;

  constexpr void __set_sandwichCompositionBufferedFrames(int32_t value);

  constexpr ::UnityEngine::Color& __get_chromaKeyColor();

  constexpr ::UnityEngine::Color const& __get_chromaKeyColor() const;

  constexpr void __set_chromaKeyColor(::UnityEngine::Color value);

  constexpr float_t& __get_chromaKeySimilarity();

  constexpr float_t const& __get_chromaKeySimilarity() const;

  constexpr void __set_chromaKeySimilarity(float_t value);

  constexpr float_t& __get_chromaKeySmoothRange();

  constexpr float_t const& __get_chromaKeySmoothRange() const;

  constexpr void __set_chromaKeySmoothRange(float_t value);

  constexpr float_t& __get_chromaKeySpillRange();

  constexpr float_t const& __get_chromaKeySpillRange() const;

  constexpr void __set_chromaKeySpillRange(float_t value);

  constexpr bool& __get_useDynamicLighting();

  constexpr bool const& __get_useDynamicLighting() const;

  constexpr void __set_useDynamicLighting(bool value);

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality& __get_depthQuality();

  constexpr ::GlobalNamespace::__OVRManager__DepthQuality const& __get_depthQuality() const;

  constexpr void __set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  constexpr float_t& __get_dynamicLightingSmoothFactor();

  constexpr float_t const& __get_dynamicLightingSmoothFactor() const;

  constexpr void __set_dynamicLightingSmoothFactor(float_t value);

  constexpr float_t& __get_dynamicLightingDepthVariationClampingValue();

  constexpr float_t const& __get_dynamicLightingDepthVariationClampingValue() const;

  constexpr void __set_dynamicLightingDepthVariationClampingValue(float_t value);

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType& __get_virtualGreenScreenType();

  constexpr ::GlobalNamespace::__OVRManager__VirtualGreenScreenType const& __get_virtualGreenScreenType() const;

  constexpr void __set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  constexpr float_t& __get_virtualGreenScreenTopY();

  constexpr float_t const& __get_virtualGreenScreenTopY() const;

  constexpr void __set_virtualGreenScreenTopY(float_t value);

  constexpr float_t& __get_virtualGreenScreenBottomY();

  constexpr float_t const& __get_virtualGreenScreenBottomY() const;

  constexpr void __set_virtualGreenScreenBottomY(float_t value);

  constexpr bool& __get_virtualGreenScreenApplyDepthCulling();

  constexpr bool const& __get_virtualGreenScreenApplyDepthCulling() const;

  constexpr void __set_virtualGreenScreenApplyDepthCulling(bool value);

  constexpr float_t& __get_virtualGreenScreenDepthTolerance();

  constexpr float_t const& __get_virtualGreenScreenDepthTolerance() const;

  constexpr void __set_virtualGreenScreenDepthTolerance(float_t value);

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode& __get_mrcActivationMode();

  constexpr ::GlobalNamespace::__OVRManager__MrcActivationMode const& __get_mrcActivationMode() const;

  constexpr void __set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  constexpr ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*& __get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate*> const&
  __get__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField() const;

  constexpr void __set__OVRMixedRealityCaptureConfiguration_instantiateMixedRealityCameraGameObject_k__BackingField(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_enableMixedReality, addr 0x27b3408, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_enableMixedReality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_enableMixedReality, addr 0x27b3410, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_enableMixedReality(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraHiddenLayers, addr 0x27b341c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraHiddenLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraHiddenLayers, addr 0x27b3424, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraHiddenLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_extraVisibleLayers, addr 0x27b342c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::LayerMask OVRMixedRealityCaptureConfiguration_get_extraVisibleLayers();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_extraVisibleLayers, addr 0x27b3434, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_extraVisibleLayers(::UnityEngine::LayerMask value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicCullingMask, addr 0x27b343c, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_dynamicCullingMask();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicCullingMask, addr 0x27b3444, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicCullingMask(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_compositionMethod, addr 0x27b3450, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CompositionMethod OVRMixedRealityCaptureConfiguration_get_compositionMethod();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_compositionMethod, addr 0x27b3458, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_compositionMethod(::GlobalNamespace::__OVRManager__CompositionMethod value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorRift, addr 0x27b3460, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorRift();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorRift, addr 0x27b346c, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorRift(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_externalCompositionBackdropColorQuest, addr 0x27b3478, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_externalCompositionBackdropColorQuest();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_externalCompositionBackdropColorQuest, addr 0x27b3484, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_externalCompositionBackdropColorQuest(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_capturingCameraDevice, addr 0x27b3490, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__CameraDevice OVRMixedRealityCaptureConfiguration_get_capturingCameraDevice();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_capturingCameraDevice, addr 0x27b3498, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_capturingCameraDevice(::GlobalNamespace::__OVRManager__CameraDevice value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameHorizontally, addr 0x27b34a0, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameHorizontally();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameHorizontally, addr 0x27b34a8, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameHorizontally(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_flipCameraFrameVertically, addr 0x27b34b4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_flipCameraFrameVertically();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_flipCameraFrameVertically, addr 0x27b34bc, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_flipCameraFrameVertically(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_handPoseStateLatency, addr 0x27b34c8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_handPoseStateLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_handPoseStateLatency, addr 0x27b34d0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_handPoseStateLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionRenderLatency, addr 0x27b34d8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionRenderLatency();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionRenderLatency, addr 0x27b34e0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionRenderLatency(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_sandwichCompositionBufferedFrames, addr 0x27b34e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t OVRMixedRealityCaptureConfiguration_get_sandwichCompositionBufferedFrames();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_sandwichCompositionBufferedFrames, addr 0x27b34f0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_sandwichCompositionBufferedFrames(int32_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeyColor, addr 0x27b34f8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Color OVRMixedRealityCaptureConfiguration_get_chromaKeyColor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeyColor, addr 0x27b3504, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeyColor(::UnityEngine::Color value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySimilarity, addr 0x27b3510, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySimilarity();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySimilarity, addr 0x27b3518, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySimilarity(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySmoothRange, addr 0x27b3520, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySmoothRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySmoothRange, addr 0x27b3528, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySmoothRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_chromaKeySpillRange, addr 0x27b3530, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_chromaKeySpillRange();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_chromaKeySpillRange, addr 0x27b3538, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_chromaKeySpillRange(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_useDynamicLighting, addr 0x27b3540, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_useDynamicLighting();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_useDynamicLighting, addr 0x27b3548, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_useDynamicLighting(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_depthQuality, addr 0x27b3554, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__DepthQuality OVRMixedRealityCaptureConfiguration_get_depthQuality();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_depthQuality, addr 0x27b355c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_depthQuality(::GlobalNamespace::__OVRManager__DepthQuality value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingSmoothFactor, addr 0x27b3564, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingSmoothFactor();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingSmoothFactor, addr 0x27b356c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingSmoothFactor(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_dynamicLightingDepthVariationClampingValue, addr 0x27b3574, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_dynamicLightingDepthVariationClampingValue();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_dynamicLightingDepthVariationClampingValue, addr 0x27b357c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_dynamicLightingDepthVariationClampingValue(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenType, addr 0x27b3584, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__VirtualGreenScreenType OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenType();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenType, addr 0x27b358c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenType(::GlobalNamespace::__OVRManager__VirtualGreenScreenType value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenTopY, addr 0x27b3594, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenTopY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenTopY, addr 0x27b359c, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenTopY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenBottomY, addr 0x27b35a4, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenBottomY();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenBottomY, addr 0x27b35ac, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenBottomY(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenApplyDepthCulling, addr 0x27b35b4, size 0x8, virtual true, abstract: false, final true
  inline bool OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenApplyDepthCulling();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenApplyDepthCulling, addr 0x27b35bc, size 0xc, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenApplyDepthCulling(bool value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_virtualGreenScreenDepthTolerance, addr 0x27b35c8, size 0x8, virtual true, abstract: false, final true
  inline float_t OVRMixedRealityCaptureConfiguration_get_virtualGreenScreenDepthTolerance();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_virtualGreenScreenDepthTolerance, addr 0x27b35d0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_virtualGreenScreenDepthTolerance(float_t value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_mrcActivationMode, addr 0x27b35d8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__MrcActivationMode OVRMixedRealityCaptureConfiguration_get_mrcActivationMode();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_mrcActivationMode, addr 0x27b35e0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_mrcActivationMode(::GlobalNamespace::__OVRManager__MrcActivationMode value);

  /// @brief Method OVRMixedRealityCaptureConfiguration.get_instantiateMixedRealityCameraGameObject, addr 0x27b35e8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* OVRMixedRealityCaptureConfiguration_get_instantiateMixedRealityCameraGameObject();

  /// @brief Method OVRMixedRealityCaptureConfiguration.set_instantiateMixedRealityCameraGameObject, addr 0x27b35f0, size 0x8, virtual true, abstract: false, final true
  inline void OVRMixedRealityCaptureConfiguration_set_instantiateMixedRealityCameraGameObject(::GlobalNamespace::__OVRManager__InstantiateMrcCameraDelegate* value);

  static inline ::GlobalNamespace::OVRMixedRealityCaptureSettings* New_ctor();

  /// @brief Method .ctor, addr 0x27b35f8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRMixedRealityCaptureSettings(OVRMixedRealityCaptureSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRMixedRealityCaptureSettings();

public:
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
