#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InteractionTrigger)
namespace GlobalNamespace {
class __InteractionTrigger__Range__Interaction;
}
namespace RootMotion::FinalIK {
struct FullBodyBipedEffector;
}
namespace RootMotion::FinalIK {
class InteractionObject;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CameraPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CharacterPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class __InteractionTrigger__Range__Interaction;
}
namespace RootMotion::FinalIK {
class InteractionTrigger;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CameraPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__CharacterPosition;
}
namespace RootMotion::FinalIK {
class __InteractionTrigger__Range;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__InteractionTrigger__Range__Interaction);
MARK_REF_PTR_T(::RootMotion::FinalIK::InteractionTrigger);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition);
MARK_REF_PTR_T(::RootMotion::FinalIK::__InteractionTrigger__Range);
// Type: ::CharacterPosition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionTrigger::CharacterPosition*
class CORDL_TYPE __InteractionTrigger__CharacterPosition : public ::System::Object {
public:
  // Declarations
  /// @brief Field angleOffset, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_angleOffset, put = __cordl_internal_set_angleOffset)) float_t angleOffset;

  __declspec(property(get = get_direction3D))::UnityEngine::Vector3 direction3D;

  /// @brief Field fixYAxis, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_fixYAxis, put = __cordl_internal_set_fixYAxis)) bool fixYAxis;

  /// @brief Field maxAngle, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAngle, put = __cordl_internal_set_maxAngle)) float_t maxAngle;

  /// @brief Field offset, offset 0x14, size 0x8
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector2 offset;

  __declspec(property(get = get_offset3D))::UnityEngine::Vector3 offset3D;

  /// @brief Field orbit, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_orbit, put = __cordl_internal_set_orbit)) bool orbit;

  /// @brief Field radius, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_radius, put = __cordl_internal_set_radius)) float_t radius;

  /// @brief Field use, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_use, put = __cordl_internal_set_use)) bool use;

  /// @brief Method IsInRange, addr 0x138f0d8, size 0x764, virtual false, abstract: false, final false
  inline bool IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* trigger, ByRef<float_t> error);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* New_ctor();

  constexpr float_t const& __cordl_internal_get_angleOffset() const;

  constexpr float_t& __cordl_internal_get_angleOffset();

  constexpr bool const& __cordl_internal_get_fixYAxis() const;

  constexpr bool& __cordl_internal_get_fixYAxis();

  constexpr float_t const& __cordl_internal_get_maxAngle() const;

  constexpr float_t& __cordl_internal_get_maxAngle();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_offset();

  constexpr bool const& __cordl_internal_get_orbit() const;

  constexpr bool& __cordl_internal_get_orbit();

  constexpr float_t const& __cordl_internal_get_radius() const;

  constexpr float_t& __cordl_internal_get_radius();

  constexpr bool const& __cordl_internal_get_use() const;

  constexpr bool& __cordl_internal_get_use();

  constexpr void __cordl_internal_set_angleOffset(float_t value);

  constexpr void __cordl_internal_set_fixYAxis(bool value);

  constexpr void __cordl_internal_set_maxAngle(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_orbit(bool value);

  constexpr void __cordl_internal_set_radius(float_t value);

  constexpr void __cordl_internal_set_use(bool value);

  /// @brief Method .ctor, addr 0x138f83c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_direction3D, addr 0x138f018, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_direction3D();

  /// @brief Method get_offset3D, addr 0x138f00c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_offset3D();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__CharacterPosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CharacterPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__CharacterPosition(__InteractionTrigger__CharacterPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CharacterPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__CharacterPosition(__InteractionTrigger__CharacterPosition const&) = delete;

  /// @brief Field use, offset: 0x10, size: 0x1, def value: None
  bool ___use;

  /// @brief Field offset, offset: 0x14, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___offset;

  /// @brief Field angleOffset, offset: 0x1c, size: 0x4, def value: None
  float_t ___angleOffset;

  /// @brief Field maxAngle, offset: 0x20, size: 0x4, def value: None
  float_t ___maxAngle;

  /// @brief Field radius, offset: 0x24, size: 0x4, def value: None
  float_t ___radius;

  /// @brief Field orbit, offset: 0x28, size: 0x1, def value: None
  bool ___orbit;

  /// @brief Field fixYAxis, offset: 0x29, size: 0x1, def value: None
  bool ___fixYAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___use) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___offset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___angleOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___maxAngle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___radius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___orbit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition, ___fixYAxis) == 0x29, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::CameraPosition
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionTrigger::CameraPosition*
class CORDL_TYPE __InteractionTrigger__CameraPosition : public ::System::Object {
public:
  // Declarations
  /// @brief Field direction, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field fixYAxis, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_fixYAxis, put = __cordl_internal_set_fixYAxis)) bool fixYAxis;

  /// @brief Field lookAtTarget, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_lookAtTarget, put = __cordl_internal_set_lookAtTarget))::UnityW<::UnityEngine::Collider> lookAtTarget;

  /// @brief Field maxAngle, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxAngle, put = __cordl_internal_set_maxAngle)) float_t maxAngle;

  /// @brief Field maxDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_maxDistance, put = __cordl_internal_set_maxDistance)) float_t maxDistance;

  /// @brief Method GetRotation, addr 0x138f850, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetRotation();

  /// @brief Method IsInRange, addr 0x138f9c8, size 0x308, virtual false, abstract: false, final false
  inline bool IsInRange(::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit hit, ::UnityEngine::Transform* trigger, ByRef<float_t> error);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction();

  constexpr bool const& __cordl_internal_get_fixYAxis() const;

  constexpr bool& __cordl_internal_get_fixYAxis();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_lookAtTarget() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_lookAtTarget();

  constexpr float_t const& __cordl_internal_get_maxAngle() const;

  constexpr float_t& __cordl_internal_get_maxAngle();

  constexpr float_t const& __cordl_internal_get_maxDistance() const;

  constexpr float_t& __cordl_internal_get_maxDistance();

  constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_fixYAxis(bool value);

  constexpr void __cordl_internal_set_lookAtTarget(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_maxAngle(float_t value);

  constexpr void __cordl_internal_set_maxDistance(float_t value);

  /// @brief Method .ctor, addr 0x138fcd0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__CameraPosition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CameraPosition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__CameraPosition(__InteractionTrigger__CameraPosition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__CameraPosition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__CameraPosition(__InteractionTrigger__CameraPosition const&) = delete;

  /// @brief Field lookAtTarget, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___lookAtTarget;

  /// @brief Field direction, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  /// @brief Field maxDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___maxDistance;

  /// @brief Field maxAngle, offset: 0x28, size: 0x4, def value: None
  float_t ___maxAngle;

  /// @brief Field fixYAxis, offset: 0x2c, size: 0x1, def value: None
  bool ___fixYAxis;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, ___lookAtTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, ___direction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, ___maxDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, ___maxAngle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition, ___fixYAxis) == 0x2c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Interaction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::InteractionTrigger::Range::Interaction*
class CORDL_TYPE __InteractionTrigger__Range__Interaction : public ::System::Object {
public:
  // Declarations
  /// @brief Field effectors, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_effectors,
                      put = __cordl_internal_set_effectors))::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> effectors;

  /// @brief Field interactionObject, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_interactionObject, put = __cordl_internal_set_interactionObject))::UnityW<::RootMotion::FinalIK::InteractionObject> interactionObject;

  static inline ::GlobalNamespace::__InteractionTrigger__Range__Interaction* New_ctor();

  constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> const& __cordl_internal_get_effectors() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*>& __cordl_internal_get_effectors();

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject> const& __cordl_internal_get_interactionObject() const;

  constexpr ::UnityW<::RootMotion::FinalIK::InteractionObject>& __cordl_internal_get_interactionObject();

  constexpr void __cordl_internal_set_effectors(::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> value);

  constexpr void __cordl_internal_set_interactionObject(::UnityW<::RootMotion::FinalIK::InteractionObject> value);

  /// @brief Method .ctor, addr 0x138fd54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__Range__Interaction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range__Interaction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__Range__Interaction(__InteractionTrigger__Range__Interaction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range__Interaction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__Range__Interaction(__InteractionTrigger__Range__Interaction const&) = delete;

  /// @brief Field interactionObject, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::InteractionObject> ___interactionObject;

  /// @brief Field effectors, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::FullBodyBipedEffector, ::Array<::RootMotion::FinalIK::FullBodyBipedEffector>*> ___effectors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InteractionTrigger__Range__Interaction, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InteractionTrigger__Range__Interaction, ___interactionObject) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InteractionTrigger__Range__Interaction, ___effectors) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::Range
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::InteractionTrigger::Range*
class CORDL_TYPE __InteractionTrigger__Range : public ::System::Object {
public:
  // Declarations
  using Interaction = ::GlobalNamespace::__InteractionTrigger__Range__Interaction;

  /// @brief Field cameraPosition, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraPosition, put = __cordl_internal_set_cameraPosition))::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* cameraPosition;

  /// @brief Field characterPosition, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_characterPosition, put = __cordl_internal_set_characterPosition))::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* characterPosition;

  /// @brief Field interactions, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_interactions, put = __cordl_internal_set_interactions))::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*,
                                                                                                                 ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> interactions;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field show, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_show, put = __cordl_internal_set_show)) bool show;

  /// @brief Method IsInRange, addr 0x138ef04, size 0xb0, virtual false, abstract: false, final false
  inline bool IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit, ::UnityEngine::Transform* trigger, ByRef<float_t> maxError);

  static inline ::RootMotion::FinalIK::__InteractionTrigger__Range* New_ctor();

  constexpr ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*& __cordl_internal_get_cameraPosition();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*> const& __cordl_internal_get_cameraPosition() const;

  constexpr ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*& __cordl_internal_get_characterPosition();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*> const& __cordl_internal_get_characterPosition() const;

  constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> const&
  __cordl_internal_get_interactions() const;

  constexpr ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*>& __cordl_internal_get_interactions();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr bool const& __cordl_internal_get_show() const;

  constexpr bool& __cordl_internal_get_show();

  constexpr void __cordl_internal_set_cameraPosition(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* value);

  constexpr void __cordl_internal_set_characterPosition(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* value);

  constexpr void
  __cordl_internal_set_interactions(::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_show(bool value);

  /// @brief Method .ctor, addr 0x138fd44, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InteractionTrigger__Range();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InteractionTrigger__Range(__InteractionTrigger__Range&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InteractionTrigger__Range", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InteractionTrigger__Range(__InteractionTrigger__Range const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field show, offset: 0x18, size: 0x1, def value: None
  bool ___show;

  /// @brief Field characterPosition, offset: 0x20, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition* ___characterPosition;

  /// @brief Field cameraPosition, offset: 0x28, size: 0x8, def value: None
  ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition* ___cameraPosition;

  /// @brief Field interactions, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__InteractionTrigger__Range__Interaction*, ::Array<::GlobalNamespace::__InteractionTrigger__Range__Interaction*>*> ___interactions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__InteractionTrigger__Range, 0x38>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__Range, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__Range, ___show) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__Range, ___characterPosition) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__Range, ___cameraPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__InteractionTrigger__Range, ___interactions) == 0x30, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::InteractionTrigger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::InteractionTrigger*
class CORDL_TYPE InteractionTrigger : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using CameraPosition = ::RootMotion::FinalIK::__InteractionTrigger__CameraPosition;

  using CharacterPosition = ::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition;

  using Range = ::RootMotion::FinalIK::__InteractionTrigger__Range;

  /// @brief Field ranges, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ranges,
                      put = __cordl_internal_set_ranges))::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> ranges;

  /// @brief Method ASThread, addr 0x138eebc, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetBestRangeIndex, addr 0x138d844, size 0x1b4, virtual false, abstract: false, final false
  inline int32_t GetBestRangeIndex(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit);

  static inline ::RootMotion::FinalIK::InteractionTrigger* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x138edf0, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenTutorial4, addr 0x138ee34, size 0x44, virtual false, abstract: false, final false
  inline void OpenTutorial4();

  /// @brief Method OpenUserManual, addr 0x138edac, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method Start, addr 0x138ef00, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method SupportGroup, addr 0x138ee78, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> const& __cordl_internal_get_ranges() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*>& __cordl_internal_get_ranges();

  constexpr void __cordl_internal_set_ranges(::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> value);

  /// @brief Method .ctor, addr 0x138efb4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteractionTrigger();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteractionTrigger(InteractionTrigger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteractionTrigger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteractionTrigger(InteractionTrigger const&) = delete;

  /// @brief Field ranges, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__InteractionTrigger__Range*, ::Array<::RootMotion::FinalIK::__InteractionTrigger__Range*>*> ___ranges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::InteractionTrigger, 0x20>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::InteractionTrigger, ___ranges) == 0x18, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__InteractionTrigger__Range__Interaction);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InteractionTrigger__Range__Interaction*, "RootMotion.FinalIK", "InteractionTrigger/Range/Interaction");
NEED_NO_BOX(::RootMotion::FinalIK::InteractionTrigger);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::InteractionTrigger*, "RootMotion.FinalIK", "InteractionTrigger");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__CameraPosition*, "RootMotion.FinalIK", "InteractionTrigger/CameraPosition");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__CharacterPosition*, "RootMotion.FinalIK", "InteractionTrigger/CharacterPosition");
NEED_NO_BOX(::RootMotion::FinalIK::__InteractionTrigger__Range);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__InteractionTrigger__Range*, "RootMotion.FinalIK", "InteractionTrigger/Range");
