#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGrabber)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGrabbable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabber;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGrabber);
// Type: ::OVRGrabber
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 193, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGrabber*
class CORDL_TYPE OVRGrabber : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field grabBegin, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_grabBegin, put = __cordl_internal_set_grabBegin)) float_t grabBegin;

  /// @brief Field grabEnd, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_grabEnd, put = __cordl_internal_set_grabEnd)) float_t grabEnd;

  __declspec(property(get = get_grabbedObject))::UnityW<::GlobalNamespace::OVRGrabbable> grabbedObject;

  /// @brief Field m_anchorOffsetPosition, offset 0x80, size 0xc
  __declspec(property(get = __cordl_internal_get_m_anchorOffsetPosition, put = __cordl_internal_set_m_anchorOffsetPosition))::UnityEngine::Vector3 m_anchorOffsetPosition;

  /// @brief Field m_anchorOffsetRotation, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_m_anchorOffsetRotation, put = __cordl_internal_set_m_anchorOffsetRotation))::UnityEngine::Quaternion m_anchorOffsetRotation;

  /// @brief Field m_controller, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_controller, put = __cordl_internal_set_m_controller))::GlobalNamespace::__OVRInput__Controller m_controller;

  /// @brief Field m_grabCandidates, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabCandidates,
                      put = __cordl_internal_set_m_grabCandidates))::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRGrabbable>, int32_t>* m_grabCandidates;

  /// @brief Field m_grabVolumeEnabled, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_m_grabVolumeEnabled, put = __cordl_internal_set_m_grabVolumeEnabled)) bool m_grabVolumeEnabled;

  /// @brief Field m_grabVolumes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabVolumes,
                      put = __cordl_internal_set_m_grabVolumes))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> m_grabVolumes;

  /// @brief Field m_grabbedObj, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabbedObj, put = __cordl_internal_set_m_grabbedObj))::UnityW<::GlobalNamespace::OVRGrabbable> m_grabbedObj;

  /// @brief Field m_grabbedObjectPosOff, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_m_grabbedObjectPosOff, put = __cordl_internal_set_m_grabbedObjectPosOff))::UnityEngine::Vector3 m_grabbedObjectPosOff;

  /// @brief Field m_grabbedObjectRotOff, offset 0xa4, size 0x10
  __declspec(property(get = __cordl_internal_get_m_grabbedObjectRotOff, put = __cordl_internal_set_m_grabbedObjectRotOff))::UnityEngine::Quaternion m_grabbedObjectRotOff;

  /// @brief Field m_gripTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_gripTransform, put = __cordl_internal_set_m_gripTransform))::UnityW<::UnityEngine::Transform> m_gripTransform;

  /// @brief Field m_lastPos, offset 0x54, size 0xc
  __declspec(property(get = __cordl_internal_get_m_lastPos, put = __cordl_internal_set_m_lastPos))::UnityEngine::Vector3 m_lastPos;

  /// @brief Field m_lastRot, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_m_lastRot, put = __cordl_internal_set_m_lastRot))::UnityEngine::Quaternion m_lastRot;

  /// @brief Field m_moveHandPosition, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get_m_moveHandPosition, put = __cordl_internal_set_m_moveHandPosition)) bool m_moveHandPosition;

  /// @brief Field m_operatingWithoutOVRCameraRig, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_operatingWithoutOVRCameraRig, put = __cordl_internal_set_m_operatingWithoutOVRCameraRig)) bool m_operatingWithoutOVRCameraRig;

  /// @brief Field m_parentHeldObject, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_parentHeldObject, put = __cordl_internal_set_m_parentHeldObject)) bool m_parentHeldObject;

  /// @brief Field m_parentTransform, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_parentTransform, put = __cordl_internal_set_m_parentTransform))::UnityW<::UnityEngine::Transform> m_parentTransform;

  /// @brief Field m_player, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_player, put = __cordl_internal_set_m_player))::UnityW<::UnityEngine::GameObject> m_player;

  /// @brief Field m_prevFlex, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_prevFlex, put = __cordl_internal_set_m_prevFlex)) float_t m_prevFlex;

  /// @brief Method Awake, addr 0x2a8268c, size 0x144, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method CheckForGrabOrRelease, addr 0x2a82c5c, size 0x40, virtual false, abstract: false, final false
  inline void CheckForGrabOrRelease(float_t prevFlex);

  /// @brief Method ForceRelease, addr 0x2a8235c, size 0xb0, virtual false, abstract: false, final false
  inline void ForceRelease(::GlobalNamespace::OVRGrabbable* grabbable);

  /// @brief Method GrabBegin, addr 0x2a82f98, size 0x6b0, virtual true, abstract: false, final false
  inline void GrabBegin();

  /// @brief Method GrabEnd, addr 0x2a82424, size 0x268, virtual false, abstract: false, final false
  inline void GrabEnd();

  /// @brief Method GrabVolumeEnable, addr 0x2a838d0, size 0xc0, virtual true, abstract: false, final false
  inline void GrabVolumeEnable(bool enabled);

  /// @brief Method GrabbableRelease, addr 0x2a8387c, size 0x54, virtual false, abstract: false, final false
  inline void GrabbableRelease(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);

  /// @brief Method MoveGrabbedObject, addr 0x2a83648, size 0x234, virtual true, abstract: false, final false
  inline void MoveGrabbedObject(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, bool forceTeleport);

  static inline ::GlobalNamespace::OVRGrabber* New_ctor();

  /// @brief Method OffhandGrabbed, addr 0x2a83990, size 0xcc, virtual true, abstract: false, final false
  inline void OffhandGrabbed(::GlobalNamespace::OVRGrabbable* grabbable);

  /// @brief Method OnDestroy, addr 0x2a82c9c, size 0x78, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnTriggerEnter, addr 0x2a82d14, size 0x128, virtual false, abstract: false, final false
  inline void OnTriggerEnter(::UnityEngine::Collider* otherCollider);

  /// @brief Method OnTriggerExit, addr 0x2a82e3c, size 0x15c, virtual false, abstract: false, final false
  inline void OnTriggerExit(::UnityEngine::Collider* otherCollider);

  /// @brief Method OnUpdatedAnchors, addr 0x2a82a38, size 0x224, virtual false, abstract: false, final false
  inline void OnUpdatedAnchors();

  /// @brief Method SetPlayerIgnoreCollision, addr 0x2a828b0, size 0x178, virtual false, abstract: false, final false
  inline void SetPlayerIgnoreCollision(::UnityEngine::GameObject* grabbable, bool ignore);

  /// @brief Method Start, addr 0x2a827d0, size 0xe0, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x2a82a28, size 0x10, virtual true, abstract: false, final false
  inline void Update();

  /// @brief Method <Awake>b__23_0, addr 0x2a83af0, size 0x4, virtual false, abstract: false, final false
  inline void _Awake_b__23_0(::GlobalNamespace::OVRCameraRig* r);

  constexpr float_t const& __cordl_internal_get_grabBegin() const;

  constexpr float_t& __cordl_internal_get_grabBegin();

  constexpr float_t const& __cordl_internal_get_grabEnd() const;

  constexpr float_t& __cordl_internal_get_grabEnd();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_anchorOffsetPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_anchorOffsetPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_anchorOffsetRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_anchorOffsetRotation();

  constexpr ::GlobalNamespace::__OVRInput__Controller const& __cordl_internal_get_m_controller() const;

  constexpr ::GlobalNamespace::__OVRInput__Controller& __cordl_internal_get_m_controller();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRGrabbable>, int32_t>*& __cordl_internal_get_m_grabCandidates();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRGrabbable>, int32_t>*> const& __cordl_internal_get_m_grabCandidates() const;

  constexpr bool const& __cordl_internal_get_m_grabVolumeEnabled() const;

  constexpr bool& __cordl_internal_get_m_grabVolumeEnabled();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_grabVolumes() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get_m_grabVolumes();

  constexpr ::UnityW<::GlobalNamespace::OVRGrabbable> const& __cordl_internal_get_m_grabbedObj() const;

  constexpr ::UnityW<::GlobalNamespace::OVRGrabbable>& __cordl_internal_get_m_grabbedObj();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_grabbedObjectPosOff() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_grabbedObjectPosOff();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_grabbedObjectRotOff() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_grabbedObjectRotOff();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_gripTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_gripTransform();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_lastPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_lastPos();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_lastRot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_lastRot();

  constexpr bool const& __cordl_internal_get_m_moveHandPosition() const;

  constexpr bool& __cordl_internal_get_m_moveHandPosition();

  constexpr bool const& __cordl_internal_get_m_operatingWithoutOVRCameraRig() const;

  constexpr bool& __cordl_internal_get_m_operatingWithoutOVRCameraRig();

  constexpr bool const& __cordl_internal_get_m_parentHeldObject() const;

  constexpr bool& __cordl_internal_get_m_parentHeldObject();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_parentTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_parentTransform();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_player() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_player();

  constexpr float_t const& __cordl_internal_get_m_prevFlex() const;

  constexpr float_t& __cordl_internal_get_m_prevFlex();

  constexpr void __cordl_internal_set_grabBegin(float_t value);

  constexpr void __cordl_internal_set_grabEnd(float_t value);

  constexpr void __cordl_internal_set_m_anchorOffsetPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_anchorOffsetRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_controller(::GlobalNamespace::__OVRInput__Controller value);

  constexpr void __cordl_internal_set_m_grabCandidates(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRGrabbable>, int32_t>* value);

  constexpr void __cordl_internal_set_m_grabVolumeEnabled(bool value);

  constexpr void __cordl_internal_set_m_grabVolumes(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set_m_grabbedObj(::UnityW<::GlobalNamespace::OVRGrabbable> value);

  constexpr void __cordl_internal_set_m_grabbedObjectPosOff(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_grabbedObjectRotOff(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_gripTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_lastPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_lastRot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_m_moveHandPosition(bool value);

  constexpr void __cordl_internal_set_m_operatingWithoutOVRCameraRig(bool value);

  constexpr void __cordl_internal_set_m_parentHeldObject(bool value);

  constexpr void __cordl_internal_set_m_parentTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_player(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_m_prevFlex(float_t value);

  /// @brief Method .ctor, addr 0x2a83a5c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_grabbedObject, addr 0x2a8241c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRGrabbable> get_grabbedObject();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGrabber();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGrabber(OVRGrabber&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGrabber", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGrabber(OVRGrabber const&) = delete;

  /// @brief Field grabBegin, offset: 0x18, size: 0x4, def value: None
  float_t ___grabBegin;

  /// @brief Field grabEnd, offset: 0x1c, size: 0x4, def value: None
  float_t ___grabEnd;

  /// @brief Field m_parentHeldObject, offset: 0x20, size: 0x1, def value: None
  bool ___m_parentHeldObject;

  /// @brief Field m_moveHandPosition, offset: 0x21, size: 0x1, def value: None
  bool ___m_moveHandPosition;

  /// @brief Field m_gripTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_gripTransform;

  /// @brief Field m_grabVolumes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ___m_grabVolumes;

  /// @brief Field m_controller, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__OVRInput__Controller ___m_controller;

  /// @brief Field m_parentTransform, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_parentTransform;

  /// @brief Field m_player, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_player;

  /// @brief Field m_grabVolumeEnabled, offset: 0x50, size: 0x1, def value: None
  bool ___m_grabVolumeEnabled;

  /// @brief Field m_lastPos, offset: 0x54, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_lastPos;

  /// @brief Field m_lastRot, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_lastRot;

  /// @brief Field m_anchorOffsetRotation, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_anchorOffsetRotation;

  /// @brief Field m_anchorOffsetPosition, offset: 0x80, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_anchorOffsetPosition;

  /// @brief Field m_prevFlex, offset: 0x8c, size: 0x4, def value: None
  float_t ___m_prevFlex;

  /// @brief Field m_grabbedObj, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRGrabbable> ___m_grabbedObj;

  /// @brief Field m_grabbedObjectPosOff, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_grabbedObjectPosOff;

  /// @brief Field m_grabbedObjectRotOff, offset: 0xa4, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___m_grabbedObjectRotOff;

  /// @brief Field m_grabCandidates, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::OVRGrabbable>, int32_t>* ___m_grabCandidates;

  /// @brief Field m_operatingWithoutOVRCameraRig, offset: 0xc0, size: 0x1, def value: None
  bool ___m_operatingWithoutOVRCameraRig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGrabber, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___grabBegin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___grabEnd) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_parentHeldObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_moveHandPosition) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_gripTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabVolumes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_controller) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_parentTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_player) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabVolumeEnabled) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_lastPos) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_lastRot) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_anchorOffsetRotation) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_anchorOffsetPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_prevFlex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabbedObj) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabbedObjectPosOff) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabbedObjectRotOff) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_grabCandidates) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabber, ___m_operatingWithoutOVRCameraRig) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGrabber);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabber*, "", "OVRGrabber");
