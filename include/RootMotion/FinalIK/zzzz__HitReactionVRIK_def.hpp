#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverVR_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifierVRIK_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitReactionVRIK)
namespace GlobalNamespace {
class __HitReactionVRIK__PositionOffset__PositionOffsetLink;
}
namespace GlobalNamespace {
class __HitReactionVRIK__RotationOffset__RotationOffsetLink;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__Offset;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__PositionOffset;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__RotationOffset;
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
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class __HitReactionVRIK__PositionOffset__PositionOffsetLink;
}
namespace GlobalNamespace {
class __HitReactionVRIK__RotationOffset__RotationOffsetLink;
}
namespace RootMotion::FinalIK {
class HitReactionVRIK;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__Offset;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__PositionOffset;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__RotationOffset;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink);
MARK_REF_PTR_T(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink);
MARK_REF_PTR_T(::RootMotion::FinalIK::HitReactionVRIK);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReactionVRIK__Offset);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset);
MARK_REF_PTR_T(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset);
// Type: ::Offset
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::HitReactionVRIK::Offset*
class CORDL_TYPE __HitReactionVRIK__Offset : public ::System::Object {
public:
  // Declarations
  /// @brief Field <crossFader>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__crossFader_k__BackingField, put = __cordl_internal_set__crossFader_k__BackingField)) float_t _crossFader_k__BackingField;

  /// @brief Field <force>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__force_k__BackingField, put = __cordl_internal_set__force_k__BackingField))::UnityEngine::Vector3 _force_k__BackingField;

  /// @brief Field <point>k__BackingField, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__point_k__BackingField, put = __cordl_internal_set__point_k__BackingField))::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field <timer>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__timer_k__BackingField, put = __cordl_internal_set__timer_k__BackingField)) float_t _timer_k__BackingField;

  /// @brief Field collider, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_collider, put = __cordl_internal_set_collider))::UnityW<::UnityEngine::Collider> collider;

  /// @brief Field crossFadeSpeed, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFadeSpeed, put = __cordl_internal_set_crossFadeSpeed)) float_t crossFadeSpeed;

  /// @brief Field crossFadeTime, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFadeTime, put = __cordl_internal_set_crossFadeTime)) float_t crossFadeTime;

  __declspec(property(get = get_crossFader, put = set_crossFader)) float_t crossFader;

  __declspec(property(get = get_force, put = set_force))::UnityEngine::Vector3 force;

  /// @brief Field lastTime, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_lastTime, put = __cordl_internal_set_lastTime)) float_t lastTime;

  /// @brief Field length, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  __declspec(property(get = get_point, put = set_point))::UnityEngine::Vector3 point;

  __declspec(property(get = get_timer, put = set_timer)) float_t timer;

  /// @brief Method Apply, addr 0x13993e4, size 0xe0, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  /// @brief Method CrossFadeStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CrossFadeStart();

  /// @brief Method GetLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  /// @brief Method Hit, addr 0x13996e8, size 0x130, virtual false, abstract: false, final false
  inline void Hit(::UnityEngine::Vector3 force, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, ::UnityEngine::Vector3 point);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__Offset* New_ctor();

  /// @brief Method OnApply, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  constexpr float_t const& __cordl_internal_get__crossFader_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__crossFader_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__force_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__force_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__point_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__point_k__BackingField();

  constexpr float_t const& __cordl_internal_get__timer_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__timer_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

  constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider();

  constexpr float_t const& __cordl_internal_get_crossFadeSpeed() const;

  constexpr float_t& __cordl_internal_get_crossFadeSpeed();

  constexpr float_t const& __cordl_internal_get_crossFadeTime() const;

  constexpr float_t& __cordl_internal_get_crossFadeTime();

  constexpr float_t const& __cordl_internal_get_lastTime() const;

  constexpr float_t& __cordl_internal_get_lastTime();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set__crossFader_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__force_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__point_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__timer_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider> value);

  constexpr void __cordl_internal_set_crossFadeSpeed(float_t value);

  constexpr void __cordl_internal_set_crossFadeTime(float_t value);

  constexpr void __cordl_internal_set_lastTime(float_t value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x1399888, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_crossFader, addr 0x1399838, size 0x8, virtual false, abstract: false, final false
  inline float_t get_crossFader();

  /// @brief Method get_force, addr 0x1399858, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_force();

  /// @brief Method get_point, addr 0x1399870, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method get_timer, addr 0x1399848, size 0x8, virtual false, abstract: false, final false
  inline float_t get_timer();

  /// @brief Method set_crossFader, addr 0x1399840, size 0x8, virtual false, abstract: false, final false
  inline void set_crossFader(float_t value);

  /// @brief Method set_force, addr 0x1399864, size 0xc, virtual false, abstract: false, final false
  inline void set_force(::UnityEngine::Vector3 value);

  /// @brief Method set_point, addr 0x139987c, size 0xc, virtual false, abstract: false, final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method set_timer, addr 0x1399850, size 0x8, virtual false, abstract: false, final false
  inline void set_timer(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__Offset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__Offset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__Offset(__HitReactionVRIK__Offset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__Offset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__Offset(__HitReactionVRIK__Offset const&) = delete;

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
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReactionVRIK__Offset, 0x50>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___collider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___crossFadeTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ____crossFader_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ____timer_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ____force_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ____point_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___length) == 0x44, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___crossFadeSpeed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__Offset, ___lastTime) == 0x4c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::PositionOffsetLink
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitReactionVRIK::PositionOffset::PositionOffsetLink*
class CORDL_TYPE __HitReactionVRIK__PositionOffset__PositionOffsetLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field current, offset 0x24, size 0xc
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::UnityEngine::Vector3 current;

  /// @brief Field lastValue, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_lastValue, put = __cordl_internal_set_lastValue))::UnityEngine::Vector3 lastValue;

  /// @brief Field positionOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_positionOffset, put = __cordl_internal_set_positionOffset))::RootMotion::FinalIK::__IKSolverVR__PositionOffset positionOffset;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method Apply, addr 0x1399c6c, size 0x78, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Vector3 offset, float_t crossFader);

  /// @brief Method CrossFadeStart, addr 0x1399a90, size 0x14, virtual false, abstract: false, final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_current() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_current();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastValue() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastValue();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const& __cordl_internal_get_positionOffset() const;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset& __cordl_internal_get_positionOffset();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_current(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_lastValue(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_positionOffset(::RootMotion::FinalIK::__IKSolverVR__PositionOffset value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1399d00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__PositionOffset__PositionOffsetLink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__PositionOffset__PositionOffsetLink(__HitReactionVRIK__PositionOffset__PositionOffsetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__PositionOffset__PositionOffsetLink(__HitReactionVRIK__PositionOffset__PositionOffsetLink const&) = delete;

  /// @brief Field positionOffset, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__PositionOffset ___positionOffset;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field lastValue, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastValue;

  /// @brief Field current, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink, ___positionOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink, ___weight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink, ___lastValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink, ___current) == 0x24, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PositionOffset
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::HitReactionVRIK::PositionOffset*
class CORDL_TYPE __HitReactionVRIK__PositionOffset : public ::RootMotion::FinalIK::__HitReactionVRIK__Offset {
public:
  // Declarations
  using PositionOffsetLink = ::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink;

  /// @brief Field forceDirCurveIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_forceDirCurveIndex, put = __cordl_internal_set_forceDirCurveIndex)) int32_t forceDirCurveIndex;

  /// @brief Field offsetLinks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetLinks,
                      put = __cordl_internal_set_offsetLinks))::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*,
                                                                       ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> offsetLinks;

  /// @brief Field upDirCurveIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_upDirCurveIndex, put = __cordl_internal_set_upDirCurveIndex)) int32_t upDirCurveIndex;

  /// @brief Method CrossFadeStart, addr 0x1399a30, size 0x60, virtual true, abstract: false, final false
  inline void CrossFadeStart();

  /// @brief Method GetLength, addr 0x139989c, size 0x194, virtual true, abstract: false, final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset* New_ctor();

  /// @brief Method OnApply, addr 0x1399aa4, size 0x1c8, virtual true, abstract: false, final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  constexpr int32_t const& __cordl_internal_get_forceDirCurveIndex() const;

  constexpr int32_t& __cordl_internal_get_forceDirCurveIndex();

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> const&
  __cordl_internal_get_offsetLinks() const;

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*>&
  __cordl_internal_get_offsetLinks();

  constexpr int32_t const& __cordl_internal_get_upDirCurveIndex() const;

  constexpr int32_t& __cordl_internal_get_upDirCurveIndex();

  constexpr void __cordl_internal_set_forceDirCurveIndex(int32_t value);

  constexpr void __cordl_internal_set_offsetLinks(
      ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> value);

  constexpr void __cordl_internal_set_upDirCurveIndex(int32_t value);

  /// @brief Method .ctor, addr 0x1399ce4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__PositionOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__PositionOffset(__HitReactionVRIK__PositionOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__PositionOffset(__HitReactionVRIK__PositionOffset const&) = delete;

  /// @brief Field forceDirCurveIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___forceDirCurveIndex;

  /// @brief Field upDirCurveIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___upDirCurveIndex;

  /// @brief Field offsetLinks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> ___offsetLinks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset, 0x60>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset, ___forceDirCurveIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset, ___upDirCurveIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset, ___offsetLinks) == 0x58, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::RotationOffsetLink
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::HitReactionVRIK::RotationOffset::RotationOffsetLink*
class CORDL_TYPE __HitReactionVRIK__RotationOffset__RotationOffsetLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field current, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current))::UnityEngine::Quaternion current;

  /// @brief Field lastValue, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_lastValue, put = __cordl_internal_set_lastValue))::UnityEngine::Quaternion lastValue;

  /// @brief Field rotationOffset, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset))::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method Apply, addr 0x139a0c0, size 0x108, virtual false, abstract: false, final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Quaternion offset, float_t crossFader);

  /// @brief Method CrossFadeStart, addr 0x1399e38, size 0xc, virtual false, abstract: false, final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink* New_ctor();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_current() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_current();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastValue() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastValue();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset const& __cordl_internal_get_rotationOffset() const;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset& __cordl_internal_get_rotationOffset();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_current(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_lastValue(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_rotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x139a1dc, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__RotationOffset__RotationOffsetLink();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__RotationOffset__RotationOffsetLink(__HitReactionVRIK__RotationOffset__RotationOffsetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__RotationOffset__RotationOffsetLink(__HitReactionVRIK__RotationOffset__RotationOffsetLink const&) = delete;

  /// @brief Field rotationOffset, offset: 0x10, size: 0x4, def value: None
  ::RootMotion::FinalIK::__IKSolverVR__RotationOffset ___rotationOffset;

  /// @brief Field weight, offset: 0x14, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field lastValue, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastValue;

  /// @brief Field current, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink, ___rotationOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink, ___weight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink, ___lastValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink, ___current) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::RotationOffset
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::HitReactionVRIK::RotationOffset*
class CORDL_TYPE __HitReactionVRIK__RotationOffset : public ::RootMotion::FinalIK::__HitReactionVRIK__Offset {
public:
  // Declarations
  using RotationOffsetLink = ::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink;

  /// @brief Field curveIndex, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_curveIndex, put = __cordl_internal_set_curveIndex)) int32_t curveIndex;

  /// @brief Field offsetLinks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetLinks,
                      put = __cordl_internal_set_offsetLinks))::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*,
                                                                       ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> offsetLinks;

  /// @brief Field rigidbody, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rigidbody, put = __cordl_internal_set_rigidbody))::UnityW<::UnityEngine::Rigidbody> rigidbody;

  /// @brief Method CrossFadeStart, addr 0x1399de0, size 0x58, virtual true, abstract: false, final false
  inline void CrossFadeStart();

  /// @brief Method GetLength, addr 0x1399d08, size 0xd8, virtual true, abstract: false, final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset* New_ctor();

  /// @brief Method OnApply, addr 0x1399e44, size 0x27c, virtual true, abstract: false, final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  constexpr int32_t const& __cordl_internal_get_curveIndex() const;

  constexpr int32_t& __cordl_internal_get_curveIndex();

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> const&
  __cordl_internal_get_offsetLinks() const;

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*>&
  __cordl_internal_get_offsetLinks();

  constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

  constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody();

  constexpr void __cordl_internal_set_curveIndex(int32_t value);

  constexpr void __cordl_internal_set_offsetLinks(
      ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> value);

  constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody> value);

  /// @brief Method .ctor, addr 0x139a1c8, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__RotationOffset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__RotationOffset(__HitReactionVRIK__RotationOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__RotationOffset(__HitReactionVRIK__RotationOffset const&) = delete;

  /// @brief Field curveIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___curveIndex;

  /// @brief Field offsetLinks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> ___offsetLinks;

  /// @brief Field rigidbody, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rigidbody> ___rigidbody;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset, 0x68>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset, ___curveIndex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset, ___offsetLinks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset, ___rigidbody) == 0x60, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::HitReactionVRIK
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::HitReactionVRIK*
class CORDL_TYPE HitReactionVRIK : public ::RootMotion::FinalIK::OffsetModifierVRIK {
public:
  // Declarations
  using Offset = ::RootMotion::FinalIK::__HitReactionVRIK__Offset;

  using PositionOffset = ::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset;

  using RotationOffset = ::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset;

  /// @brief Field offsetCurves, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetCurves, put = __cordl_internal_set_offsetCurves))::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> offsetCurves;

  /// @brief Field positionOffsets, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_positionOffsets,
                      put = __cordl_internal_set_positionOffsets))::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*,
                                                                           ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> positionOffsets;

  /// @brief Field rotationOffsets, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_rotationOffsets,
                      put = __cordl_internal_set_rotationOffsets))::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*,
                                                                           ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> rotationOffsets;

  /// @brief Method Hit, addr 0x13994c4, size 0x224, virtual false, abstract: false, final false
  inline void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point);

  static inline ::RootMotion::FinalIK::HitReactionVRIK* New_ctor();

  /// @brief Method OnModifyOffset, addr 0x139932c, size 0xb8, virtual true, abstract: false, final false
  inline void OnModifyOffset();

  constexpr ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> const& __cordl_internal_get_offsetCurves() const;

  constexpr ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*>& __cordl_internal_get_offsetCurves();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> const&
  __cordl_internal_get_positionOffsets() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*>& __cordl_internal_get_positionOffsets();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> const&
  __cordl_internal_get_rotationOffsets() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*>& __cordl_internal_get_rotationOffsets();

  constexpr void __cordl_internal_set_offsetCurves(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> value);

  constexpr void __cordl_internal_set_positionOffsets(::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> value);

  constexpr void __cordl_internal_set_rotationOffsets(::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> value);

  /// @brief Method .ctor, addr 0x1399818, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HitReactionVRIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HitReactionVRIK(HitReactionVRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HitReactionVRIK(HitReactionVRIK const&) = delete;

  /// @brief Field offsetCurves, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> ___offsetCurves;

  /// @brief Field positionOffsets, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> ___positionOffsets;

  /// @brief Field rotationOffsets, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> ___rotationOffsets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::HitReactionVRIK, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HitReactionVRIK, ___offsetCurves) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HitReactionVRIK, ___positionOffsets) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::HitReactionVRIK, ___rotationOffsets) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset/PositionOffsetLink");
NEED_NO_BOX(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset/RotationOffsetLink");
NEED_NO_BOX(::RootMotion::FinalIK::HitReactionVRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::HitReactionVRIK*, "RootMotion.FinalIK", "HitReactionVRIK");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReactionVRIK__Offset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReactionVRIK__Offset*, "RootMotion.FinalIK", "HitReactionVRIK/Offset");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, "RootMotion.FinalIK", "HitReactionVRIK/PositionOffset");
NEED_NO_BOX(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, "RootMotion.FinalIK", "HitReactionVRIK/RotationOffset");
