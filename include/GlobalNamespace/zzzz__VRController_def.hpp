#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRController)
namespace UnityEngine::XR {
struct XRNode;
}
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class VRController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRController);
// Type: ::VRController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15614)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10249)),
// TypeDefinitionIndex(TypeDefinitionIndex(10225))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14438)) CS Name: ::VRController*
class CORDL_TYPE VRController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _node, offset 0x18, size 0x4
  __declspec(property(get = __get__node, put = __set__node))::UnityEngine::XR::XRNode _node;

  /// @brief Field _nodeIdx, offset 0x1c, size 0x4
  __declspec(property(get = __get__nodeIdx, put = __set__nodeIdx)) int32_t _nodeIdx;

  /// @brief Field _viewAnchorTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__viewAnchorTransform, put = __set__viewAnchorTransform))::UnityEngine::Transform* _viewAnchorTransform;

  /// @brief Field _transformOffset, offset 0x28, size 0x8
  __declspec(property(get = __get__transformOffset, put = __set__transformOffset))::GlobalNamespace::VRControllerTransformOffset* _transformOffset;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field anchorUpdateEvent, offset 0x38, size 0x8
  __declspec(property(get = __get_anchorUpdateEvent, put = __set_anchorUpdateEvent))::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* anchorUpdateEvent;

  /// @brief Field _lastTrackedPosition, offset 0x40, size 0xc
  __declspec(property(get = __get__lastTrackedPosition, put = __set__lastTrackedPosition))::UnityEngine::Vector3 _lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset 0x4c, size 0x10
  __declspec(property(get = __get__lastTrackedRotation, put = __set__lastTrackedRotation))::UnityEngine::Quaternion _lastTrackedRotation;

  /// @brief Field _mouseMode, offset 0x5c, size 0x1
  __declspec(property(get = __get__mouseMode, put = __set__mouseMode)) bool _mouseMode;

  /// @brief Field kLeftControllerDefaultPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_kLeftControllerDefaultPosition, put = setStaticF_kLeftControllerDefaultPosition))::UnityEngine::Vector3 kLeftControllerDefaultPosition;

  /// @brief Field kRightControllerDefaultPosition, offset 0xffffffff, size 0xc
  static __declspec(property(get = getStaticF_kRightControllerDefaultPosition, put = setStaticF_kRightControllerDefaultPosition))::UnityEngine::Vector3 kRightControllerDefaultPosition;

  __declspec(property(get = get_node, put = set_node))::UnityEngine::XR::XRNode node;

  __declspec(property(get = get_nodeIdx, put = set_nodeIdx)) int32_t nodeIdx;

  __declspec(property(get = get_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_forward))::UnityEngine::Vector3 forward;

  __declspec(property(get = get_triggerValue)) float_t triggerValue;

  __declspec(property(get = get_thumbstick))::UnityEngine::Vector2 thumbstick;

  __declspec(property(get = get_active)) bool active;

  __declspec(property(get = get_viewAnchorTransform))::UnityEngine::Transform* viewAnchorTransform;

  __declspec(property(get = get_mouseMode, put = set_mouseMode)) bool mouseMode;

  constexpr ::UnityEngine::XR::XRNode& __get__node();

  constexpr ::UnityEngine::XR::XRNode const& __get__node() const;

  constexpr void __set__node(::UnityEngine::XR::XRNode value);

  constexpr int32_t& __get__nodeIdx();

  constexpr int32_t const& __get__nodeIdx() const;

  constexpr void __set__nodeIdx(int32_t value);

  constexpr ::UnityEngine::Transform*& __get__viewAnchorTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get__viewAnchorTransform() const;

  constexpr void __set__viewAnchorTransform(::UnityEngine::Transform* value);

  constexpr ::GlobalNamespace::VRControllerTransformOffset*& __get__transformOffset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRControllerTransformOffset*> const& __get__transformOffset() const;

  constexpr void __set__transformOffset(::GlobalNamespace::VRControllerTransformOffset* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*& __get_anchorUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>*> const& __get_anchorUpdateEvent() const;

  constexpr void __set_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value);

  constexpr ::UnityEngine::Vector3& __get__lastTrackedPosition();

  constexpr ::UnityEngine::Vector3 const& __get__lastTrackedPosition() const;

  constexpr void __set__lastTrackedPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__lastTrackedRotation();

  constexpr ::UnityEngine::Quaternion const& __get__lastTrackedRotation() const;

  constexpr void __set__lastTrackedRotation(::UnityEngine::Quaternion value);

  constexpr bool& __get__mouseMode();

  constexpr bool const& __get__mouseMode() const;

  constexpr void __set__mouseMode(bool value);

  static inline void setStaticF_kLeftControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kLeftControllerDefaultPosition();

  static inline void setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kRightControllerDefaultPosition();

  /// @brief Method get_node, addr 0x20ff354, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRNode get_node();

  /// @brief Method set_node, addr 0x20ff35c, size 0x8, virtual false, abstract: false, final false
  inline void set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method get_nodeIdx, addr 0x20ff364, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_nodeIdx();

  /// @brief Method set_nodeIdx, addr 0x20ff36c, size 0x8, virtual false, abstract: false, final false
  inline void set_nodeIdx(int32_t value);

  /// @brief Method get_position, addr 0x20ff374, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x20ff394, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_forward, addr 0x20ff3b4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_triggerValue, addr 0x20ff3d4, size 0xdc, virtual false, abstract: false, final false
  inline float_t get_triggerValue();

  /// @brief Method get_thumbstick, addr 0x20ff4b0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_thumbstick();

  /// @brief Method get_active, addr 0x20ff55c, size 0x20, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_viewAnchorTransform, addr 0x20ff57c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Transform* get_viewAnchorTransform();

  /// @brief Method add_anchorUpdateEvent, addr 0x20ff584, size 0xb0, virtual false, abstract: false, final false
  inline void add_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value);

  /// @brief Method remove_anchorUpdateEvent, addr 0x20ff634, size 0xb0, virtual false, abstract: false, final false
  inline void remove_anchorUpdateEvent(::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* value);

  /// @brief Method get_mouseMode, addr 0x20ff6e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_mouseMode();

  /// @brief Method set_mouseMode, addr 0x20ff6ec, size 0xf4, virtual false, abstract: false, final false
  inline void set_mouseMode(bool value);

  /// @brief Method Init, addr 0x20ff82c, size 0xc, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method OnEnable, addr 0x20ff9f4, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x20ff9f8, size 0x108, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetupVRPlatformHelper, addr 0x20ff838, size 0x1bc, virtual false, abstract: false, final false
  inline void SetupVRPlatformHelper();

  /// @brief Method TryGetControllerOffset, addr 0x20ffb00, size 0x74, virtual false, abstract: false, final false
  inline bool TryGetControllerOffset(ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method TryGetControllerOffset, addr 0x20ffb74, size 0x224, virtual false, abstract: false, final false
  static inline bool TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset, ::UnityEngine::XR::XRNode node,
                                            ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method UpdateAnchorOffsetPose, addr 0x20ffee8, size 0x114, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset);

  /// @brief Method AdjustPose, addr 0x20ffe48, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment);

  /// @brief Method InvertControllerPose, addr 0x20ffe98, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InvertControllerPose(::UnityEngine::Pose finalPose);

  /// @brief Method UpdateAnchorOffsetPose, addr 0x20ff7e0, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose();

  /// @brief Method Update, addr 0x20ffffc, size 0x2b4, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::VRController* New_ctor();

  /// @brief Method .ctor, addr 0x21002b0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VRController(VRController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VRController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VRController(VRController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VRController();

public:
  /// @brief Field _node, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::XRNode ____node;

  /// @brief Field _nodeIdx, offset: 0x1c, size: 0x4, def value: None
  int32_t ____nodeIdx;

  /// @brief Field _viewAnchorTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ____viewAnchorTransform;

  /// @brief Field _transformOffset, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::VRControllerTransformOffset* ____transformOffset;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field anchorUpdateEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::VRController*, ::UnityEngine::Pose>* ___anchorUpdateEvent;

  /// @brief Field _lastTrackedPosition, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset: 0x4c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____lastTrackedRotation;

  /// @brief Field _mouseMode, offset: 0x5c, size: 0x1, def value: None
  bool ____mouseMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRController, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____nodeIdx) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____viewAnchorTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____transformOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____vrPlatformHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ___anchorUpdateEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____mouseMode) == 0x5c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRController*, "", "VRController");
