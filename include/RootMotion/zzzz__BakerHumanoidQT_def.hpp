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
class Transform;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Avatar;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(14871))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12476))
// CS Name: ::RootMotion::BakerHumanoidQT*
class CORDL_TYPE BakerHumanoidQT : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field Qx, offset 0x18, size 0x8
  __declspec(property(get = __get_Qx, put = __set_Qx))::StringW Qx;

  /// @brief Field Qy, offset 0x20, size 0x8
  __declspec(property(get = __get_Qy, put = __set_Qy))::StringW Qy;

  /// @brief Field Qz, offset 0x28, size 0x8
  __declspec(property(get = __get_Qz, put = __set_Qz))::StringW Qz;

  /// @brief Field Qw, offset 0x30, size 0x8
  __declspec(property(get = __get_Qw, put = __set_Qw))::StringW Qw;

  /// @brief Field Tx, offset 0x38, size 0x8
  __declspec(property(get = __get_Tx, put = __set_Tx))::StringW Tx;

  /// @brief Field Ty, offset 0x40, size 0x8
  __declspec(property(get = __get_Ty, put = __set_Ty))::StringW Ty;

  /// @brief Field Tz, offset 0x48, size 0x8
  __declspec(property(get = __get_Tz, put = __set_Tz))::StringW Tz;

  /// @brief Field rotX, offset 0x50, size 0x8
  __declspec(property(get = __get_rotX, put = __set_rotX))::UnityEngine::AnimationCurve* rotX;

  /// @brief Field rotY, offset 0x58, size 0x8
  __declspec(property(get = __get_rotY, put = __set_rotY))::UnityEngine::AnimationCurve* rotY;

  /// @brief Field rotZ, offset 0x60, size 0x8
  __declspec(property(get = __get_rotZ, put = __set_rotZ))::UnityEngine::AnimationCurve* rotZ;

  /// @brief Field rotW, offset 0x68, size 0x8
  __declspec(property(get = __get_rotW, put = __set_rotW))::UnityEngine::AnimationCurve* rotW;

  /// @brief Field posX, offset 0x70, size 0x8
  __declspec(property(get = __get_posX, put = __set_posX))::UnityEngine::AnimationCurve* posX;

  /// @brief Field posY, offset 0x78, size 0x8
  __declspec(property(get = __get_posY, put = __set_posY))::UnityEngine::AnimationCurve* posY;

  /// @brief Field posZ, offset 0x80, size 0x8
  __declspec(property(get = __get_posZ, put = __set_posZ))::UnityEngine::AnimationCurve* posZ;

  /// @brief Field goal, offset 0x88, size 0x4
  __declspec(property(get = __get_goal, put = __set_goal))::UnityEngine::AvatarIKGoal goal;

  /// @brief Field lastQ, offset 0x8c, size 0x10
  __declspec(property(get = __get_lastQ, put = __set_lastQ))::UnityEngine::Quaternion lastQ;

  /// @brief Field lastQSet, offset 0x9c, size 0x1
  __declspec(property(get = __get_lastQSet, put = __set_lastQSet)) bool lastQSet;

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr ::StringW& __get_Qx();

  constexpr ::StringW const& __get_Qx() const;

  constexpr void __set_Qx(::StringW value);

  constexpr ::StringW& __get_Qy();

  constexpr ::StringW const& __get_Qy() const;

  constexpr void __set_Qy(::StringW value);

  constexpr ::StringW& __get_Qz();

  constexpr ::StringW const& __get_Qz() const;

  constexpr void __set_Qz(::StringW value);

  constexpr ::StringW& __get_Qw();

  constexpr ::StringW const& __get_Qw() const;

  constexpr void __set_Qw(::StringW value);

  constexpr ::StringW& __get_Tx();

  constexpr ::StringW const& __get_Tx() const;

  constexpr void __set_Tx(::StringW value);

  constexpr ::StringW& __get_Ty();

  constexpr ::StringW const& __get_Ty() const;

  constexpr void __set_Ty(::StringW value);

  constexpr ::StringW& __get_Tz();

  constexpr ::StringW const& __get_Tz() const;

  constexpr void __set_Tz(::StringW value);

  constexpr ::UnityEngine::AnimationCurve*& __get_rotX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_rotX() const;

  constexpr void __set_rotX(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_rotY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_rotY() const;

  constexpr void __set_rotY(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_rotZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_rotZ() const;

  constexpr void __set_rotZ(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_rotW();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_rotW() const;

  constexpr void __set_rotW(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_posX();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_posX() const;

  constexpr void __set_posX(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_posY();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_posY() const;

  constexpr void __set_posY(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AnimationCurve*& __get_posZ();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_posZ() const;

  constexpr void __set_posZ(::UnityEngine::AnimationCurve* value);

  constexpr ::UnityEngine::AvatarIKGoal& __get_goal();

  constexpr ::UnityEngine::AvatarIKGoal const& __get_goal() const;

  constexpr void __set_goal(::UnityEngine::AvatarIKGoal value);

  constexpr ::UnityEngine::Quaternion& __get_lastQ();

  constexpr ::UnityEngine::Quaternion const& __get_lastQ() const;

  constexpr void __set_lastQ(::UnityEngine::Quaternion value);

  constexpr bool& __get_lastQSet();

  constexpr bool const& __get_lastQSet() const;

  constexpr void __set_lastQSet(bool value);

  static inline ::RootMotion::BakerHumanoidQT* New_ctor(::StringW name);

  /// @brief Method .ctor, addr 0x1232cf0, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  static inline ::RootMotion::BakerHumanoidQT* New_ctor(::UnityEngine::Transform* transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name);

  /// @brief Method .ctor, addr 0x1232fac, size 0x188, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, ::UnityEngine::AvatarIKGoal goal, ::StringW name);

  /// @brief Method Reset, addr 0x1232e68, size 0x144, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SetIKKeyframes, addr 0x1233134, size 0x234, virtual false, abstract: false, final false
  inline void SetIKKeyframes(float_t time, ::UnityEngine::Avatar* avatar, float_t humanScale, ::UnityEngine::Vector3 bodyPosition, ::UnityEngine::Quaternion bodyRotation);

  /// @brief Method SetKeyframes, addr 0x1233368, size 0xf0, virtual false, abstract: false, final false
  inline void SetKeyframes(float_t time, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot);

  /// @brief Method MoveLastKeyframes, addr 0x1233458, size 0x68, virtual false, abstract: false, final false
  inline void MoveLastKeyframes(float_t time);

  /// @brief Method SetLoopFrame, addr 0x123353c, size 0x68, virtual false, abstract: false, final false
  inline void SetLoopFrame(float_t time);

  /// @brief Method MoveLastKeyframe, addr 0x12334c0, size 0x7c, virtual false, abstract: false, final false
  inline void MoveLastKeyframe(float_t time, ::UnityEngine::AnimationCurve* curve);

  /// @brief Method MultiplyLength, addr 0x12335a4, size 0xa8, virtual false, abstract: false, final false
  inline void MultiplyLength(::UnityEngine::AnimationCurve* curve, float_t mlp);

  /// @brief Method SetCurves, addr 0x123364c, size 0x2ec, virtual false, abstract: false, final false
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
  ::UnityEngine::Transform* ___transform;

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
