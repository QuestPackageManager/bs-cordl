#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OVRGrabbable)
namespace GlobalNamespace {
class OVRGrabber;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGrabbable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGrabbable);
// Type: ::OVRGrabbable
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRGrabbable*
class CORDL_TYPE OVRGrabbable : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  __declspec(property(get = get_allowOffhandGrab)) bool allowOffhandGrab;

  __declspec(property(get = get_grabPoints))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> grabPoints;

  __declspec(property(get = get_grabbedBy))::UnityW<::GlobalNamespace::OVRGrabber> grabbedBy;

  __declspec(property(get = get_grabbedRigidbody))::UnityW<::UnityEngine::Rigidbody> grabbedRigidbody;

  __declspec(property(get = get_grabbedTransform))::UnityW<::UnityEngine::Transform> grabbedTransform;

  __declspec(property(get = get_isGrabbed)) bool isGrabbed;

  /// @brief Field m_allowOffhandGrab, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_allowOffhandGrab, put = __cordl_internal_set_m_allowOffhandGrab)) bool m_allowOffhandGrab;

  /// @brief Field m_grabPoints, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabPoints,
                      put = __cordl_internal_set_m_grabPoints))::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> m_grabPoints;

  /// @brief Field m_grabbedBy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabbedBy, put = __cordl_internal_set_m_grabbedBy))::UnityW<::GlobalNamespace::OVRGrabber> m_grabbedBy;

  /// @brief Field m_grabbedCollider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_grabbedCollider, put = __cordl_internal_set_m_grabbedCollider))::UnityW<::UnityEngine::Collider> m_grabbedCollider;

  /// @brief Field m_grabbedKinematic, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_grabbedKinematic, put = __cordl_internal_set_m_grabbedKinematic)) bool m_grabbedKinematic;

  /// @brief Field m_snapOffset, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_snapOffset, put = __cordl_internal_set_m_snapOffset))::UnityW<::UnityEngine::Transform> m_snapOffset;

  /// @brief Field m_snapOrientation, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_snapOrientation, put = __cordl_internal_set_m_snapOrientation)) bool m_snapOrientation;

  /// @brief Field m_snapPosition, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_snapPosition, put = __cordl_internal_set_m_snapPosition)) bool m_snapPosition;

  __declspec(property(get = get_snapOffset))::UnityW<::UnityEngine::Transform> snapOffset;

  __declspec(property(get = get_snapOrientation)) bool snapOrientation;

  __declspec(property(get = get_snapPosition)) bool snapPosition;

  /// @brief Method Awake, addr 0x2b809d4, size 0x14c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GrabBegin, addr 0x2b80884, size 0x7c, virtual true, abstract: false, final false
  inline void GrabBegin(::GlobalNamespace::OVRGrabber* hand, ::UnityEngine::Collider* grabPoint);

  /// @brief Method GrabEnd, addr 0x2b80900, size 0xd4, virtual true, abstract: false, final false
  inline void GrabEnd(::UnityEngine::Vector3 linearVelocity, ::UnityEngine::Vector3 angularVelocity);

  static inline ::GlobalNamespace::OVRGrabbable* New_ctor();

  /// @brief Method OnDestroy, addr 0x2b80b84, size 0x84, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x2b80b20, size 0x64, virtual true, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get_m_allowOffhandGrab() const;

  constexpr bool& __cordl_internal_get_m_allowOffhandGrab();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> const& __cordl_internal_get_m_grabPoints() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>& __cordl_internal_get_m_grabPoints();

  constexpr ::UnityW<::GlobalNamespace::OVRGrabber> const& __cordl_internal_get_m_grabbedBy() const;

  constexpr ::UnityW<::GlobalNamespace::OVRGrabber>& __cordl_internal_get_m_grabbedBy();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_m_grabbedCollider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_m_grabbedCollider();

  constexpr bool const& __cordl_internal_get_m_grabbedKinematic() const;

  constexpr bool& __cordl_internal_get_m_grabbedKinematic();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_snapOffset() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_snapOffset();

  constexpr bool const& __cordl_internal_get_m_snapOrientation() const;

  constexpr bool& __cordl_internal_get_m_snapOrientation();

  constexpr bool const& __cordl_internal_get_m_snapPosition() const;

  constexpr bool& __cordl_internal_get_m_snapPosition();

  constexpr void __cordl_internal_set_m_allowOffhandGrab(bool value);

  constexpr void __cordl_internal_set_m_grabPoints(::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> value);

  constexpr void __cordl_internal_set_m_grabbedBy(::UnityW<::GlobalNamespace::OVRGrabber> value);

  constexpr void __cordl_internal_set_m_grabbedCollider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_m_grabbedKinematic(bool value);

  constexpr void __cordl_internal_set_m_snapOffset(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_snapOrientation(bool value);

  constexpr void __cordl_internal_set_m_snapPosition(bool value);

  /// @brief Method .ctor, addr 0x2b80cb8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowOffhandGrab, addr 0x2b807bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowOffhandGrab();

  /// @brief Method get_grabPoints, addr 0x2b8087c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> get_grabPoints();

  /// @brief Method get_grabbedBy, addr 0x2b8083c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OVRGrabber> get_grabbedBy();

  /// @brief Method get_grabbedRigidbody, addr 0x2b80860, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rigidbody> get_grabbedRigidbody();

  /// @brief Method get_grabbedTransform, addr 0x2b80844, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_grabbedTransform();

  /// @brief Method get_isGrabbed, addr 0x2b807c4, size 0x60, virtual false, abstract: false, final false
  inline bool get_isGrabbed();

  /// @brief Method get_snapOffset, addr 0x2b80834, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_snapOffset();

  /// @brief Method get_snapOrientation, addr 0x2b8082c, size 0x8, virtual false, abstract: false, final false
  inline bool get_snapOrientation();

  /// @brief Method get_snapPosition, addr 0x2b80824, size 0x8, virtual false, abstract: false, final false
  inline bool get_snapPosition();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGrabbable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGrabbable(OVRGrabbable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGrabbable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGrabbable(OVRGrabbable const&) = delete;

  /// @brief Field m_allowOffhandGrab, offset: 0x18, size: 0x1, def value: None
  bool ___m_allowOffhandGrab;

  /// @brief Field m_snapPosition, offset: 0x19, size: 0x1, def value: None
  bool ___m_snapPosition;

  /// @brief Field m_snapOrientation, offset: 0x1a, size: 0x1, def value: None
  bool ___m_snapOrientation;

  /// @brief Field m_snapOffset, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_snapOffset;

  /// @brief Field m_grabPoints, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> ___m_grabPoints;

  /// @brief Field m_grabbedKinematic, offset: 0x30, size: 0x1, def value: None
  bool ___m_grabbedKinematic;

  /// @brief Field m_grabbedCollider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___m_grabbedCollider;

  /// @brief Field m_grabbedBy, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRGrabber> ___m_grabbedBy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGrabbable, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_allowOffhandGrab) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_snapPosition) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_snapOrientation) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_snapOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_grabPoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_grabbedKinematic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_grabbedCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGrabbable, ___m_grabbedBy) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGrabbable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGrabbable*, "", "OVRGrabbable");
