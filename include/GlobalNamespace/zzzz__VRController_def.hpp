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
// Type: ::VRController
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 93, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8969)), TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(8996)),
// TypeDefinitionIndex(TypeDefinitionIndex(15745))] Self: TypeDefinitionIndex(TypeDefinitionIndex(14587)) CS Name: ::VRController*
class CORDL_TYPE VRController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _node, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__node, put = __cordl_internal_set__node))::UnityEngine::XR::XRNode _node;

  /// @brief Field _nodeIdx, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__nodeIdx, put = __cordl_internal_set__nodeIdx)) int32_t _nodeIdx;

  /// @brief Field _viewAnchorTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__viewAnchorTransform, put = __cordl_internal_set__viewAnchorTransform))::UnityW<::UnityEngine::Transform> _viewAnchorTransform;

  /// @brief Field _transformOffset, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__transformOffset, put = __cordl_internal_set__transformOffset))::UnityW<::GlobalNamespace::VRControllerTransformOffset> _transformOffset;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vrPlatformHelper, put = __cordl_internal_set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field anchorUpdateEvent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_anchorUpdateEvent,
                      put = __cordl_internal_set_anchorUpdateEvent))::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* anchorUpdateEvent;

  /// @brief Field _lastTrackedPosition, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get__lastTrackedPosition, put = __cordl_internal_set__lastTrackedPosition))::UnityEngine::Vector3 _lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset 0x4c, size 0x10
  __declspec(property(get = __cordl_internal_get__lastTrackedRotation, put = __cordl_internal_set__lastTrackedRotation))::UnityEngine::Quaternion _lastTrackedRotation;

  /// @brief Field _mouseMode, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__mouseMode, put = __cordl_internal_set__mouseMode)) bool _mouseMode;

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

  __declspec(property(get = get_viewAnchorTransform))::UnityW<::UnityEngine::Transform> viewAnchorTransform;

  __declspec(property(get = get_mouseMode, put = set_mouseMode)) bool mouseMode;

  constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get__node();

  constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get__node() const;

  constexpr void __cordl_internal_set__node(::UnityEngine::XR::XRNode value);

  constexpr int32_t& __cordl_internal_get__nodeIdx();

  constexpr int32_t const& __cordl_internal_get__nodeIdx() const;

  constexpr void __cordl_internal_set__nodeIdx(int32_t value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__viewAnchorTransform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__viewAnchorTransform() const;

  constexpr void __cordl_internal_set__viewAnchorTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset>& __cordl_internal_get__transformOffset();

  constexpr ::UnityW<::GlobalNamespace::VRControllerTransformOffset> const& __cordl_internal_get__transformOffset() const;

  constexpr void __cordl_internal_set__transformOffset(::UnityW<::GlobalNamespace::VRControllerTransformOffset> value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __cordl_internal_get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __cordl_internal_get__vrPlatformHelper() const;

  constexpr void __cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*& __cordl_internal_get_anchorUpdateEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>*> const& __cordl_internal_get_anchorUpdateEvent() const;

  constexpr void __cordl_internal_set_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastTrackedPosition();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastTrackedPosition() const;

  constexpr void __cordl_internal_set__lastTrackedPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastTrackedRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastTrackedRotation() const;

  constexpr void __cordl_internal_set__lastTrackedRotation(::UnityEngine::Quaternion value);

  constexpr bool& __cordl_internal_get__mouseMode();

  constexpr bool const& __cordl_internal_get__mouseMode() const;

  constexpr void __cordl_internal_set__mouseMode(bool value);

  static inline void setStaticF_kLeftControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kLeftControllerDefaultPosition();

  static inline void setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kRightControllerDefaultPosition();

  /// @brief Method get_node, addr 0x2192d64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::XRNode get_node();

  /// @brief Method set_node, addr 0x2192d6c, size 0x8, virtual false, abstract: false, final false
  inline void set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method get_nodeIdx, addr 0x2192d74, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_nodeIdx();

  /// @brief Method set_nodeIdx, addr 0x2192d7c, size 0x8, virtual false, abstract: false, final false
  inline void set_nodeIdx(int32_t value);

  /// @brief Method get_position, addr 0x2192d84, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation, addr 0x2192da4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_forward, addr 0x2192dc4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_triggerValue, addr 0x2192de4, size 0xdc, virtual false, abstract: false, final false
  inline float_t get_triggerValue();

  /// @brief Method get_thumbstick, addr 0x2192ec0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_thumbstick();

  /// @brief Method get_active, addr 0x2192f6c, size 0x20, virtual false, abstract: false, final false
  inline bool get_active();

  /// @brief Method get_viewAnchorTransform, addr 0x2192f8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_viewAnchorTransform();

  /// @brief Method add_anchorUpdateEvent, addr 0x2192f94, size 0xb0, virtual false, abstract: false, final false
  inline void add_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  /// @brief Method remove_anchorUpdateEvent, addr 0x2193044, size 0xb0, virtual false, abstract: false, final false
  inline void remove_anchorUpdateEvent(::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* value);

  /// @brief Method get_mouseMode, addr 0x21930f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_mouseMode();

  /// @brief Method set_mouseMode, addr 0x21930fc, size 0xf4, virtual false, abstract: false, final false
  inline void set_mouseMode(bool value);

  /// @brief Method Init, addr 0x219323c, size 0xc, virtual false, abstract: false, final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method OnEnable, addr 0x2193404, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2193408, size 0x108, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method SetupVRPlatformHelper, addr 0x2193248, size 0x1bc, virtual false, abstract: false, final false
  inline void SetupVRPlatformHelper();

  /// @brief Method TryGetControllerOffset, addr 0x2193510, size 0x74, virtual false, abstract: false, final false
  inline bool TryGetControllerOffset(ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method TryGetControllerOffset, addr 0x2193584, size 0x224, virtual false, abstract: false, final false
  static inline bool TryGetControllerOffset(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper, ::GlobalNamespace::VRControllerTransformOffset* transformOffset, ::UnityEngine::XR::XRNode node,
                                            ByRef<::UnityEngine::Pose> poseOffset);

  /// @brief Method UpdateAnchorOffsetPose, addr 0x21938f8, size 0x114, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose(::UnityEngine::Pose poseOffset);

  /// @brief Method AdjustPose, addr 0x2193858, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose AdjustPose(::UnityEngine::Pose originalPose, ::UnityEngine::Pose adjustment);

  /// @brief Method InvertControllerPose, addr 0x21938a8, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose InvertControllerPose(::UnityEngine::Pose finalPose);

  /// @brief Method UpdateAnchorOffsetPose, addr 0x21931f0, size 0x4c, virtual false, abstract: false, final false
  inline void UpdateAnchorOffsetPose();

  /// @brief Method Update, addr 0x2193a0c, size 0x2b4, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::VRController* New_ctor();

  /// @brief Method .ctor, addr 0x2193cc0, size 0x98, virtual false, abstract: false, final false
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
  ::UnityW<::UnityEngine::Transform> ____viewAnchorTransform;

  /// @brief Field _transformOffset, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::VRControllerTransformOffset> ____transformOffset;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field anchorUpdateEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::VRController>, ::UnityEngine::Pose>* ___anchorUpdateEvent;

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
