#pragma once
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
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class VRControllerTransformOffset;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class VRController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRController);
// Type: ::VRController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(10152)), TypeDefinitionIndex(TypeDefinitionIndex(15571)),
// TypeDefinitionIndex(TypeDefinitionIndex(10176))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13998)) CS Name: ::VRController*
class CORDL_TYPE VRController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _node, offset 0x18, size 0x4
  __declspec(property(get = __get__node, put = __set__node))::UnityEngine::XR::XRNode _node;

  /// @brief Field _nodeIdx, offset 0x1c, size 0x4
  __declspec(property(get = __get__nodeIdx, put = __set__nodeIdx)) int32_t _nodeIdx;

  /// @brief Field _viewAnchor, offset 0x20, size 0x8
  __declspec(property(get = __get__viewAnchor, put = __set__viewAnchor))::UnityEngine::GameObject* _viewAnchor;

  /// @brief Field _transformOffset, offset 0x28, size 0x8
  __declspec(property(get = __get__transformOffset, put = __set__transformOffset))::GlobalNamespace::VRControllerTransformOffset* _transformOffset;

  /// @brief Field _vrPlatformHelper, offset 0x30, size 0x8
  __declspec(property(get = __get__vrPlatformHelper, put = __set__vrPlatformHelper))::GlobalNamespace::IVRPlatformHelper* _vrPlatformHelper;

  /// @brief Field _lastTrackedPosition, offset 0x38, size 0xc
  __declspec(property(get = __get__lastTrackedPosition, put = __set__lastTrackedPosition))::UnityEngine::Vector3 _lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset 0x44, size 0x10
  __declspec(property(get = __get__lastTrackedRotation, put = __set__lastTrackedRotation))::UnityEngine::Quaternion _lastTrackedRotation;

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

  constexpr ::UnityEngine::XR::XRNode& __get__node();

  constexpr ::UnityEngine::XR::XRNode const& __get__node() const;

  constexpr void __set__node(::UnityEngine::XR::XRNode value);

  constexpr int32_t& __get__nodeIdx();

  constexpr int32_t const& __get__nodeIdx() const;

  constexpr void __set__nodeIdx(int32_t value);

  constexpr ::UnityEngine::GameObject*& __get__viewAnchor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__viewAnchor() const;

  constexpr void __set__viewAnchor(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::VRControllerTransformOffset*& __get__transformOffset();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::VRControllerTransformOffset*> const& __get__transformOffset() const;

  constexpr void __set__transformOffset(::GlobalNamespace::VRControllerTransformOffset* value);

  constexpr ::GlobalNamespace::IVRPlatformHelper*& __get__vrPlatformHelper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& __get__vrPlatformHelper() const;

  constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value);

  constexpr ::UnityEngine::Vector3& __get__lastTrackedPosition();

  constexpr ::UnityEngine::Vector3 const& __get__lastTrackedPosition() const;

  constexpr void __set__lastTrackedPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get__lastTrackedRotation();

  constexpr ::UnityEngine::Quaternion const& __get__lastTrackedRotation() const;

  constexpr void __set__lastTrackedRotation(::UnityEngine::Quaternion value);

  static inline void setStaticF_kLeftControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kLeftControllerDefaultPosition();

  static inline void setStaticF_kRightControllerDefaultPosition(::UnityEngine::Vector3 value);

  static inline ::UnityEngine::Vector3 getStaticF_kRightControllerDefaultPosition();

  /// @brief Method get_node addr 0x1faa8e4 size 0x8 virtual false final false
  inline ::UnityEngine::XR::XRNode get_node();

  /// @brief Method set_node addr 0x1faa8ec size 0x8 virtual false final false
  inline void set_node(::UnityEngine::XR::XRNode value);

  /// @brief Method get_nodeIdx addr 0x1faa8f4 size 0x8 virtual false final false
  inline int32_t get_nodeIdx();

  /// @brief Method set_nodeIdx addr 0x1faa8fc size 0x8 virtual false final false
  inline void set_nodeIdx(int32_t value);

  /// @brief Method get_position addr 0x1faa904 size 0x20 virtual false final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_rotation addr 0x1faa924 size 0x20 virtual false final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_forward addr 0x1faa944 size 0x20 virtual false final false
  inline ::UnityEngine::Vector3 get_forward();

  /// @brief Method get_triggerValue addr 0x1faa964 size 0xac virtual false final false
  inline float_t get_triggerValue();

  /// @brief Method get_thumbstick addr 0x1faaa10 size 0xac virtual false final false
  inline ::UnityEngine::Vector2 get_thumbstick();

  /// @brief Method get_active addr 0x1faaabc size 0x20 virtual false final false
  inline bool get_active();

  /// @brief Method get_viewAnchorTransform addr 0x1faaadc size 0x1c virtual false final false
  inline ::UnityEngine::Transform* get_viewAnchorTransform();

  /// @brief Method Init addr 0x1faaaf8 size 0x8 virtual false final false
  inline void Init(::GlobalNamespace::IVRPlatformHelper* vrPlatformHelper);

  /// @brief Method OnEnable addr 0x1faacbc size 0x4 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x1faacc0 size 0x108 virtual false final false
  inline void OnDisable();

  /// @brief Method SetupVRPlatformHelper addr 0x1faab00 size 0x1bc virtual false final false
  inline void SetupVRPlatformHelper();

  /// @brief Method UpdateAnchorPosition addr 0x1faadc8 size 0x268 virtual false final false
  inline void UpdateAnchorPosition();

  /// @brief Method Update addr 0x1fab0ac size 0x2b4 virtual false final false
  inline void Update();

  static inline ::GlobalNamespace::VRController* New_ctor();

  /// @brief Method .ctor addr 0x1fab360 size 0x98 virtual false final false
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

  /// @brief Field _viewAnchor, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____viewAnchor;

  /// @brief Field _transformOffset, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::VRControllerTransformOffset* ____transformOffset;

  /// @brief Field _vrPlatformHelper, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IVRPlatformHelper* ____vrPlatformHelper;

  /// @brief Field _lastTrackedPosition, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____lastTrackedPosition;

  /// @brief Field _lastTrackedRotation, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____lastTrackedRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____nodeIdx) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____viewAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____transformOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____vrPlatformHelper) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRController, ____lastTrackedRotation) == 0x44, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRController*, "", "VRController");
