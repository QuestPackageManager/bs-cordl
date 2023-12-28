#pragma once
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
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__HandBoneMapping;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
class OVRSkeleton;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace GlobalNamespace {
class OVRMeshRenderer;
}
namespace GlobalNamespace {
struct __OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
namespace GlobalNamespace {
class OVRSkeletonRenderer;
}
namespace GlobalNamespace {
struct __OVRSkeleton__BoneId;
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
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8169))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8039))
// CS Name: ::OVRTrackedKeyboardHands::HandBoneMapping
struct CORDL_TYPE __OVRTrackedKeyboardHands__HandBoneMapping {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "LeftHandTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "LeftPresenceTransform", ty:
  // "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "RightHandTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name:
  // "RightPresenceTransform", ty: "::UnityEngine::Transform*", modifiers: "", def_value: None }, CppParam { name: "BoneName", ty: "::GlobalNamespace::__OVRSkeleton__BoneId", modifiers: "", def_value:
  // None }, CppParam { name: "HandPresenceLeftBoneName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "HandPresenceRightBoneName", ty: "::StringW", modifiers: "", def_value:
  // None }]
  constexpr __OVRTrackedKeyboardHands__HandBoneMapping(::UnityEngine::Transform* LeftHandTransform, ::UnityEngine::Transform* LeftPresenceTransform, ::UnityEngine::Transform* RightHandTransform,
                                                       ::UnityEngine::Transform* RightPresenceTransform, ::GlobalNamespace::__OVRSkeleton__BoneId BoneName, ::StringW HandPresenceLeftBoneName,
                                                       ::StringW HandPresenceRightBoneName) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboardHands__HandBoneMapping();

  /// @brief Field LeftHandTransform, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Transform* LeftHandTransform;

  /// @brief Field LeftPresenceTransform, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Transform* LeftPresenceTransform;

  /// @brief Field RightHandTransform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* RightHandTransform;

  /// @brief Field RightPresenceTransform, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* RightPresenceTransform;

  /// @brief Field BoneName, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::__OVRSkeleton__BoneId BoneName;

  /// @brief Field HandPresenceLeftBoneName, offset: 0x28, size: 0x8, def value: None
  ::StringW HandPresenceLeftBoneName;

  /// @brief Field HandPresenceRightBoneName, offset: 0x30, size: 0x8, def value: None
  ::StringW HandPresenceRightBoneName;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::TrackedKeyboardHandsVisibilityChangedEvent
// SizeInfo { instance_size: 2, native_size: 8, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8040))
// CS Name: ::OVRTrackedKeyboardHands::TrackedKeyboardHandsVisibilityChangedEvent
struct CORDL_TYPE __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "leftVisible", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "rightVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent(bool leftVisible, bool rightVisible) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent();

  /// @brief Field leftVisible, offset: 0x0, size: 0x1, def value: None
  bool leftVisible;

  /// @brief Field rightVisible, offset: 0x1, size: 0x1, def value: None
  bool rightVisible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, 0x2>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTrackedKeyboardHands
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 212, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 4776 }), TypeDefinitionIndex(TypeDefinitionIndex(10225)),
// TypeDefinitionIndex(TypeDefinitionIndex(2448)), TypeDefinitionIndex(TypeDefinitionIndex(8040))} Self: TypeDefinitionIndex(TypeDefinitionIndex(8041)) CS Name: ::OVRTrackedKeyboardHands*
class CORDL_TYPE OVRTrackedKeyboardHands : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using TrackedKeyboardHandsVisibilityChangedEvent = ::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent;

  using HandBoneMapping = ::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping;

  /// @brief Field LeftHandPresence, offset 0x18, size 0x8
  __declspec(property(get = __get_LeftHandPresence, put = __set_LeftHandPresence))::UnityEngine::GameObject* LeftHandPresence;

  /// @brief Field RightHandPresence, offset 0x20, size 0x8
  __declspec(property(get = __get_RightHandPresence, put = __set_RightHandPresence))::UnityEngine::GameObject* RightHandPresence;

  /// @brief Field handPresenceInitialized_, offset 0x28, size 0x1
  __declspec(property(get = __get_handPresenceInitialized_, put = __set_handPresenceInitialized_)) bool handPresenceInitialized_;

  /// @brief Field leftHandRoot_, offset 0x30, size 0x8
  __declspec(property(get = __get_leftHandRoot_, put = __set_leftHandRoot_))::UnityEngine::Transform* leftHandRoot_;

  /// @brief Field rightHandRoot_, offset 0x38, size 0x8
  __declspec(property(get = __get_rightHandRoot_, put = __set_rightHandRoot_))::UnityEngine::Transform* rightHandRoot_;

  /// @brief Field KeyboardTracker, offset 0x40, size 0x8
  __declspec(property(get = __get_KeyboardTracker, put = __set_KeyboardTracker))::GlobalNamespace::OVRTrackedKeyboard* KeyboardTracker;

  /// @brief Field cameraRig_, offset 0x48, size 0x8
  __declspec(property(get = __get_cameraRig_, put = __set_cameraRig_))::GlobalNamespace::OVRCameraRig* cameraRig_;

  /// @brief Field leftHand_, offset 0x50, size 0x8
  __declspec(property(get = __get_leftHand_, put = __set_leftHand_))::GlobalNamespace::OVRHand* leftHand_;

  /// @brief Field leftHandSkeleton_, offset 0x58, size 0x8
  __declspec(property(get = __get_leftHandSkeleton_, put = __set_leftHandSkeleton_))::GlobalNamespace::OVRSkeleton* leftHandSkeleton_;

  /// @brief Field leftHandSkeletonRenderer_, offset 0x60, size 0x8
  __declspec(property(get = __get_leftHandSkeletonRenderer_, put = __set_leftHandSkeletonRenderer_))::GlobalNamespace::OVRSkeletonRenderer* leftHandSkeletonRenderer_;

  /// @brief Field leftHandSkeletonRendererGO_, offset 0x68, size 0x8
  __declspec(property(get = __get_leftHandSkeletonRendererGO_, put = __set_leftHandSkeletonRendererGO_))::UnityEngine::GameObject* leftHandSkeletonRendererGO_;

  /// @brief Field leftHandSkinnedMeshRenderer_, offset 0x70, size 0x8
  __declspec(property(get = __get_leftHandSkinnedMeshRenderer_, put = __set_leftHandSkinnedMeshRenderer_))::UnityEngine::SkinnedMeshRenderer* leftHandSkinnedMeshRenderer_;

  /// @brief Field leftHandMeshRenderer_, offset 0x78, size 0x8
  __declspec(property(get = __get_leftHandMeshRenderer_, put = __set_leftHandMeshRenderer_))::GlobalNamespace::OVRMeshRenderer* leftHandMeshRenderer_;

  /// @brief Field rightHand_, offset 0x80, size 0x8
  __declspec(property(get = __get_rightHand_, put = __set_rightHand_))::GlobalNamespace::OVRHand* rightHand_;

  /// @brief Field rightHandSkeleton_, offset 0x88, size 0x8
  __declspec(property(get = __get_rightHandSkeleton_, put = __set_rightHandSkeleton_))::GlobalNamespace::OVRSkeleton* rightHandSkeleton_;

  /// @brief Field rightHandSkeletonRenderer_, offset 0x90, size 0x8
  __declspec(property(get = __get_rightHandSkeletonRenderer_, put = __set_rightHandSkeletonRenderer_))::GlobalNamespace::OVRSkeletonRenderer* rightHandSkeletonRenderer_;

  /// @brief Field rightHandSkeletonRendererGO_, offset 0x98, size 0x8
  __declspec(property(get = __get_rightHandSkeletonRendererGO_, put = __set_rightHandSkeletonRendererGO_))::UnityEngine::GameObject* rightHandSkeletonRendererGO_;

  /// @brief Field rightHandMeshRenderer_, offset 0xa0, size 0x8
  __declspec(property(get = __get_rightHandMeshRenderer_, put = __set_rightHandMeshRenderer_))::GlobalNamespace::OVRMeshRenderer* rightHandMeshRenderer_;

  /// @brief Field rightHandSkinnedMeshRenderer_, offset 0xa8, size 0x8
  __declspec(property(get = __get_rightHandSkinnedMeshRenderer_, put = __set_rightHandSkinnedMeshRenderer_))::UnityEngine::SkinnedMeshRenderer* rightHandSkinnedMeshRenderer_;

  /// @brief Field <RightHandOverKeyboard>k__BackingField, offset 0xb0, size 0x1
  __declspec(property(get = __get__RightHandOverKeyboard_k__BackingField, put = __set__RightHandOverKeyboard_k__BackingField)) bool _RightHandOverKeyboard_k__BackingField;

  /// @brief Field <LeftHandOverKeyboard>k__BackingField, offset 0xb1, size 0x1
  __declspec(property(get = __get__LeftHandOverKeyboard_k__BackingField, put = __set__LeftHandOverKeyboard_k__BackingField)) bool _LeftHandOverKeyboard_k__BackingField;

  /// @brief Field lastVisibilityEvent_, offset 0xb2, size 0x3
  __declspec(property(get = __get_lastVisibilityEvent_,
                      put = __set_lastVisibilityEvent_))::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> lastVisibilityEvent_;

  /// @brief Field boneMappings_, offset 0xb8, size 0x8
  __declspec(property(
      get = __get_boneMappings_,
      put = __set_boneMappings_))::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> boneMappings_;

  /// @brief Field HandsMaterial, offset 0xc0, size 0x8
  __declspec(property(get = __get_HandsMaterial, put = __set_HandsMaterial))::UnityEngine::Material* HandsMaterial;

  /// @brief Field keyboardPositionID_, offset 0xc8, size 0x4
  __declspec(property(get = __get_keyboardPositionID_, put = __set_keyboardPositionID_)) int32_t keyboardPositionID_;

  /// @brief Field keyboardRotationID_, offset 0xcc, size 0x4
  __declspec(property(get = __get_keyboardRotationID_, put = __set_keyboardRotationID_)) int32_t keyboardRotationID_;

  /// @brief Field keyboardScaleID_, offset 0xd0, size 0x4
  __declspec(property(get = __get_keyboardScaleID_, put = __set_keyboardScaleID_)) int32_t keyboardScaleID_;

  /// @brief Field handInnerAlphaThreshold_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_handInnerAlphaThreshold_, put = setStaticF_handInnerAlphaThreshold_)) float_t handInnerAlphaThreshold_;

  /// @brief Field handOuterAlphaThreshold_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_handOuterAlphaThreshold_, put = setStaticF_handOuterAlphaThreshold_)) float_t handOuterAlphaThreshold_;

  /// @brief Field maximumPassthroughHandsDistance_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_maximumPassthroughHandsDistance_, put = setStaticF_maximumPassthroughHandsDistance_)) float_t maximumPassthroughHandsDistance_;

  /// @brief Field minimumModelHandsDistance_, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_minimumModelHandsDistance_, put = setStaticF_minimumModelHandsDistance_)) float_t minimumModelHandsDistance_;

  __declspec(property(get = get_RightHandOverKeyboard, put = set_RightHandOverKeyboard)) bool RightHandOverKeyboard;

  __declspec(property(get = get_LeftHandOverKeyboard, put = set_LeftHandOverKeyboard)) bool LeftHandOverKeyboard;

  __declspec(property(get = get_AreControllersActive)) bool AreControllersActive;

  constexpr ::UnityEngine::GameObject*& __get_LeftHandPresence();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_LeftHandPresence() const;

  constexpr void __set_LeftHandPresence(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_RightHandPresence();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_RightHandPresence() const;

  constexpr void __set_RightHandPresence(::UnityEngine::GameObject* value);

  constexpr bool& __get_handPresenceInitialized_();

  constexpr bool const& __get_handPresenceInitialized_() const;

  constexpr void __set_handPresenceInitialized_(bool value);

  constexpr ::UnityEngine::Transform*& __get_leftHandRoot_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_leftHandRoot_() const;

  constexpr void __set_leftHandRoot_(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_rightHandRoot_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_rightHandRoot_() const;

  constexpr void __set_rightHandRoot_(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::OVRTrackedKeyboard*& __get_KeyboardTracker();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRTrackedKeyboard*> const& __get_KeyboardTracker() const;

  constexpr void __set_KeyboardTracker(::GlobalNamespace::OVRTrackedKeyboard* value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get_cameraRig_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get_cameraRig_() const;

  constexpr void __set_cameraRig_(::GlobalNamespace::OVRCameraRig* value);

  constexpr ::GlobalNamespace::OVRHand*& __get_leftHand_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> const& __get_leftHand_() const;

  constexpr void __set_leftHand_(::GlobalNamespace::OVRHand* value);

  constexpr ::GlobalNamespace::OVRSkeleton*& __get_leftHandSkeleton_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> const& __get_leftHandSkeleton_() const;

  constexpr void __set_leftHandSkeleton_(::GlobalNamespace::OVRSkeleton* value);

  constexpr ::GlobalNamespace::OVRSkeletonRenderer*& __get_leftHandSkeletonRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeletonRenderer*> const& __get_leftHandSkeletonRenderer_() const;

  constexpr void __set_leftHandSkeletonRenderer_(::GlobalNamespace::OVRSkeletonRenderer* value);

  constexpr ::UnityEngine::GameObject*& __get_leftHandSkeletonRendererGO_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_leftHandSkeletonRendererGO_() const;

  constexpr void __set_leftHandSkeletonRendererGO_(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::SkinnedMeshRenderer*& __get_leftHandSkinnedMeshRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SkinnedMeshRenderer*> const& __get_leftHandSkinnedMeshRenderer_() const;

  constexpr void __set_leftHandSkinnedMeshRenderer_(::UnityEngine::SkinnedMeshRenderer* value);

  constexpr ::GlobalNamespace::OVRMeshRenderer*& __get_leftHandMeshRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRMeshRenderer*> const& __get_leftHandMeshRenderer_() const;

  constexpr void __set_leftHandMeshRenderer_(::GlobalNamespace::OVRMeshRenderer* value);

  constexpr ::GlobalNamespace::OVRHand*& __get_rightHand_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRHand*> const& __get_rightHand_() const;

  constexpr void __set_rightHand_(::GlobalNamespace::OVRHand* value);

  constexpr ::GlobalNamespace::OVRSkeleton*& __get_rightHandSkeleton_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeleton*> const& __get_rightHandSkeleton_() const;

  constexpr void __set_rightHandSkeleton_(::GlobalNamespace::OVRSkeleton* value);

  constexpr ::GlobalNamespace::OVRSkeletonRenderer*& __get_rightHandSkeletonRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRSkeletonRenderer*> const& __get_rightHandSkeletonRenderer_() const;

  constexpr void __set_rightHandSkeletonRenderer_(::GlobalNamespace::OVRSkeletonRenderer* value);

  constexpr ::UnityEngine::GameObject*& __get_rightHandSkeletonRendererGO_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_rightHandSkeletonRendererGO_() const;

  constexpr void __set_rightHandSkeletonRendererGO_(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::OVRMeshRenderer*& __get_rightHandMeshRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRMeshRenderer*> const& __get_rightHandMeshRenderer_() const;

  constexpr void __set_rightHandMeshRenderer_(::GlobalNamespace::OVRMeshRenderer* value);

  constexpr ::UnityEngine::SkinnedMeshRenderer*& __get_rightHandSkinnedMeshRenderer_();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SkinnedMeshRenderer*> const& __get_rightHandSkinnedMeshRenderer_() const;

  constexpr void __set_rightHandSkinnedMeshRenderer_(::UnityEngine::SkinnedMeshRenderer* value);

  constexpr bool& __get__RightHandOverKeyboard_k__BackingField();

  constexpr bool const& __get__RightHandOverKeyboard_k__BackingField() const;

  constexpr void __set__RightHandOverKeyboard_k__BackingField(bool value);

  constexpr bool& __get__LeftHandOverKeyboard_k__BackingField();

  constexpr bool const& __get__LeftHandOverKeyboard_k__BackingField() const;

  constexpr void __set__LeftHandOverKeyboard_k__BackingField(bool value);

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent>& __get_lastVisibilityEvent_();

  constexpr ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> const& __get_lastVisibilityEvent_() const;

  constexpr void __set_lastVisibilityEvent_(::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> value);

  constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*>& __get_boneMappings_();

  constexpr ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> const& __get_boneMappings_() const;

  constexpr void __set_boneMappings_(::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> value);

  constexpr ::UnityEngine::Material*& __get_HandsMaterial();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_HandsMaterial() const;

  constexpr void __set_HandsMaterial(::UnityEngine::Material* value);

  constexpr int32_t& __get_keyboardPositionID_();

  constexpr int32_t const& __get_keyboardPositionID_() const;

  constexpr void __set_keyboardPositionID_(int32_t value);

  constexpr int32_t& __get_keyboardRotationID_();

  constexpr int32_t const& __get_keyboardRotationID_() const;

  constexpr void __set_keyboardRotationID_(int32_t value);

  constexpr int32_t& __get_keyboardScaleID_();

  constexpr int32_t const& __get_keyboardScaleID_() const;

  constexpr void __set_keyboardScaleID_(int32_t value);

  static inline void setStaticF_handInnerAlphaThreshold_(float_t value);

  static inline float_t getStaticF_handInnerAlphaThreshold_();

  static inline void setStaticF_handOuterAlphaThreshold_(float_t value);

  static inline float_t getStaticF_handOuterAlphaThreshold_();

  static inline void setStaticF_maximumPassthroughHandsDistance_(float_t value);

  static inline float_t getStaticF_maximumPassthroughHandsDistance_();

  static inline void setStaticF_minimumModelHandsDistance_(float_t value);

  static inline float_t getStaticF_minimumModelHandsDistance_();

  /// @brief Method get_RightHandOverKeyboard addr 0x2796e5c size 0x8 virtual false final false
  inline bool get_RightHandOverKeyboard();

  /// @brief Method set_RightHandOverKeyboard addr 0x2796e64 size 0xc virtual false final false
  inline void set_RightHandOverKeyboard(bool value);

  /// @brief Method get_LeftHandOverKeyboard addr 0x2796e70 size 0x8 virtual false final false
  inline bool get_LeftHandOverKeyboard();

  /// @brief Method set_LeftHandOverKeyboard addr 0x2796e78 size 0xc virtual false final false
  inline void set_LeftHandOverKeyboard(bool value);

  /// @brief Method Awake addr 0x2796e84 size 0x1e4 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x2797068 size 0x304 virtual false final false
  inline void Start();

  /// @brief Method get_AreControllersActive addr 0x27974dc size 0x3c virtual false final false
  inline bool get_AreControllersActive();

  /// @brief Method LateUpdate addr 0x2797518 size 0x7dc virtual false final false
  inline void LateUpdate();

  /// @brief Method ShouldEnablePassthrough addr 0x27980b0 size 0x6c virtual false final false
  inline bool ShouldEnablePassthrough(float_t distance);

  /// @brief Method ShouldEnableModel addr 0x279811c size 0x6c virtual false final false
  inline bool ShouldEnableModel(float_t distance);

  /// @brief Method GetHandDistanceToKeyboard addr 0x2797de0 size 0x2d0 virtual false final false
  inline float_t GetHandDistanceToKeyboard(::GlobalNamespace::OVRSkeleton* handSkeleton);

  /// @brief Method ComputeOpacity addr 0x2798390 size 0x24 virtual false final false
  inline float_t ComputeOpacity(float_t distance, float_t innerThreshold, float_t outerThreshold);

  /// @brief Method SetHandModelsEnabled addr 0x2798188 size 0x208 virtual false final false
  inline void SetHandModelsEnabled(bool enableLeftModel, bool enableRightModel);

  /// @brief Method RetargetHandTrackingToHandPresence addr 0x279736c size 0x170 virtual false final false
  inline void RetargetHandTrackingToHandPresence();

  /// @brief Method StopHandPresence addr 0x27983b4 size 0x30 virtual false final false
  inline void StopHandPresence();

  /// @brief Method DisableHandObjects addr 0x2797cf4 size 0xec virtual false final false
  inline void DisableHandObjects();

  /// @brief Method TrackedKeyboardActiveUpdated addr 0x27983e4 size 0xc virtual false final false
  inline void TrackedKeyboardActiveUpdated(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent e);

  /// @brief Method TrackedKeyboardVisibilityChanged addr 0x27983f0 size 0x1b0 virtual false final false
  inline void TrackedKeyboardVisibilityChanged(::GlobalNamespace::__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent e);

  static inline ::GlobalNamespace::OVRTrackedKeyboardHands* New_ctor();

  /// @brief Method .ctor addr 0x27985a0 size 0x750 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTrackedKeyboardHands(OVRTrackedKeyboardHands&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardHands", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTrackedKeyboardHands(OVRTrackedKeyboardHands const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTrackedKeyboardHands();

public:
  /// @brief Field LeftHandPresence, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___LeftHandPresence;

  /// @brief Field RightHandPresence, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___RightHandPresence;

  /// @brief Field handPresenceInitialized_, offset: 0x28, size: 0x1, def value: None
  bool ___handPresenceInitialized_;

  /// @brief Field leftHandRoot_, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Transform* ___leftHandRoot_;

  /// @brief Field rightHandRoot_, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Transform* ___rightHandRoot_;

  /// @brief Field KeyboardTracker, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRTrackedKeyboard* ___KeyboardTracker;

  /// @brief Field cameraRig_, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::OVRCameraRig* ___cameraRig_;

  /// @brief Field leftHand_, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* ___leftHand_;

  /// @brief Field leftHandSkeleton_, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeleton* ___leftHandSkeleton_;

  /// @brief Field leftHandSkeletonRenderer_, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeletonRenderer* ___leftHandSkeletonRenderer_;

  /// @brief Field leftHandSkeletonRendererGO_, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___leftHandSkeletonRendererGO_;

  /// @brief Field leftHandSkinnedMeshRenderer_, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::SkinnedMeshRenderer* ___leftHandSkinnedMeshRenderer_;

  /// @brief Field leftHandMeshRenderer_, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::OVRMeshRenderer* ___leftHandMeshRenderer_;

  /// @brief Field rightHand_, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OVRHand* ___rightHand_;

  /// @brief Field rightHandSkeleton_, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeleton* ___rightHandSkeleton_;

  /// @brief Field rightHandSkeletonRenderer_, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::OVRSkeletonRenderer* ___rightHandSkeletonRenderer_;

  /// @brief Field rightHandSkeletonRendererGO_, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___rightHandSkeletonRendererGO_;

  /// @brief Field rightHandMeshRenderer_, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::OVRMeshRenderer* ___rightHandMeshRenderer_;

  /// @brief Field rightHandSkinnedMeshRenderer_, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::SkinnedMeshRenderer* ___rightHandSkinnedMeshRenderer_;

  /// @brief Field <RightHandOverKeyboard>k__BackingField, offset: 0xb0, size: 0x1, def value: None
  bool ____RightHandOverKeyboard_k__BackingField;

  /// @brief Field <LeftHandOverKeyboard>k__BackingField, offset: 0xb1, size: 0x1, def value: None
  bool ____LeftHandOverKeyboard_k__BackingField;

  /// @brief Field lastVisibilityEvent_, offset: 0xb2, size: 0x3, def value: None
  ::System::Nullable_1<::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent> ___lastVisibilityEvent_;

  /// @brief Field boneMappings_, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, ::Array<::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping>*> ___boneMappings_;

  /// @brief Field HandsMaterial, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Material* ___HandsMaterial;

  /// @brief Field keyboardPositionID_, offset: 0xc8, size: 0x4, def value: None
  int32_t ___keyboardPositionID_;

  /// @brief Field keyboardRotationID_, offset: 0xcc, size: 0x4, def value: None
  int32_t ___keyboardRotationID_;

  /// @brief Field keyboardScaleID_, offset: 0xd0, size: 0x4, def value: None
  int32_t ___keyboardScaleID_;

  /// @brief Field XSCALE offset 0xffffffff size 0x4
  static constexpr float_t XSCALE{ 0.73 };

  /// @brief Field YSCALE offset 0xffffffff size 0x4
  static constexpr float_t YSCALE{ 0.8 };

  /// @brief Field FORWARD_OFFSET offset 0xffffffff size 0x4
  static constexpr float_t FORWARD_OFFSET{ -0.02 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTrackedKeyboardHands, 0xd8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardHands);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardHands*, "", "OVRTrackedKeyboardHands");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboardHands__HandBoneMapping, "", "OVRTrackedKeyboardHands/HandBoneMapping");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTrackedKeyboardHands__TrackedKeyboardHandsVisibilityChangedEvent, "", "OVRTrackedKeyboardHands/TrackedKeyboardHandsVisibilityChangedEvent");
