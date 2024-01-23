#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HitReaction)
namespace GlobalNamespace {
class __HitReaction__HitPointBone__BoneLink;
}
namespace GlobalNamespace {
class __HitReaction__HitPointEffector__EffectorLink;
}
namespace RootMotion::FinalIK {
class IKSolverFullBodyBiped;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointBone;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointEffector;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPoint;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Quaternion;
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
class __HitReaction__HitPointBone__BoneLink;
}
namespace GlobalNamespace {
class __HitReaction__HitPointEffector__EffectorLink;
}
namespace RootMotion::FinalIK {
class HitReaction;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPoint;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointBone;
}
namespace RootMotion::FinalIK {
class __HitReaction__HitPointEffector;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink);
MARK_REF_PTR_T(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::HitReaction);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPoint);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPointBone);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReaction__HitPointEffector);
// Type: ::HitPoint
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12638))
// CS Name: ::HitReaction::HitPoint*
class CORDL_TYPE __HitReaction__HitPoint : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field collider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_collider, put = __cordl_internal_set_collider))::UnityW<::UnityEngine::Collider> collider;

  /// @brief Field crossFadeTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFadeTime, put = __cordl_internal_set_crossFadeTime)) float_t crossFadeTime;

  /// @brief Field <crossFader>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__crossFader_k__BackingField, put = __cordl_internal_set__crossFader_k__BackingField)) float_t _crossFader_k__BackingField;

  /// @brief Field <timer>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_k__BackingField, put = __cordl_internal_set__timer_k__BackingField)) float_t _timer_k__BackingField;

  /// @brief Field <force>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__force_k__BackingField, put = __cordl_internal_set__force_k__BackingField))::UnityEngine::Vector3 _force_k__BackingField;

  /// @brief Field <point>k__BackingField, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__point_k__BackingField, put = __cordl_internal_set__point_k__BackingField))::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field length, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field crossFadeSpeed, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFadeSpeed, put = __cordl_internal_set_crossFadeSpeed)) float_t crossFadeSpeed;

  /// @brief Field lastTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastTime, put = __cordl_internal_set_lastTime)) float_t lastTime;

  __declspec(property(get = get_inProgress)) bool inProgress;

  __declspec(property(get = get_crossFader, put = set_crossFader)) float_t crossFader;

  __declspec(property(get = get_timer, put = set_timer)) float_t timer;

  __declspec(property(get = get_force, put = set_force))::UnityEngine::Vector3 force;

  __declspec(property(get = get_point, put = set_point))::UnityEngine::Vector3 point;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

  constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider> value);

  constexpr float_t& __cordl_internal_get_crossFadeTime();

  constexpr float_t const& __cordl_internal_get_crossFadeTime() const;

  constexpr void __cordl_internal_set_crossFadeTime(float_t value);

  constexpr float_t& __cordl_internal_get__crossFader_k__BackingField();

  constexpr float_t const& __cordl_internal_get__crossFader_k__BackingField() const;

  constexpr void __cordl_internal_set__crossFader_k__BackingField(float_t value);

  constexpr float_t& __cordl_internal_get__timer_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timer_k__BackingField() const;

  constexpr void __cordl_internal_set__timer_k__BackingField(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__force_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__force_k__BackingField() const;

  constexpr void __cordl_internal_set__force_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__point_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__point_k__BackingField() const;

  constexpr void __cordl_internal_set__point_k__BackingField(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr float_t& __cordl_internal_get_crossFadeSpeed();

  constexpr float_t const& __cordl_internal_get_crossFadeSpeed() const;

  constexpr void __cordl_internal_set_crossFadeSpeed(float_t value);

  constexpr float_t& __cordl_internal_get_lastTime();

  constexpr float_t const& __cordl_internal_get_lastTime() const;

  constexpr void __cordl_internal_set_lastTime(float_t value);

  /// @brief Method get_inProgress, addr 0x1294f40, size 0x14, virtual false, abstract: false, final false
  inline bool get_inProgress();

  /// @brief Method get_crossFader, addr 0x1295440, size 0x8, virtual false, abstract: false, final false
  inline float_t get_crossFader();

  /// @brief Method set_crossFader, addr 0x1295448, size 0x8, virtual false, abstract: false, final false
  inline void set_crossFader(float_t value);

  /// @brief Method get_timer, addr 0x1295450, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timer();

  /// @brief Method set_timer, addr 0x1295458, size 0x8, virtual false, abstract: false, final false
  inline void set_timer(float_t value);

  /// @brief Method get_force, addr 0x1295460, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_force();

  /// @brief Method set_force, addr 0x129546c, size 0xc, virtual false, abstract: false, final false
  inline void set_force(::UnityEngine::Vector3 value);

  /// @brief Method get_point, addr 0x1295478, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method set_point, addr 0x1295484, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method Hit, addr 0x1295308, size 0x128, virtual false, abstract: false, final false
  inline void Hit(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point);

  /// @brief Method Apply, addr 0x1295014, size 0xd8, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  /// @brief Method GetLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetLength();

  /// @brief Method CrossFadeStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CrossFadeStart();

  /// @brief Method OnApply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReaction__HitPoint* New_ctor();

  /// @brief Method .ctor, addr 0x1295490, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReaction__HitPoint(__HitReaction__HitPoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReaction__HitPoint(__HitReaction__HitPoint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReaction__HitPoint();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field collider, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Collider> ___collider;

  /// @brief Field crossFadeTime, offset: 0x20, size: 0x4, def value: None
  float_t ___crossFadeTime;

  /// @brief Field <crossFader>k__BackingField, offset: 0x24, size: 0x4, def value: None
  float_t ____crossFader_k__BackingField;

  /// @brief Field <timer>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____timer_k__BackingField;

  /// @brief Field <force>k__BackingField, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____force_k__BackingField;

  /// @brief Field <point>k__BackingField, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____point_k__BackingField;

  /// @brief Field length, offset: 0x44, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field crossFadeSpeed, offset: 0x48, size: 0x4, def value: None
  float_t ___crossFadeSpeed;

  /// @brief Field lastTime, offset: 0x4c, size: 0x4, def value: None
  float_t ___lastTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPoint, 0x50>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___collider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___crossFadeTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ____crossFader_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ____timer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ____force_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ____point_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___length) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___crossFadeSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPoint, ___lastTime) == 0x4c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::EffectorLink
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(12571))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12639))
// CS Name: ::HitReaction::HitPointEffector::EffectorLink*
class CORDL_TYPE __HitReaction__HitPointEffector__EffectorLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field effector, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_effector, put = __cordl_internal_set_effector))::RootMotion::FinalIK::FullBodyBipedEffector effector;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Field lastValue, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_lastValue, put = __cordl_internal_set_lastValue))::UnityEngine::Vector3 lastValue;

  /// @brief Field current, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::UnityEngine::Vector3 current;

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& __cordl_internal_get_effector();

  constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& __cordl_internal_get_effector() const;

  constexpr void __cordl_internal_set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value);

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastValue();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastValue() const;

  constexpr void __cordl_internal_set_lastValue(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_current();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_current() const;

  constexpr void __cordl_internal_set_current(::UnityEngine::Vector3 value);

  /// @brief Method Apply, addr 0x12957c4, size 0x9c, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Vector3 offset, float_t crossFader);

  /// @brief Method CrossFadeStart, addr 0x1295620, size 0x14, virtual false, abstract: false, final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink* New_ctor();

  /// @brief Method .ctor, addr 0x1295874, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector__EffectorLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReaction__HitPointEffector__EffectorLink(__HitReaction__HitPointEffector__EffectorLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector__EffectorLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReaction__HitPointEffector__EffectorLink(__HitReaction__HitPointEffector__EffectorLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReaction__HitPointEffector__EffectorLink();

public:
  /// @brief Field effector, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::FullBodyBipedEffector ___effector;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field lastValue, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastValue;

  /// @brief Field current, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, ___effector) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, ___weight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, ___lastValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink, ___current) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HitPointEffector
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12638))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12640))
// CS Name: ::HitReaction::HitPointEffector*
class CORDL_TYPE __HitReaction__HitPointEffector : public ::RootMotion::FinalIK::__HitReaction__HitPoint {
public:
  // Declarations
  using EffectorLink = ::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink;

  /// @brief Field offsetInForceDirection, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetInForceDirection, put = __cordl_internal_set_offsetInForceDirection))::UnityEngine::AnimationCurve* offsetInForceDirection;

  /// @brief Field offsetInUpDirection, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetInUpDirection, put = __cordl_internal_set_offsetInUpDirection))::UnityEngine::AnimationCurve* offsetInUpDirection;

  /// @brief Field effectorLinks, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_effectorLinks,
                      put = __cordl_internal_set_effectorLinks))::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*,
                                                                         ::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*> effectorLinks;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_offsetInForceDirection();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_offsetInForceDirection() const;

  constexpr void __cordl_internal_set_offsetInForceDirection(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_offsetInUpDirection();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_offsetInUpDirection() const;

  constexpr void __cordl_internal_set_offsetInUpDirection(::UnityEngine::AnimationCurve* value);

  constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*>&
  __cordl_internal_get_effectorLinks();

  constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*> const&
  __cordl_internal_get_effectorLinks() const;

  constexpr void
  __cordl_internal_set_effectorLinks(::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*> value);

  /// @brief Method GetLength, addr 0x12954a4, size 0x11c, virtual true, abstract: false, final false
  inline float_t GetLength();

  /// @brief Method CrossFadeStart, addr 0x12955c0, size 0x60, virtual true, abstract: false, final false
  inline void CrossFadeStart();

  /// @brief Method OnApply, addr 0x1295634, size 0x190, virtual true, abstract: false, final false
  inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReaction__HitPointEffector* New_ctor();

  /// @brief Method .ctor, addr 0x1295860, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReaction__HitPointEffector(__HitReaction__HitPointEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReaction__HitPointEffector(__HitReaction__HitPointEffector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReaction__HitPointEffector();

public:
  /// @brief Field offsetInForceDirection, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___offsetInForceDirection;

  /// @brief Field offsetInUpDirection, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___offsetInUpDirection;

  /// @brief Field effectorLinks, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*>*> ___effectorLinks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPointEffector, 0x68>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointEffector, ___offsetInForceDirection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointEffector, ___offsetInUpDirection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointEffector, ___effectorLinks) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::BoneLink
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12641))
// CS Name: ::HitReaction::HitPointBone::BoneLink*
class CORDL_TYPE __HitReaction__HitPointBone__BoneLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field bone, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bone, put = __cordl_internal_set_bone))::UnityW<::UnityEngine::Transform> bone;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Field lastValue, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_lastValue, put = __cordl_internal_set_lastValue))::UnityEngine::Quaternion lastValue;

  /// @brief Field current, offset 0x2c, size 0x10
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::UnityEngine::Quaternion current;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone() const;

  constexpr void __cordl_internal_set_bone(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_weight();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr void __cordl_internal_set_weight(float_t value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastValue();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastValue() const;

  constexpr void __cordl_internal_set_lastValue(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_current();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_current() const;

  constexpr void __cordl_internal_set_current(::UnityEngine::Quaternion value);

  /// @brief Method Apply, addr 0x1295b34, size 0x18c, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::UnityEngine::Quaternion offset, float_t crossFader);

  /// @brief Method CrossFadeStart, addr 0x1295960, size 0xc, virtual false, abstract: false, final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReaction__HitPointBone__BoneLink* New_ctor();

  /// @brief Method .ctor, addr 0x1295cd4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone__BoneLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReaction__HitPointBone__BoneLink(__HitReaction__HitPointBone__BoneLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone__BoneLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReaction__HitPointBone__BoneLink(__HitReaction__HitPointBone__BoneLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReaction__HitPointBone__BoneLink();

public:
  /// @brief Field bone, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field lastValue, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastValue;

  /// @brief Field current, offset: 0x2c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, ___bone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, ___lastValue) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink, ___current) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::HitPointBone
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12638))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12642))
// CS Name: ::HitReaction::HitPointBone*
class CORDL_TYPE __HitReaction__HitPointBone : public ::RootMotion::FinalIK::__HitReaction__HitPoint {
public:
  // Declarations
  using BoneLink = ::GlobalNamespace::__HitReaction__HitPointBone__BoneLink;

  /// @brief Field aroundCenterOfMass, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_aroundCenterOfMass, put = __cordl_internal_set_aroundCenterOfMass))::UnityEngine::AnimationCurve* aroundCenterOfMass;

  /// @brief Field boneLinks, offset 0x58, size 0x8
  __declspec(
      property(get = __cordl_internal_get_boneLinks,
               put = __cordl_internal_set_boneLinks))::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*> boneLinks;

  /// @brief Field rigidbody, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rigidbody, put = __cordl_internal_set_rigidbody))::UnityW<::UnityEngine::Rigidbody> rigidbody;

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_aroundCenterOfMass();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_aroundCenterOfMass() const;

  constexpr void __cordl_internal_set_aroundCenterOfMass(::UnityEngine::AnimationCurve* value);

  constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*>& __cordl_internal_get_boneLinks();

  constexpr ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*> const& __cordl_internal_get_boneLinks() const;

  constexpr void __cordl_internal_set_boneLinks(::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*> value);

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

  constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  /// @brief Method GetLength, addr 0x129587c, size 0x8c, virtual true, abstract: false, final false
  inline float_t GetLength();

  /// @brief Method CrossFadeStart, addr 0x1295908, size 0x58, virtual true, abstract: false, final false
  inline void CrossFadeStart();

  /// @brief Method OnApply, addr 0x129596c, size 0x1c8, virtual true, abstract: false, final false
  inline void OnApply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReaction__HitPointBone* New_ctor();

  /// @brief Method .ctor, addr 0x1295cc0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReaction__HitPointBone(__HitReaction__HitPointBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReaction__HitPointBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReaction__HitPointBone(__HitReaction__HitPointBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReaction__HitPointBone();

public:
  /// @brief Field aroundCenterOfMass, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___aroundCenterOfMass;

  /// @brief Field boneLinks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, ::Array<::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*>*> ___boneLinks;

  /// @brief Field rigidbody, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rigidbody;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReaction__HitPointBone, 0x68>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointBone, ___aroundCenterOfMass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointBone, ___boneLinks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReaction__HitPointBone, ___rigidbody) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::HitReaction
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12656))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12643))
// CS Name: ::RootMotion.FinalIK::HitReaction*
class CORDL_TYPE HitReaction : public ::RootMotion::FinalIK::OffsetModifier {
public:
  // Declarations
  using HitPointBone = ::RootMotion::FinalIK::__HitReaction__HitPointBone;

  using HitPointEffector = ::RootMotion::FinalIK::__HitReaction__HitPointEffector;

  using HitPoint = ::RootMotion::FinalIK::__HitReaction__HitPoint;

  /// @brief Field effectorHitPoints, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_effectorHitPoints,
                      put = __cordl_internal_set_effectorHitPoints))::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*,
                                                                             ::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*> effectorHitPoints;

  /// @brief Field boneHitPoints, offset 0x38, size 0x8
  __declspec(
      property(get = __cordl_internal_get_boneHitPoints,
               put = __cordl_internal_set_boneHitPoints))::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*> boneHitPoints;

  __declspec(property(get = get_inProgress)) bool inProgress;

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*>& __cordl_internal_get_effectorHitPoints();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*> const& __cordl_internal_get_effectorHitPoints() const;

  constexpr void __cordl_internal_set_effectorHitPoints(::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*>& __cordl_internal_get_boneHitPoints();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*> const& __cordl_internal_get_boneHitPoints() const;

  constexpr void __cordl_internal_set_boneHitPoints(::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*> value);

  /// @brief Method get_inProgress, addr 0x1294ea4, size 0x9c, virtual false, abstract: false, final false
  inline bool get_inProgress();

  /// @brief Method OnModifyOffset, addr 0x1294f54, size 0xc0, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  /// @brief Method Hit, addr 0x12950ec, size 0x21c, virtual false, abstract: false, final false
  inline void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point);

  static inline ::RootMotion::FinalIK::HitReaction* New_ctor();

  /// @brief Method .ctor, addr 0x1295430, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HitReaction(HitReaction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HitReaction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HitReaction(HitReaction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HitReaction();

public:
  /// @brief Field effectorHitPoints, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointEffector*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointEffector*>*> ___effectorHitPoints;

  /// @brief Field boneHitPoints, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__HitReaction__HitPointBone*, ::Array<::RootMotion::FinalIK::__HitReaction__HitPointBone*>*> ___boneHitPoints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::HitReaction, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HitReaction, ___effectorHitPoints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HitReaction, ___boneHitPoints) == 0x38, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReaction__HitPointBone__BoneLink*, "RootMotion.FinalIK", "HitReaction/HitPointBone/BoneLink");
NEED_NO_BOX(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReaction__HitPointEffector__EffectorLink*, "RootMotion.FinalIK", "HitReaction/HitPointEffector/EffectorLink");
NEED_NO_BOX(::RootMotion::FinalIK::HitReaction);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReaction*, "RootMotion.FinalIK", "HitReaction");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPoint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPoint*, "RootMotion.FinalIK", "HitReaction/HitPoint");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPointBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPointBone*, "RootMotion.FinalIK", "HitReaction/HitPointBone");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReaction__HitPointEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReaction__HitPointEffector*, "RootMotion.FinalIK", "HitReaction/HitPointEffector");
