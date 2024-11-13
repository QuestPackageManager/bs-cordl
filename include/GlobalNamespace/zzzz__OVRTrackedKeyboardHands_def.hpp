#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTrackedKeyboardHands.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSkeleton_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTrackedKeyboardHands)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__HandBoneMapping;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTrackedKeyboardHands;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__HandBoneMapping;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTrackedKeyboardHands);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping);
MARK_VAL_T(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent);
// Type: ::HandBoneMapping
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTrackedKeyboardHands::HandBoneMapping
struct CORDL_TYPE __OVRTrackedKeyboardHands__HandBoneMapping {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboardHands__HandBoneMapping();

  // Ctor Parameters [CppParam { name: "LeftHandTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "LeftPresenceTransform", ty:
  // "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "RightHandTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam
  // { name: "RightPresenceTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None }, CppParam { name: "BoneName", ty: "::GlobalNamespace::__OVRSkeleton__BoneId",
  // modifiers: "", def_value: None }, CppParam { name: "HandPresenceLeftBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HandPresenceRightBoneName", ty: "::StringW",
  // modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboardHands__HandBoneMapping(::UnityW<::UnityEngine::Transform> LeftHandTransform, ::UnityW<::UnityEngine::Transform> LeftPresenceTransform,
                                                       ::UnityW<::UnityEngine::Transform> RightHandTransform, ::UnityW<::UnityEngine::Transform> RightPresenceTransform,
                                                       ::GlobalNamespace::__OVRSkeleton__BoneId BoneName, ::StringW HandPresenceLeftBoneName, ::StringW HandPresenceRightBoneName) noexcept;

  /// @brief Field LeftHandTransform, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> LeftHandTransform;

  /// @brief Field LeftPresenceTransform, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> LeftPresenceTransform;

  /// @brief Field RightHandTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> RightHandTransform;

  /// @brief Field RightPresenceTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> RightPresenceTransform;

  /// @brief Field BoneName, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeleton__BoneId BoneName;

  /// @brief Field HandPresenceLeftBoneName, offset: 0x28, size: 0x8, def value: None
  ::StringW HandPresenceLeftBoneName;

  /// @brief Field HandPresenceRightBoneName, offset: 0x30, size: 0x8, def value: None
  ::StringW HandPresenceRightBoneName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8325 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, LeftHandTransform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, LeftPresenceTransform) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, RightHandTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, RightPresenceTransform) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, BoneName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, HandPresenceLeftBoneName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, HandPresenceRightBoneName) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardHandsVisibilityChangedEvent
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRTrackedKeyboardHands::TrackedKeyboardHandsVisibilityChangedEvent
struct CORDL_TYPE __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent();

  // Ctor Parameters [CppParam { name: "leftVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rightVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(bool leftVisible, bool rightVisible) noexcept;

  /// @brief Field leftVisible, offset: 0x0, size: 0x1, def value: None
  bool leftVisible;

  /// @brief Field rightVisible, offset: 0x1, size: 0x1, def value: None
  bool rightVisible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8326 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, 0x2>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, leftVisible) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, rightVisible) == 0x1, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTrackedKeyboardHands
// SizeInfo { instance_size: 224, native_size: -1, calculated_instance_size: 224, calculated_native_size: 220, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRTrackedKeyboardHands*
class CORDL_TYPE OVRTrackedKeyboardHands : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HandBoneMapping = ::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping;

  using TrackedKeyboardHandsVisibilityChangedEvent = ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;

  __declspec(property(get = get_AreControllersActive)) bool AreControllersActive;

  /// @brief Field HandsMaterial, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_HandsMaterial, put = __cordl_internal_set_HandsMaterial)) ::UnityW<::UnityEngine::Material> HandsMaterial;

  /// @brief Field KeyboardTracker, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_KeyboardTracker, put = __cordl_internal_set_KeyboardTracker)) ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> KeyboardTracker;

  __declspec(property(get = get_LeftHandOverKeyboard, put = set_LeftHandOverKeyboard)) bool LeftHandOverKeyboard;

  /// @brief Field LeftHandPresence, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_LeftHandPresence, put = __cordl_internal_set_LeftHandPresence)) ::UnityW<::UnityEngine::GameObject> LeftHandPresence;

  __declspec(property(get = get_RightHandOverKeyboard, put = set_RightHandOverKeyboard)) bool RightHandOverKeyboard;

  /// @brief Field RightHandPresence, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_RightHandPresence, put = __cordl_internal_set_RightHandPresence)) ::UnityW<::UnityEngine::GameObject> RightHandPresence;

  /// @brief Field <LeftHandOverKeyboard>k__BackingField, offset 0xb9, size 0x1
  __declspec(property(get = __cordl_internal_get__LeftHandOverKeyboard_k__BackingField, put = __cordl_internal_set__LeftHandOverKeyboard_k__BackingField)) bool _LeftHandOverKeyboard_k__BackingField;

  /// @brief Field <RightHandOverKeyboard>k__BackingField, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__RightHandOverKeyboard_k__BackingField,
                      put = __cordl_internal_set__RightHandOverKeyboard_k__BackingField)) bool _RightHandOverKeyboard_k__BackingField;

  /// @brief Field boneMappings_, offset 0xc0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_boneMappings_,
      put = __cordl_internal_set_boneMappings_)) ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*>
      boneMappings_;

  /// @brief Field cameraRig_, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraRig_, put = __cordl_internal_set_cameraRig_)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraRig_;

  /// @brief Field handInnerAlphaThreshold_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_handInnerAlphaThreshold_, put = setStaticF_handInnerAlphaThreshold_)) float_t handInnerAlphaThreshold_;

  /// @brief Field handOuterAlphaThreshold_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_handOuterAlphaThreshold_, put = setStaticF_handOuterAlphaThreshold_)) float_t handOuterAlphaThreshold_;

  /// @brief Field handPresenceInitialized_, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_handPresenceInitialized_, put = __cordl_internal_set_handPresenceInitialized_)) bool handPresenceInitialized_;

  /// @brief Field keyboardPositionID_, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardPositionID_, put = __cordl_internal_set_keyboardPositionID_)) int32_t keyboardPositionID_;

  /// @brief Field keyboardRotationID_, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardRotationID_, put = __cordl_internal_set_keyboardRotationID_)) int32_t keyboardRotationID_;

  /// @brief Field keyboardScaleID_, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_keyboardScaleID_, put = __cordl_internal_set_keyboardScaleID_)) int32_t keyboardScaleID_;

  /// @brief Field lastVisibilityEvent_, offset 0xba, size 0x3
  __declspec(property(get = __cordl_internal_get_lastVisibilityEvent_,
                      put = __cordl_internal_set_lastVisibilityEvent_)) ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>
      lastVisibilityEvent_;

  /// @brief Field leftHandMeshRenderer_, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandMeshRenderer_, put = __cordl_internal_set_leftHandMeshRenderer_)) ::UnityW<::GlobalNamespace::OVRMeshRenderer> leftHandMeshRenderer_;

  /// @brief Field leftHandRoot_, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandRoot_, put = __cordl_internal_set_leftHandRoot_)) ::UnityW<::UnityEngine::Transform> leftHandRoot_;

  /// @brief Field leftHandSkeletonRendererGO_, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandSkeletonRendererGO_, put = __cordl_internal_set_leftHandSkeletonRendererGO_)) ::UnityW<::UnityEngine::GameObject> leftHandSkeletonRendererGO_;

  /// @brief Field leftHandSkeletonRenderer_, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandSkeletonRenderer_, put = __cordl_internal_set_leftHandSkeletonRenderer_)) ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>
      leftHandSkeletonRenderer_;

  /// @brief Field leftHandSkeleton_, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandSkeleton_, put = __cordl_internal_set_leftHandSkeleton_)) ::UnityW<::GlobalNamespace::OVRSkeleton> leftHandSkeleton_;

  /// @brief Field leftHandSkinnedMeshRenderer_, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHandSkinnedMeshRenderer_, put = __cordl_internal_set_leftHandSkinnedMeshRenderer_)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>
      leftHandSkinnedMeshRenderer_;

  /// @brief Field leftHand_, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_leftHand_, put = __cordl_internal_set_leftHand_)) ::UnityW<::GlobalNamespace::OVRHand> leftHand_;

  /// @brief Field maximumPassthroughHandsDistance_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maximumPassthroughHandsDistance_, put = setStaticF_maximumPassthroughHandsDistance_)) float_t maximumPassthroughHandsDistance_;

  /// @brief Field minimumModelHandsDistance_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_minimumModelHandsDistance_, put = setStaticF_minimumModelHandsDistance_)) float_t minimumModelHandsDistance_;

  /// @brief Field rightHandMeshRenderer_, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandMeshRenderer_, put = __cordl_internal_set_rightHandMeshRenderer_)) ::UnityW<::GlobalNamespace::OVRMeshRenderer> rightHandMeshRenderer_;

  /// @brief Field rightHandRoot_, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandRoot_, put = __cordl_internal_set_rightHandRoot_)) ::UnityW<::UnityEngine::Transform> rightHandRoot_;

  /// @brief Field rightHandSkeletonRendererGO_, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandSkeletonRendererGO_, put = __cordl_internal_set_rightHandSkeletonRendererGO_)) ::UnityW<::UnityEngine::GameObject>
      rightHandSkeletonRendererGO_;

  /// @brief Field rightHandSkeletonRenderer_, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandSkeletonRenderer_, put = __cordl_internal_set_rightHandSkeletonRenderer_)) ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>
      rightHandSkeletonRenderer_;

  /// @brief Field rightHandSkeleton_, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandSkeleton_, put = __cordl_internal_set_rightHandSkeleton_)) ::UnityW<::GlobalNamespace::OVRSkeleton> rightHandSkeleton_;

  /// @brief Field rightHandSkinnedMeshRenderer_, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHandSkinnedMeshRenderer_, put = __cordl_internal_set_rightHandSkinnedMeshRenderer_)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>
      rightHandSkinnedMeshRenderer_;

  /// @brief Field rightHand_, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_rightHand_, put = __cordl_internal_set_rightHand_)) ::UnityW<::GlobalNamespace::OVRHand> rightHand_;

  /// @brief Method Awake, addr 0x3fbd22c, size 0x1dc, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method ComputeOpacity, addr 0x3fbe740, size 0x24, virtual false, abstract: false, final false
  inline float_t ComputeOpacity(float_t distance, float_t innerThreshold, float_t outerThreshold);

  /// @brief Method DisableHandObjects, addr 0x3fbe0a4, size 0xec, virtual false, abstract: false, final false
  inline void DisableHandObjects();

  /// @brief Method GetHandDistanceToKeyboard, addr 0x3fbe190, size 0x2d0, virtual false, abstract: false, final false
  inline float_t GetHandDistanceToKeyboard(::GlobalNamespace::OVRSkeleton* handSkeleton);

  /// @brief Method LateUpdate, addr 0x3fbd8b8, size 0x7ec, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::GlobalNamespace::OVRTrackedKeyboardHands* New_ctor();

  /// @brief Method RetargetHandTrackingToHandPresence, addr 0x3fbd70c, size 0x170, virtual false, abstract: false, final false
  inline void RetargetHandTrackingToHandPresence();

  /// @brief Method SetHandModelsEnabled, addr 0x3fbe538, size 0x208, virtual false, abstract: false, final false
  inline void SetHandModelsEnabled(bool enableLeftModel, bool enableRightModel);

  /// @brief Method ShouldEnableModel, addr 0x3fbe4cc, size 0x6c, virtual false, abstract: false, final false
  inline bool ShouldEnableModel(float_t distance);

  /// @brief Method ShouldEnablePassthrough, addr 0x3fbe460, size 0x6c, virtual false, abstract: false, final false
  inline bool ShouldEnablePassthrough(float_t distance);

  /// @brief Method Start, addr 0x3fbd408, size 0x304, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method StopHandPresence, addr 0x3fbe764, size 0x30, virtual false, abstract: false, final false
  inline void StopHandPresence();

  /// @brief Method TrackedKeyboardActiveUpdated, addr 0x3fbe794, size 0xc, virtual false, abstract: false, final false
  inline void TrackedKeyboardActiveUpdated(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent e);

  /// @brief Method TrackedKeyboardVisibilityChanged, addr 0x3fbe7a0, size 0x198, virtual false, abstract: false, final false
  inline void TrackedKeyboardVisibilityChanged(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent e);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_HandsMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_HandsMaterial();

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> const& __cordl_internal_get_KeyboardTracker() const;

  constexpr ::UnityW<::GlobalNamespace::OVRTrackedKeyboard>& __cordl_internal_get_KeyboardTracker();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_LeftHandPresence() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_LeftHandPresence();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_RightHandPresence() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_RightHandPresence();

  constexpr bool const& __cordl_internal_get__LeftHandOverKeyboard_k__BackingField() const;

  constexpr bool& __cordl_internal_get__LeftHandOverKeyboard_k__BackingField();

  constexpr bool const& __cordl_internal_get__RightHandOverKeyboard_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RightHandOverKeyboard_k__BackingField();

  constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> const&
  __cordl_internal_get_boneMappings_() const;

  constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*>& __cordl_internal_get_boneMappings_();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraRig_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraRig_();

  constexpr bool const& __cordl_internal_get_handPresenceInitialized_() const;

  constexpr bool& __cordl_internal_get_handPresenceInitialized_();

  constexpr int32_t const& __cordl_internal_get_keyboardPositionID_() const;

  constexpr int32_t& __cordl_internal_get_keyboardPositionID_();

  constexpr int32_t const& __cordl_internal_get_keyboardRotationID_() const;

  constexpr int32_t& __cordl_internal_get_keyboardRotationID_();

  constexpr int32_t const& __cordl_internal_get_keyboardScaleID_() const;

  constexpr int32_t& __cordl_internal_get_keyboardScaleID_();

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> const& __cordl_internal_get_lastVisibilityEvent_() const;

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>& __cordl_internal_get_lastVisibilityEvent_();

  constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer> const& __cordl_internal_get_leftHandMeshRenderer_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer>& __cordl_internal_get_leftHandMeshRenderer_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandRoot_() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandRoot_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftHandSkeletonRendererGO_() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftHandSkeletonRendererGO_();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> const& __cordl_internal_get_leftHandSkeletonRenderer_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>& __cordl_internal_get_leftHandSkeletonRenderer_();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_leftHandSkeleton_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_leftHandSkeleton_();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_leftHandSkinnedMeshRenderer_() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_leftHandSkinnedMeshRenderer_();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_leftHand_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_leftHand_();

  constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer> const& __cordl_internal_get_rightHandMeshRenderer_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMeshRenderer>& __cordl_internal_get_rightHandMeshRenderer_();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandRoot_() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandRoot_();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightHandSkeletonRendererGO_() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightHandSkeletonRendererGO_();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> const& __cordl_internal_get_rightHandSkeletonRenderer_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeletonRenderer>& __cordl_internal_get_rightHandSkeletonRenderer_();

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton> const& __cordl_internal_get_rightHandSkeleton_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRSkeleton>& __cordl_internal_get_rightHandSkeleton_();

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_rightHandSkinnedMeshRenderer_() const;

  constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_rightHandSkinnedMeshRenderer_();

  constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get_rightHand_() const;

  constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get_rightHand_();

  constexpr void __cordl_internal_set_HandsMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_KeyboardTracker(::UnityW<::GlobalNamespace::OVRTrackedKeyboard> value);

  constexpr void __cordl_internal_set_LeftHandPresence(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_RightHandPresence(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__LeftHandOverKeyboard_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RightHandOverKeyboard_k__BackingField(bool value);

  constexpr void
  __cordl_internal_set_boneMappings_(::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> value);

  constexpr void __cordl_internal_set_cameraRig_(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_handPresenceInitialized_(bool value);

  constexpr void __cordl_internal_set_keyboardPositionID_(int32_t value);

  constexpr void __cordl_internal_set_keyboardRotationID_(int32_t value);

  constexpr void __cordl_internal_set_keyboardScaleID_(int32_t value);

  constexpr void __cordl_internal_set_lastVisibilityEvent_(::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> value);

  constexpr void __cordl_internal_set_leftHandMeshRenderer_(::UnityW<::GlobalNamespace::OVRMeshRenderer> value);

  constexpr void __cordl_internal_set_leftHandRoot_(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_leftHandSkeletonRendererGO_(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_leftHandSkeletonRenderer_(::UnityW<::GlobalNamespace::OVRSkeletonRenderer> value);

  constexpr void __cordl_internal_set_leftHandSkeleton_(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  constexpr void __cordl_internal_set_leftHandSkinnedMeshRenderer_(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set_leftHand_(::UnityW<::GlobalNamespace::OVRHand> value);

  constexpr void __cordl_internal_set_rightHandMeshRenderer_(::UnityW<::GlobalNamespace::OVRMeshRenderer> value);

  constexpr void __cordl_internal_set_rightHandRoot_(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_rightHandSkeletonRendererGO_(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_rightHandSkeletonRenderer_(::UnityW<::GlobalNamespace::OVRSkeletonRenderer> value);

  constexpr void __cordl_internal_set_rightHandSkeleton_(::UnityW<::GlobalNamespace::OVRSkeleton> value);

  constexpr void __cordl_internal_set_rightHandSkinnedMeshRenderer_(::UnityW<::UnityEngine::SkinnedMeshRenderer> value);

  constexpr void __cordl_internal_set_rightHand_(::UnityW<::GlobalNamespace::OVRHand> value);

  /// @brief Method .ctor, addr 0x3fbe938, size 0x754, virtual false, abstract: false, final false
  inline void _ctor();

  static inline float_t getStaticF_handInnerAlphaThreshold_();

  static inline float_t getStaticF_handOuterAlphaThreshold_();

  static inline float_t getStaticF_maximumPassthroughHandsDistance_();

  static inline float_t getStaticF_minimumModelHandsDistance_();

  /// @brief Method get_AreControllersActive, addr 0x3fbd87c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_AreControllersActive();

  /// @brief Method get_LeftHandOverKeyboard, addr 0x3fbd218, size 0x8, virtual false, abstract: false, final false
  inline bool get_LeftHandOverKeyboard();

  /// @brief Method get_RightHandOverKeyboard, addr 0x3fbd204, size 0x8, virtual false, abstract: false, final false
  inline bool get_RightHandOverKeyboard();

  static inline void setStaticF_handInnerAlphaThreshold_(float_t value);

  static inline void setStaticF_handOuterAlphaThreshold_(float_t value);

  static inline void setStaticF_maximumPassthroughHandsDistance_(float_t value);

  static inline void setStaticF_minimumModelHandsDistance_(float_t value);

  /// @brief Method set_LeftHandOverKeyboard, addr 0x3fbd220, size 0xc, virtual false, abstract: false, final false
  inline void set_LeftHandOverKeyboard(bool value);

  /// @brief Method set_RightHandOverKeyboard, addr 0x3fbd20c, size 0xc, virtual false, abstract: false, final false
  inline void set_RightHandOverKeyboard(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboardHands();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboardHands(OVRTrackedKeyboardHands&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboardHands(OVRTrackedKeyboardHands const&) = delete;

  /// @brief Field LeftHandPresence, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___LeftHandPresence;

  /// @brief Field RightHandPresence, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___RightHandPresence;

  /// @brief Field handPresenceInitialized_, offset: 0x30, size: 0x1, def value: None
  bool ___handPresenceInitialized_;

  /// @brief Field leftHandRoot_, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___leftHandRoot_;

  /// @brief Field rightHandRoot_, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___rightHandRoot_;

  /// @brief Field KeyboardTracker, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRTrackedKeyboard> ___KeyboardTracker;

  /// @brief Field cameraRig_, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraRig_;

  /// @brief Field leftHand_, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___leftHand_;

  /// @brief Field leftHandSkeleton_, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ___leftHandSkeleton_;

  /// @brief Field leftHandSkeletonRenderer_, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> ___leftHandSkeletonRenderer_;

  /// @brief Field leftHandSkeletonRendererGO_, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___leftHandSkeletonRendererGO_;

  /// @brief Field leftHandSkinnedMeshRenderer_, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___leftHandSkinnedMeshRenderer_;

  /// @brief Field leftHandMeshRenderer_, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMeshRenderer> ___leftHandMeshRenderer_;

  /// @brief Field rightHand_, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRHand> ___rightHand_;

  /// @brief Field rightHandSkeleton_, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeleton> ___rightHandSkeleton_;

  /// @brief Field rightHandSkeletonRenderer_, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRSkeletonRenderer> ___rightHandSkeletonRenderer_;

  /// @brief Field rightHandSkeletonRendererGO_, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___rightHandSkeletonRendererGO_;

  /// @brief Field rightHandMeshRenderer_, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMeshRenderer> ___rightHandMeshRenderer_;

  /// @brief Field rightHandSkinnedMeshRenderer_, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SkinnedMeshRenderer> ___rightHandSkinnedMeshRenderer_;

  /// @brief Field <RightHandOverKeyboard>k__BackingField, offset: 0xb8, size: 0x1, def value: None
  bool ____RightHandOverKeyboard_k__BackingField;

  /// @brief Field <LeftHandOverKeyboard>k__BackingField, offset: 0xb9, size: 0x1, def value: None
  bool ____LeftHandOverKeyboard_k__BackingField;

  /// @brief Field lastVisibilityEvent_, offset: 0xba, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> ___lastVisibilityEvent_;

  /// @brief Field boneMappings_, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> ___boneMappings_;

  /// @brief Field HandsMaterial, offset: 0xc8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___HandsMaterial;

  /// @brief Field keyboardPositionID_, offset: 0xd0, size: 0x4, def value: None
  int32_t ___keyboardPositionID_;

  /// @brief Field keyboardRotationID_, offset: 0xd4, size: 0x4, def value: None
  int32_t ___keyboardRotationID_;

  /// @brief Field keyboardScaleID_, offset: 0xd8, size: 0x4, def value: None
  int32_t ___keyboardScaleID_;

  /// @brief Field FORWARD_OFFSET offset 0xffffffff size 0x4
  static constexpr float_t FORWARD_OFFSET{ -0.02 };

  /// @brief Field XSCALE offset 0xffffffff size 0x4
  static constexpr float_t XSCALE{ 0.73 };

  /// @brief Field YSCALE offset 0xffffffff size 0x4
  static constexpr float_t YSCALE{ 0.8 };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboardHands, 0xe0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___LeftHandPresence) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___RightHandPresence) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___handPresenceInitialized_) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandRoot_) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandRoot_) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___KeyboardTracker) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___cameraRig_) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHand_) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandSkeleton_) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandSkeletonRenderer_) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandSkeletonRendererGO_) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandSkinnedMeshRenderer_) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___leftHandMeshRenderer_) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHand_) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandSkeleton_) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandSkeletonRenderer_) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandSkeletonRendererGO_) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandMeshRenderer_) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___rightHandSkinnedMeshRenderer_) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ____RightHandOverKeyboard_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ____LeftHandOverKeyboard_k__BackingField) == 0xb9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___lastVisibilityEvent_) == 0xba, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___boneMappings_) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___HandsMaterial) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___keyboardPositionID_) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___keyboardRotationID_) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTrackedKeyboardHands, ___keyboardScaleID_) == 0xd8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardHands*, "", "OVRTrackedKeyboardHands");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, "", "OVRTrackedKeyboardHands/HandBoneMapping");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, "", "OVRTrackedKeyboardHands/TrackedKeyboardHandsVisibilityChangedEvent");
