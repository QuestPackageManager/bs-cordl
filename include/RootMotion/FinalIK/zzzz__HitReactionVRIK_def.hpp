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
namespace UnityEngine {
struct Vector3;
}
namespace RootMotion::FinalIK {
class VRIK;
}
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__Offset;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__RotationOffset;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace RootMotion::FinalIK {
class __HitReactionVRIK__PositionOffset;
}
namespace UnityEngine {
class Collider;
}
namespace GlobalNamespace {
class __HitReactionVRIK__PositionOffset__PositionOffsetLink;
}
namespace GlobalNamespace {
class __HitReactionVRIK__RotationOffset__RotationOffsetLink;
}
namespace UnityEngine {
class Rigidbody;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12572))
// CS Name: ::HitReactionVRIK::Offset*
class CORDL_TYPE __HitReactionVRIK__Offset : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field collider, offset 0x18, size 0x8
  __declspec(property(get = __get_collider, put = __set_collider))::UnityEngine::Collider* collider;

  /// @brief Field crossFadeTime, offset 0x20, size 0x4
  __declspec(property(get = __get_crossFadeTime, put = __set_crossFadeTime)) float_t crossFadeTime;

  /// @brief Field <crossFader>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__crossFader_k__BackingField, put = __set__crossFader_k__BackingField)) float_t _crossFader_k__BackingField;

  /// @brief Field <timer>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__timer_k__BackingField, put = __set__timer_k__BackingField)) float_t _timer_k__BackingField;

  /// @brief Field <force>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __get__force_k__BackingField, put = __set__force_k__BackingField))::UnityEngine::Vector3 _force_k__BackingField;

  /// @brief Field <point>k__BackingField, offset 0x38, size 0xc
  __declspec(property(get = __get__point_k__BackingField, put = __set__point_k__BackingField))::UnityEngine::Vector3 _point_k__BackingField;

  /// @brief Field length, offset 0x44, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) float_t length;

  /// @brief Field crossFadeSpeed, offset 0x48, size 0x4
  __declspec(property(get = __get_crossFadeSpeed, put = __set_crossFadeSpeed)) float_t crossFadeSpeed;

  /// @brief Field lastTime, offset 0x4c, size 0x4
  __declspec(property(get = __get_lastTime, put = __set_lastTime)) float_t lastTime;

  __declspec(property(get = get_crossFader, put = set_crossFader)) float_t crossFader;

  __declspec(property(get = get_timer, put = set_timer)) float_t timer;

  __declspec(property(get = get_force, put = set_force))::UnityEngine::Vector3 force;

  __declspec(property(get = get_point, put = set_point))::UnityEngine::Vector3 point;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::UnityEngine::Collider*& __get_collider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Collider*> const& __get_collider() const;

  constexpr void __set_collider(::UnityEngine::Collider* value);

  constexpr float_t& __get_crossFadeTime();

  constexpr float_t const& __get_crossFadeTime() const;

  constexpr void __set_crossFadeTime(float_t value);

  constexpr float_t& __get__crossFader_k__BackingField();

  constexpr float_t const& __get__crossFader_k__BackingField() const;

  constexpr void __set__crossFader_k__BackingField(float_t value);

  constexpr float_t& __get__timer_k__BackingField();

  constexpr float_t const& __get__timer_k__BackingField() const;

  constexpr void __set__timer_k__BackingField(float_t value);

  constexpr ::UnityEngine::Vector3& __get__force_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__force_k__BackingField() const;

  constexpr void __set__force_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__point_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__point_k__BackingField() const;

  constexpr void __set__point_k__BackingField(::UnityEngine::Vector3 value);

  constexpr float_t& __get_length();

  constexpr float_t const& __get_length() const;

  constexpr void __set_length(float_t value);

  constexpr float_t& __get_crossFadeSpeed();

  constexpr float_t const& __get_crossFadeSpeed() const;

  constexpr void __set_crossFadeSpeed(float_t value);

  constexpr float_t& __get_lastTime();

  constexpr float_t const& __get_lastTime() const;

  constexpr void __set_lastTime(float_t value);

  /// @brief Method get_crossFader addr 0x1224f18 size 0x8 virtual false final false
  inline float_t get_crossFader();

  /// @brief Method set_crossFader addr 0x1224f20 size 0x8 virtual false final false
  inline void set_crossFader(float_t value);

  /// @brief Method get_timer addr 0x1224f28 size 0x8 virtual false final false
  inline float_t get_timer();

  /// @brief Method set_timer addr 0x1224f30 size 0x8 virtual false final false
  inline void set_timer(float_t value);

  /// @brief Method get_force addr 0x1224f38 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_force();

  /// @brief Method set_force addr 0x1224f44 size 0xc virtual false final false
  inline void set_force(::UnityEngine::Vector3 value);

  /// @brief Method get_point addr 0x1224f50 size 0xc virtual false final false
  inline ::UnityEngine::Vector3 get_point();

  /// @brief Method set_point addr 0x1224f5c size 0xc virtual false final false
  inline void set_point(::UnityEngine::Vector3 value);

  /// @brief Method Hit addr 0x1224dc8 size 0x130 virtual false final false
  inline void Hit(::UnityEngine::Vector3 force, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, ::UnityEngine::Vector3 point);

  /// @brief Method Apply addr 0x1224ac4 size 0xe0 virtual false final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  /// @brief Method GetLength addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  /// @brief Method CrossFadeStart addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void CrossFadeStart();

  /// @brief Method OnApply addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__Offset* New_ctor();

  /// @brief Method .ctor addr 0x1224f68 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__Offset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__Offset(__HitReactionVRIK__Offset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__Offset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__Offset(__HitReactionVRIK__Offset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__Offset();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field collider, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Collider* ___collider;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12518)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(10176))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12573))
// CS Name: ::HitReactionVRIK::PositionOffset::PositionOffsetLink*
class CORDL_TYPE __HitReactionVRIK__PositionOffset__PositionOffsetLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field positionOffset, offset 0x10, size 0x4
  __declspec(property(get = __get_positionOffset, put = __set_positionOffset))::RootMotion::FinalIK::__IKSolverVR__PositionOffset positionOffset;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field lastValue, offset 0x18, size 0xc
  __declspec(property(get = __get_lastValue, put = __set_lastValue))::UnityEngine::Vector3 lastValue;

  /// @brief Field current, offset 0x24, size 0xc
  __declspec(property(get = __get_current, put = __set_current))::UnityEngine::Vector3 current;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset& __get_positionOffset();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__PositionOffset const& __get_positionOffset() const;

  constexpr void __set_positionOffset(::RootMotion::FinalIK::__IKSolverVR__PositionOffset value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::UnityEngine::Vector3& __get_lastValue();

  constexpr ::UnityEngine::Vector3 const& __get_lastValue() const;

  constexpr void __set_lastValue(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_current();

  constexpr ::UnityEngine::Vector3 const& __get_current() const;

  constexpr void __set_current(::UnityEngine::Vector3 value);

  /// @brief Method Apply addr 0x122534c size 0x78 virtual false final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Vector3 offset, float_t crossFader);

  /// @brief Method CrossFadeStart addr 0x1225170 size 0x14 virtual false final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink* New_ctor();

  /// @brief Method .ctor addr 0x12253e0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__PositionOffset__PositionOffsetLink(__HitReactionVRIK__PositionOffset__PositionOffsetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset__PositionOffsetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__PositionOffset__PositionOffsetLink(__HitReactionVRIK__PositionOffset__PositionOffsetLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__PositionOffset__PositionOffsetLink();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12574))
// CS Name: ::HitReactionVRIK::PositionOffset*
class CORDL_TYPE __HitReactionVRIK__PositionOffset : public ::RootMotion::FinalIK::__HitReactionVRIK__Offset {
public:
  // Declarations
  using PositionOffsetLink = ::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink;

  /// @brief Field forceDirCurveIndex, offset 0x50, size 0x4
  __declspec(property(get = __get_forceDirCurveIndex, put = __set_forceDirCurveIndex)) int32_t forceDirCurveIndex;

  /// @brief Field upDirCurveIndex, offset 0x54, size 0x4
  __declspec(property(get = __get_upDirCurveIndex, put = __set_upDirCurveIndex)) int32_t upDirCurveIndex;

  /// @brief Field offsetLinks, offset 0x58, size 0x8
  __declspec(property(get = __get_offsetLinks, put = __set_offsetLinks))::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*,
                                                                                 ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> offsetLinks;

  constexpr int32_t& __get_forceDirCurveIndex();

  constexpr int32_t const& __get_forceDirCurveIndex() const;

  constexpr void __set_forceDirCurveIndex(int32_t value);

  constexpr int32_t& __get_upDirCurveIndex();

  constexpr int32_t const& __get_upDirCurveIndex() const;

  constexpr void __set_upDirCurveIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*>&
  __get_offsetLinks();

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> const&
  __get_offsetLinks() const;

  constexpr void
  __set_offsetLinks(::ArrayW<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__PositionOffset__PositionOffsetLink*>*> value);

  /// @brief Method GetLength addr 0x1224f7c size 0x194 virtual true final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  /// @brief Method CrossFadeStart addr 0x1225110 size 0x60 virtual true final false
  inline void CrossFadeStart();

  /// @brief Method OnApply addr 0x1225184 size 0x1c8 virtual true final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset* New_ctor();

  /// @brief Method .ctor addr 0x12253c4 size 0x1c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__PositionOffset(__HitReactionVRIK__PositionOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__PositionOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__PositionOffset(__HitReactionVRIK__PositionOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__PositionOffset();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179)), TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(12519))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12575))
// CS Name: ::HitReactionVRIK::RotationOffset::RotationOffsetLink*
class CORDL_TYPE __HitReactionVRIK__RotationOffset__RotationOffsetLink : public ::System::Object {
public:
  // Declarations
  /// @brief Field rotationOffset, offset 0x10, size 0x4
  __declspec(property(get = __get_rotationOffset, put = __set_rotationOffset))::RootMotion::FinalIK::__IKSolverVR__RotationOffset rotationOffset;

  /// @brief Field weight, offset 0x14, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field lastValue, offset 0x18, size 0x10
  __declspec(property(get = __get_lastValue, put = __set_lastValue))::UnityEngine::Quaternion lastValue;

  /// @brief Field current, offset 0x28, size 0x10
  __declspec(property(get = __get_current, put = __set_current))::UnityEngine::Quaternion current;

  constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset& __get_rotationOffset();

  constexpr ::RootMotion::FinalIK::__IKSolverVR__RotationOffset const& __get_rotationOffset() const;

  constexpr void __set_rotationOffset(::RootMotion::FinalIK::__IKSolverVR__RotationOffset value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_lastValue();

  constexpr ::UnityEngine::Quaternion const& __get_lastValue() const;

  constexpr void __set_lastValue(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_current();

  constexpr ::UnityEngine::Quaternion const& __get_current() const;

  constexpr void __set_current(::UnityEngine::Quaternion value);

  /// @brief Method Apply addr 0x12257a0 size 0x108 virtual false final false
  inline void Apply(::RootMotion::FinalIK::VRIK* ik, ::UnityEngine::Quaternion offset, float_t crossFader);

  /// @brief Method CrossFadeStart addr 0x1225518 size 0xc virtual false final false
  inline void CrossFadeStart();

  static inline ::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink* New_ctor();

  /// @brief Method .ctor addr 0x12258bc size 0x64 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__RotationOffset__RotationOffsetLink(__HitReactionVRIK__RotationOffset__RotationOffsetLink&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset__RotationOffsetLink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__RotationOffset__RotationOffsetLink(__HitReactionVRIK__RotationOffset__RotationOffsetLink const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__RotationOffset__RotationOffsetLink();

public:
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12576))
// CS Name: ::HitReactionVRIK::RotationOffset*
class CORDL_TYPE __HitReactionVRIK__RotationOffset : public ::RootMotion::FinalIK::__HitReactionVRIK__Offset {
public:
  // Declarations
  using RotationOffsetLink = ::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink;

  /// @brief Field curveIndex, offset 0x50, size 0x4
  __declspec(property(get = __get_curveIndex, put = __set_curveIndex)) int32_t curveIndex;

  /// @brief Field offsetLinks, offset 0x58, size 0x8
  __declspec(property(get = __get_offsetLinks, put = __set_offsetLinks))::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*,
                                                                                 ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> offsetLinks;

  /// @brief Field rigidbody, offset 0x60, size 0x8
  __declspec(property(get = __get_rigidbody, put = __set_rigidbody))::UnityEngine::Rigidbody* rigidbody;

  constexpr int32_t& __get_curveIndex();

  constexpr int32_t const& __get_curveIndex() const;

  constexpr void __set_curveIndex(int32_t value);

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*>&
  __get_offsetLinks();

  constexpr ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> const&
  __get_offsetLinks() const;

  constexpr void
  __set_offsetLinks(::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> value);

  constexpr ::UnityEngine::Rigidbody*& __get_rigidbody();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rigidbody*> const& __get_rigidbody() const;

  constexpr void __set_rigidbody(::UnityEngine::Rigidbody* value);

  /// @brief Method GetLength addr 0x12253e8 size 0xd8 virtual true final false
  inline float_t GetLength(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves);

  /// @brief Method CrossFadeStart addr 0x12254c0 size 0x58 virtual true final false
  inline void CrossFadeStart();

  /// @brief Method OnApply addr 0x1225524 size 0x27c virtual true final false
  inline void OnApply(::RootMotion::FinalIK::VRIK* ik, ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> curves, float_t weight);

  static inline ::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset* New_ctor();

  /// @brief Method .ctor addr 0x12258a8 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HitReactionVRIK__RotationOffset(__HitReactionVRIK__RotationOffset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HitReactionVRIK__RotationOffset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HitReactionVRIK__RotationOffset(__HitReactionVRIK__RotationOffset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HitReactionVRIK__RotationOffset();

public:
  /// @brief Field curveIndex, offset: 0x50, size: 0x4, def value: None
  int32_t ___curveIndex;

  /// @brief Field offsetLinks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*, ::Array<::GlobalNamespace::__HitReactionVRIK__RotationOffset__RotationOffsetLink*>*> ___offsetLinks;

  /// @brief Field rigidbody, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Rigidbody* ___rigidbody;

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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12586))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12577))
// CS Name: ::RootMotion.FinalIK::HitReactionVRIK*
class CORDL_TYPE HitReactionVRIK : public ::RootMotion::FinalIK::OffsetModifierVRIK {
public:
  // Declarations
  using RotationOffset = ::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset;

  using PositionOffset = ::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset;

  using Offset = ::RootMotion::FinalIK::__HitReactionVRIK__Offset;

  /// @brief Field offsetCurves, offset 0x30, size 0x8
  __declspec(property(get = __get_offsetCurves, put = __set_offsetCurves))::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> offsetCurves;

  /// @brief Field positionOffsets, offset 0x38, size 0x8
  __declspec(
      property(get = __get_positionOffsets,
               put = __set_positionOffsets))::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> positionOffsets;

  /// @brief Field rotationOffsets, offset 0x40, size 0x8
  __declspec(
      property(get = __get_rotationOffsets,
               put = __set_rotationOffsets))::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> rotationOffsets;

  constexpr ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*>& __get_offsetCurves();

  constexpr ::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> const& __get_offsetCurves() const;

  constexpr void __set_offsetCurves(::ArrayW<::UnityEngine::AnimationCurve*, ::Array<::UnityEngine::AnimationCurve*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*>& __get_positionOffsets();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> const& __get_positionOffsets() const;

  constexpr void __set_positionOffsets(::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__PositionOffset*>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*>& __get_rotationOffsets();

  constexpr ::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> const& __get_rotationOffsets() const;

  constexpr void __set_rotationOffsets(::ArrayW<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*, ::Array<::RootMotion::FinalIK::__HitReactionVRIK__RotationOffset*>*> value);

  /// @brief Method OnModifyOffset addr 0x1224a0c size 0xb8 virtual true final false
  inline void OnModifyOffset();

  /// @brief Method Hit addr 0x1224ba4 size 0x224 virtual false final false
  inline void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point);

  static inline ::RootMotion::FinalIK::HitReactionVRIK* New_ctor();

  /// @brief Method .ctor addr 0x1224ef8 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HitReactionVRIK(HitReactionVRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HitReactionVRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HitReactionVRIK(HitReactionVRIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HitReactionVRIK();

public:
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
