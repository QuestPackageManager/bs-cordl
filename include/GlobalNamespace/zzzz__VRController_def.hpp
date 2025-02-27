#pragma once
// IWYU pragma private; include "GlobalNamespace/VRController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRController)
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRController);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRController
class CORDL_TYPE VRController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _lastTrackedPosition, offset 0x48, size 0xc
  __declspec(property(get = __cordl_internal_get__lastTrackedPosition, put = __cordl_internal_set__lastTrackedPosition)) ::UnityEngine::Vector3 _lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset 0x54, size 0x10
  __declspec(property(get = __cordl_internal_get__lastTrackedRotation, put = __cordl_internal_set__lastTrackedRotation)) ::UnityEngine::Quaternion _lastTrackedRotation;

  /// @brief Field _mouseMode, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get__mouseMode, put = __cordl_internal_set__mouseMode)) bool _mouseMode;

  /// @brief Field _node, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node)) ::UnityEngine::XR::XRNode _node;

  /// @brief Field _nodeIdx, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeIdx, put = __cordl_internal_set__nodeIdx)) int32_t _nodeIdx;

  /// @brief Field _poseFrame, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__poseFrame, put = __cordl_internal_set__poseFrame)) int32_t _poseFrame;

  /// @brief Field _poseValid, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get__poseValid, put = __cordl_internal_set__poseValid)) bool _poseValid;

  /// @brief Field _transformOffset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__transformOffset, put = __cordl_internal_set__transformOffset)) ::UnityW<::GlobalNamespace::VRControllerTransformOffset> _transformOffset;

  /// @brief Field _viewAnchorTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__viewAnchorTransform, put = __cordl_internal_set__viewAnchorTransform)) ::UnityW<::UnityEngine::Transform> _viewAnchorTransform;

  /// @brief Field _vrPlatformHelper, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper)) ::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  __declspec(property(get = get_active)) bool active;

  /// @brief Field anchorUpdateEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_anchorUpdateEvent,
                      put = __cordl_internal_set_anchorUpdateEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* anchorUpdateEvent;

  __declspec(property(get = get_forward)) ::UnityEngine::Vector3 forward;

  /// @brief Field kLeftControllerDefaultPosition, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kLeftControllerDefaultPosition, put = setStaticF_kLeftControllerDefaultPosition)) ::UnityEngine::Vector3 kLeftControllerDefaultPosition;

  /// @brief Field kRightControllerDefaultPosition, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_kRightControllerDefaultPosition, put = setStaticF_kRightControllerDefaultPosition)) ::UnityEngine::Vector3 kRightControllerDefaultPosition;

  __declspec(property(get = get_mouseMode, put = set_mouseMode)) bool mouseMode;

  __declspec(property(get = get_node, put = set_node)) ::UnityEngine::XR::XRNode node;

  __declspec(property(get = get_nodeIdx, put = set_nodeIdx)) int32_t nodeIdx;

  __declspec(property(get = get_poseFrame)) int32_t poseFrame;

  __declspec(property(get = get_poseValid)) bool poseValid;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_thumbstick)) ::UnityEngine::Vector2 thumbstick;

  __declspec(property(get = get_triggerValue)) float_t triggerValue;

  __declspec(property(get = get_viewAnchorTransform)) ::UnityW<::UnityEngine::Transform> viewAnchorTransform;

  /// @brief Method AdjustPose, addr 0x39e081c, size 0xac, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment);

  /// @brief Method Init, addr 0x39dfb90, size 0xc, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method InvertControllerPose, addr 0x39e07cc, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InvertControllerPose(::UnityEngine::Pose finalPose);

  static inline ::GlobalNamespace::VRController* New_ctor();

  /// @brief Method OnDisable, addr 0x39e0040, size 0x100, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x39dfd50, size 0x28, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method SetupVRPlatformHelper, addr 0x39dfb9c, size 0x1b4, virtual false, abstract: false, final false
  inline void SetupVRPlatformHelper();

  /// @brief Method TryGetControllerOffset, addr 0x39e0140, size 0x70, virtual false, abstract: false, final false
  inline bool TryGetControllerOffset(::ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method TryGetControllerOffset, addr 0x39e01b0, size 0x61c, virtual false, abstract: false, final false
  static inline bool TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset,
                                            ::ByRef<::UnityEngine::XR::XRNode> node, ::ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method Update, addr 0x39dfd78, size 0x2c8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateAnchorOffsetPose, addr 0x39dfb44, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose();

  /// @brief Method UpdateAnchorOffsetPose, addr 0x39e0a80, size 0x114, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset);

  /// @brief Method UpdatePoseOffset, addr 0x39e08c8, size 0x1b8, virtual false, abstract: false, final false
  static inline void UpdatePoseOffset(::ByRef<::UnityEngine::XR::XRNode> node, ::ByRef<::UnityEngine::Vector3> customPositionOffset, ::ByRef<::UnityEngine::Vector3> customRotationOffset,
                                      ::ByRef<::UnityEngine::Pose> poseOffset);

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastTrackedPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastTrackedPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastTrackedRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastTrackedRotation();

  constexpr bool const& __cordl_internal_get__mouseMode() const;

  constexpr bool& __cordl_internal_get__mouseMode();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr int32_t const& __cordl_internal_get__nodeIdx() const;

  constexpr int32_t& __cordl_internal_get__nodeIdx();

  constexpr int32_t const& __cordl_internal_get__poseFrame() const;

  constexpr int32_t& __cordl_internal_get__poseFrame();

  constexpr bool const& __cordl_internal_get__poseValid() const;

  constexpr bool& __cordl_internal_get__poseValid();

  constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset> const& __cordl_internal_get__transformOffset() const;

  constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset>& __cordl_internal_get__transformOffset();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__viewAnchorTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__viewAnchorTransform();

  constexpr ::GlobalNamespace::IVRPlatformHelper* const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* const& __cordl_internal_get_anchorUpdateEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*& __cordl_internal_get_anchorUpdateEvent();

  constexpr void __cordl_internal_set__lastTrackedPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__lastTrackedRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__mouseMode(bool value);

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  constexpr void __cordl_internal_set__nodeIdx(int32_t value);

  constexpr void __cordl_internal_set__poseFrame(int32_t value);

  constexpr void __cordl_internal_set__poseValid(bool value);

  constexpr void __cordl_internal_set__transformOffset(::UnityW<::GlobalNamespace::VRControllerTransformOffset> value);

  constexpr void __cordl_internal_set__viewAnchorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr void __cordl_internal_set_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  /// @brief Method .ctor, addr 0x39e0b94, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_anchorUpdateEvent, addr 0x39df8d8, size 0xb0, virtual false, abstract: false, final false
  inline void add_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  static inline ::UnityEngine::Vector3 getStaticF_kLeftControllerDefaultPosition();

  static inline ::UnityEngine::Vector3 getStaticF_kRightControllerDefaultPosition();

  /// @brief Method get_active, addr 0x39df8b0, size 0x20, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_forward, addr 0x39df708, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_mouseMode, addr 0x39dfa48, size 0x8, virtual false, abstract: false, final false
  inline bool get_mouseMode();

  /// @brief Method get_node, addr 0x39df6a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRNode get_node();

  /// @brief Method get_nodeIdx, addr 0x39df6b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_nodeIdx();

  /// @brief Method get_poseFrame, addr 0x39dfa38, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_poseFrame();

  /// @brief Method get_poseValid, addr 0x39dfa40, size 0x8, virtual false, abstract: false, final false
  inline bool get_poseValid();

  /// @brief Method get_position, addr 0x39df6c8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x39df6e8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_thumbstick, addr 0x39df804, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_thumbstick();

  /// @brief Method get_triggerValue, addr 0x39df728, size 0xdc, virtual false, abstract: false, final false
  inline float_t get_triggerValue();

  /// @brief Method get_viewAnchorTransform, addr 0x39df8d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_viewAnchorTransform();

  /// @brief Method remove_anchorUpdateEvent, addr 0x39df988, size 0xb0, virtual false, abstract: false, final false
  inline void remove_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  static inline void setStaticF_kLeftControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline void setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_mouseMode, addr 0x39dfa50, size 0xf4, virtual false, abstract: false, final false
  inline void set_mouseMode(bool value);

  /// @brief Method set_node, addr 0x39df6b0, size 0x8, virtual false, abstract: false, final false
  inline void set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method set_nodeIdx, addr 0x39df6c0, size 0x8, virtual false, abstract: false, final false
  inline void set_nodeIdx(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRController(VRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRController(VRController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16497 };

  /// @brief Field _node, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  /// @brief Field _nodeIdx, offset: 0x24, size: 0x4, def value: None
  int32_t ____nodeIdx;

  /// @brief Field _viewAnchorTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____viewAnchorTransform;

  /// @brief Field _transformOffset, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRControllerTransformOffset> ____transformOffset;

  /// @brief Field _vrPlatformHelper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field anchorUpdateEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* ___anchorUpdateEvent;

  /// @brief Field _lastTrackedPosition, offset: 0x48, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset: 0x54, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____lastTrackedRotation;

  /// @brief Field _poseFrame, offset: 0x64, size: 0x4, def value: None
  int32_t ____poseFrame;

  /// @brief Field _poseValid, offset: 0x68, size: 0x1, def value: None
  bool ____poseValid;

  /// @brief Field _mouseMode, offset: 0x69, size: 0x1, def value: None
  bool ____mouseMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRController, ____node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____nodeIdx) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____viewAnchorTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____transformOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____vrPlatformHelper) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ___anchorUpdateEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedPosition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedRotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____poseFrame) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____poseValid) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____mouseMode) == 0x69, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRController, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRController*, "", "VRController");
