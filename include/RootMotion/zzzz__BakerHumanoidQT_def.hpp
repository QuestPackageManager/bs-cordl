#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AvatarIKGoal_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BakerHumanoidQT)
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
class Avatar;
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
namespace RootMotion {
class BakerHumanoidQT;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::BakerHumanoidQT);
// Type: RootMotion::BakerHumanoidQT
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 157, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(8996)), TypeDefinitionIndex(TypeDefinitionIndex(14744))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12374))
// CS Name: ::RootMotion::BakerHumanoidQT*
class CORDL_TYPE BakerHumanoidQT : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field Qx, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Qx, put = __cordl_internal_set_Qx))::StringW Qx;

  /// @brief Field Qy, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Qy, put = __cordl_internal_set_Qy))::StringW Qy;

  /// @brief Field Qz, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_Qz, put = __cordl_internal_set_Qz))::StringW Qz;

  /// @brief Field Qw, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Qw, put = __cordl_internal_set_Qw))::StringW Qw;

  /// @brief Field Tx, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Tx, put = __cordl_internal_set_Tx))::StringW Tx;

  /// @brief Field Ty, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Ty, put = __cordl_internal_set_Ty))::StringW Ty;

  /// @brief Field Tz, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_Tz, put = __cordl_internal_set_Tz))::StringW Tz;

  /// @brief Field rotX, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_rotX, put = __cordl_internal_set_rotX))::UnityEngine::AnimationCurve* rotX;

  /// @brief Field rotY, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_rotY, put = __cordl_internal_set_rotY))::UnityEngine::AnimationCurve* rotY;

  /// @brief Field rotZ, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_rotZ, put = __cordl_internal_set_rotZ))::UnityEngine::AnimationCurve* rotZ;

  /// @brief Field rotW, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_rotW, put = __cordl_internal_set_rotW))::UnityEngine::AnimationCurve* rotW;

  /// @brief Field posX, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_posX, put = __cordl_internal_set_posX))::UnityEngine::AnimationCurve* posX;

  /// @brief Field posY, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_posY, put = __cordl_internal_set_posY))::UnityEngine::AnimationCurve* posY;

  /// @brief Field posZ, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_posZ, put = __cordl_internal_set_posZ))::UnityEngine::AnimationCurve* posZ;

  /// @brief Field goal, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_goal, put = __cordl_internal_set_goal))::UnityEngine::AvatarIKGoal goal;

  /// @brief Field lastQ, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get_lastQ, put = __cordl_internal_set_lastQ))::UnityEngine::Quaternion lastQ;

  /// @brief Field lastQSet, offset 0x9c, size 0x1
  __declspec(property(get = __cordl_internal_get_lastQSet, put = __cordl_internal_set_lastQSet)) bool lastQSet;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr ::StringW& __cordl_internal_get_Qx();

  constexpr ::StringW const& __cordl_internal_get_Qx() const;

  constexpr void __cordl_internal_set_Qx(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Qy();

  constexpr ::StringW const& __cordl_internal_get_Qy() const;

  constexpr void __cordl_internal_set_Qy(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Qz();

  constexpr ::StringW const& __cordl_internal_get_Qz() const;

  constexpr void __cordl_internal_set_Qz(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Qw();

  constexpr ::StringW const& __cordl_internal_get_Qw() const;

  constexpr void __cordl_internal_set_Qw(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Tx();

  constexpr ::StringW const& __cordl_internal_get_Tx() const;

  constexpr void __cordl_internal_set_Tx(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Ty();

  constexpr ::StringW const& __cordl_internal_get_Ty() const;

  constexpr void __cordl_internal_set_Ty(::StringW value);

  constexpr ::StringW& __cordl_internal_get_Tz();

  constexpr ::StringW const& __cordl_internal_get_Tz() const;

  constexpr void __cordl_internal_set_Tz(::StringW value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotX() const;

  constexpr void __cordl_internal_set_rotX(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotY() const;

  constexpr void __cordl_internal_set_rotY(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotZ() const;

  constexpr void __cordl_internal_set_rotZ(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_rotW();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_rotW() const;

  constexpr void __cordl_internal_set_rotW(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posX() const;

  constexpr void __cordl_internal_set_posX(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posY() const;

  constexpr void __cordl_internal_set_posY(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_posZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_posZ() const;

  constexpr void __cordl_internal_set_posZ(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AvatarIKGoal& __cordl_internal_get_goal();

  constexpr ::UnityEngine::AvatarIKGoal const& __cordl_internal_get_goal() const;

  constexpr void __cordl_internal_set_goal(::UnityEngine::AvatarIKGoal value);

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_lastQ();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_lastQ() const;

  constexpr void __cordl_internal_set_lastQ(::UnityEngine::Quaternion value);

  constexpr bool& __cordl_internal_get_lastQSet();

  constexpr bool const& __cordl_internal_get_lastQSet() const;

  constexpr void __cordl_internal_set_lastQSet(bool value);

  static inline ::RootMotion::BakerHumanoidQT* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x12cdda0, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::RootMotion::BakerHumanoidQT* New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name);

  /// @brief Method .ctor, addr 0x12ce05c, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name);

  /// @brief Method Reset, addr 0x12cdf18, size 0x144, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetIKKeyframes, addr 0x12ce1e4, size 0x234, virtual false, abstract: false, final false
  inline void SetIKKeyframes(float_t time, ::UnityEngine::Avatar* avatar, float_t humanScale, ::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation);

  /// @brief Method SetKeyframes, addr 0x12ce418, size 0xf0, virtual false, abstract: false, final false
  inline void SetKeyframes(float_t time, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method MoveLastKeyframes, addr 0x12ce508, size 0x68, virtual false, abstract: false, final false
  inline void MoveLastKeyframes(float_t time);

  /// @brief Method SetLoopFrame, addr 0x12ce5ec, size 0x68, virtual false, abstract: false, final false
  inline void SetLoopFrame(float_t time);

  /// @brief Method MoveLastKeyframe, addr 0x12ce570, size 0x7c, virtual false, abstract: false, final false
  inline void MoveLastKeyframe(float_t time, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method MultiplyLength, addr 0x12ce654, size 0xa8, virtual false, abstract: false, final false
  inline void MultiplyLength(::UnityEngine::AnimationCurve* curve, float_t mlp);

  /// @brief Method SetCurves, addr 0x12ce6fc, size 0x2ec, virtual false, abstract: false, final false
  inline void SetCurves(ByRef<::UnityEngine::AnimationClip*> clip, float_t maxError, float_t lengthMlp);

  // Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BakerHumanoidQT(BakerHumanoidQT&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BakerHumanoidQT", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BakerHumanoidQT(BakerHumanoidQT const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BakerHumanoidQT();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

  /// @brief Field Qx, offset: 0x18, size: 0x8, def value: None
  ::StringW ___Qx;

  /// @brief Field Qy, offset: 0x20, size: 0x8, def value: None
  ::StringW ___Qy;

  /// @brief Field Qz, offset: 0x28, size: 0x8, def value: None
  ::StringW ___Qz;

  /// @brief Field Qw, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Qw;

  /// @brief Field Tx, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Tx;

  /// @brief Field Ty, offset: 0x40, size: 0x8, def value: None
  ::StringW ___Ty;

  /// @brief Field Tz, offset: 0x48, size: 0x8, def value: None
  ::StringW ___Tz;

  /// @brief Field rotX, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotX;

  /// @brief Field rotY, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotY;

  /// @brief Field rotZ, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotZ;

  /// @brief Field rotW, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___rotW;

  /// @brief Field posX, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posX;

  /// @brief Field posY, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posY;

  /// @brief Field posZ, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___posZ;

  /// @brief Field goal, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::AvatarIKGoal ___goal;

  /// @brief Field lastQ, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___lastQ;

  /// @brief Field lastQSet, offset: 0x9c, size: 0x1, def value: None
  bool ___lastQSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::BakerHumanoidQT, 0xa0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Qx) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Qy) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Qz) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Qw) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Tx) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Ty) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___Tz) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___rotX) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___rotY) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___rotZ) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___rotW) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___posX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___posY) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___posZ) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___goal) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___lastQ) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::BakerHumanoidQT, ___lastQSet) == 0x9c, "Offset mismatch!");

} // namespace RootMotion
NEED_NO_BOX(::RootMotion::BakerHumanoidQT);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::BakerHumanoidQT*, "RootMotion", "BakerHumanoidQT");
