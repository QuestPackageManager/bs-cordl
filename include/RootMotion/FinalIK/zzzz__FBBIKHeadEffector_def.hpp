#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FBBIKHeadEffector)
namespace RootMotion::FinalIK {
class FullBodyBipedIK;
}
namespace RootMotion::FinalIK {
class IKEffector;
}
namespace RootMotion::FinalIK {
class __FBBIKHeadEffector__BendBone;
}
namespace RootMotion::FinalIK {
class __IKSolver__UpdateDelegate;
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
namespace RootMotion::FinalIK {
class FBBIKHeadEffector;
}
namespace RootMotion::FinalIK {
class __FBBIKHeadEffector__BendBone;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::FBBIKHeadEffector);
MARK_REF_PTR_T(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone);
// Type: ::BendBone
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12546))
// CS Name: ::FBBIKHeadEffector::BendBone*
class CORDL_TYPE __FBBIKHeadEffector__BendBone : public ::System::Object {
public:
  // Declarations
  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __get_transform, put = __set_transform))::UnityEngine::Transform* transform;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field defaultLocalRotation, offset 0x1c, size 0x10
  __declspec(property(get = __get_defaultLocalRotation, put = __set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  constexpr ::UnityEngine::Transform*& __get_transform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_transform() const;

  constexpr void __set_transform(::UnityEngine::Transform* value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_defaultLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_defaultLocalRotation() const;

  constexpr void __set_defaultLocalRotation(::UnityEngine::Quaternion value);

  static inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* New_ctor();

  /// @brief Method .ctor, addr 0x1254a44, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* New_ctor(::UnityEngine::Transform* transform, float_t weight);

  /// @brief Method .ctor, addr 0x1254aa4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, float_t weight);

  /// @brief Method StoreDefaultLocalState, addr 0x12521a8, size 0x2c, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x1252578, size 0x28, virtual false, abstract: false, final false
  inline void FixTransforms();

  // Ctor Parameters [CppParam { name: "", ty: "__FBBIKHeadEffector__BendBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FBBIKHeadEffector__BendBone(__FBBIKHeadEffector__BendBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FBBIKHeadEffector__BendBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FBBIKHeadEffector__BendBone(__FBBIKHeadEffector__BendBone const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBBIKHeadEffector__BendBone();

public:
  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___transform;

  /// @brief Field weight, offset: 0x18, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field defaultLocalRotation, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___defaultLocalRotation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone, 0x30>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone, ___transform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone, ___defaultLocalRotation) == 0x1c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::FBBIKHeadEffector
// SizeInfo { instance_size: 368, native_size: -1, calculated_instance_size: 368, calculated_native_size: 368, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12547))
// CS Name: ::RootMotion.FinalIK::FBBIKHeadEffector*
class CORDL_TYPE FBBIKHeadEffector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BendBone = ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __get_ik, put = __set_ik))::RootMotion::FinalIK::FullBodyBipedIK* ik;

  /// @brief Field positionWeight, offset 0x20, size 0x4
  __declspec(property(get = __get_positionWeight, put = __set_positionWeight)) float_t positionWeight;

  /// @brief Field bodyWeight, offset 0x24, size 0x4
  __declspec(property(get = __get_bodyWeight, put = __set_bodyWeight)) float_t bodyWeight;

  /// @brief Field thighWeight, offset 0x28, size 0x4
  __declspec(property(get = __get_thighWeight, put = __set_thighWeight)) float_t thighWeight;

  /// @brief Field handsPullBody, offset 0x2c, size 0x1
  __declspec(property(get = __get_handsPullBody, put = __set_handsPullBody)) bool handsPullBody;

  /// @brief Field rotationWeight, offset 0x30, size 0x4
  __declspec(property(get = __get_rotationWeight, put = __set_rotationWeight)) float_t rotationWeight;

  /// @brief Field bodyClampWeight, offset 0x34, size 0x4
  __declspec(property(get = __get_bodyClampWeight, put = __set_bodyClampWeight)) float_t bodyClampWeight;

  /// @brief Field headClampWeight, offset 0x38, size 0x4
  __declspec(property(get = __get_headClampWeight, put = __set_headClampWeight)) float_t headClampWeight;

  /// @brief Field bendWeight, offset 0x3c, size 0x4
  __declspec(property(get = __get_bendWeight, put = __set_bendWeight)) float_t bendWeight;

  /// @brief Field bendBones, offset 0x40, size 0x8
  __declspec(property(get = __get_bendBones,
                      put = __set_bendBones))::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> bendBones;

  /// @brief Field CCDWeight, offset 0x48, size 0x4
  __declspec(property(get = __get_CCDWeight, put = __set_CCDWeight)) float_t CCDWeight;

  /// @brief Field roll, offset 0x4c, size 0x4
  __declspec(property(get = __get_roll, put = __set_roll)) float_t roll;

  /// @brief Field damper, offset 0x50, size 0x4
  __declspec(property(get = __get_damper, put = __set_damper)) float_t damper;

  /// @brief Field CCDBones, offset 0x58, size 0x8
  __declspec(property(get = __get_CCDBones, put = __set_CCDBones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> CCDBones;

  /// @brief Field postStretchWeight, offset 0x60, size 0x4
  __declspec(property(get = __get_postStretchWeight, put = __set_postStretchWeight)) float_t postStretchWeight;

  /// @brief Field maxStretch, offset 0x64, size 0x4
  __declspec(property(get = __get_maxStretch, put = __set_maxStretch)) float_t maxStretch;

  /// @brief Field stretchDamper, offset 0x68, size 0x4
  __declspec(property(get = __get_stretchDamper, put = __set_stretchDamper)) float_t stretchDamper;

  /// @brief Field fixHead, offset 0x6c, size 0x1
  __declspec(property(get = __get_fixHead, put = __set_fixHead)) bool fixHead;

  /// @brief Field stretchBones, offset 0x70, size 0x8
  __declspec(property(get = __get_stretchBones, put = __set_stretchBones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> stretchBones;

  /// @brief Field chestDirection, offset 0x78, size 0xc
  __declspec(property(get = __get_chestDirection, put = __set_chestDirection))::UnityEngine::Vector3 chestDirection;

  /// @brief Field chestDirectionWeight, offset 0x84, size 0x4
  __declspec(property(get = __get_chestDirectionWeight, put = __set_chestDirectionWeight)) float_t chestDirectionWeight;

  /// @brief Field chestBones, offset 0x88, size 0x8
  __declspec(property(get = __get_chestBones, put = __set_chestBones))::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> chestBones;

  /// @brief Field OnPostHeadEffectorFK, offset 0x90, size 0x8
  __declspec(property(get = __get_OnPostHeadEffectorFK, put = __set_OnPostHeadEffectorFK))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPostHeadEffectorFK;

  /// @brief Field offset, offset 0x98, size 0xc
  __declspec(property(get = __get_offset, put = __set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field headToBody, offset 0xa4, size 0xc
  __declspec(property(get = __get_headToBody, put = __set_headToBody))::UnityEngine::Vector3 headToBody;

  /// @brief Field shoulderCenterToHead, offset 0xb0, size 0xc
  __declspec(property(get = __get_shoulderCenterToHead, put = __set_shoulderCenterToHead))::UnityEngine::Vector3 shoulderCenterToHead;

  /// @brief Field headToLeftThigh, offset 0xbc, size 0xc
  __declspec(property(get = __get_headToLeftThigh, put = __set_headToLeftThigh))::UnityEngine::Vector3 headToLeftThigh;

  /// @brief Field headToRightThigh, offset 0xc8, size 0xc
  __declspec(property(get = __get_headToRightThigh, put = __set_headToRightThigh))::UnityEngine::Vector3 headToRightThigh;

  /// @brief Field leftShoulderPos, offset 0xd4, size 0xc
  __declspec(property(get = __get_leftShoulderPos, put = __set_leftShoulderPos))::UnityEngine::Vector3 leftShoulderPos;

  /// @brief Field rightShoulderPos, offset 0xe0, size 0xc
  __declspec(property(get = __get_rightShoulderPos, put = __set_rightShoulderPos))::UnityEngine::Vector3 rightShoulderPos;

  /// @brief Field shoulderDist, offset 0xec, size 0x4
  __declspec(property(get = __get_shoulderDist, put = __set_shoulderDist)) float_t shoulderDist;

  /// @brief Field leftShoulderDist, offset 0xf0, size 0x4
  __declspec(property(get = __get_leftShoulderDist, put = __set_leftShoulderDist)) float_t leftShoulderDist;

  /// @brief Field rightShoulderDist, offset 0xf4, size 0x4
  __declspec(property(get = __get_rightShoulderDist, put = __set_rightShoulderDist)) float_t rightShoulderDist;

  /// @brief Field chestRotation, offset 0xf8, size 0x10
  __declspec(property(get = __get_chestRotation, put = __set_chestRotation))::UnityEngine::Quaternion chestRotation;

  /// @brief Field headRotationRelativeToRoot, offset 0x108, size 0x10
  __declspec(property(get = __get_headRotationRelativeToRoot, put = __set_headRotationRelativeToRoot))::UnityEngine::Quaternion headRotationRelativeToRoot;

  /// @brief Field ccdDefaultLocalRotations, offset 0x118, size 0x8
  __declspec(property(get = __get_ccdDefaultLocalRotations, put = __set_ccdDefaultLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ccdDefaultLocalRotations;

  /// @brief Field headLocalPosition, offset 0x120, size 0xc
  __declspec(property(get = __get_headLocalPosition, put = __set_headLocalPosition))::UnityEngine::Vector3 headLocalPosition;

  /// @brief Field headLocalRotation, offset 0x12c, size 0x10
  __declspec(property(get = __get_headLocalRotation, put = __set_headLocalRotation))::UnityEngine::Quaternion headLocalRotation;

  /// @brief Field stretchLocalPositions, offset 0x140, size 0x8
  __declspec(property(get = __get_stretchLocalPositions, put = __set_stretchLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> stretchLocalPositions;

  /// @brief Field stretchLocalRotations, offset 0x148, size 0x8
  __declspec(property(get = __get_stretchLocalRotations, put = __set_stretchLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> stretchLocalRotations;

  /// @brief Field chestLocalPositions, offset 0x150, size 0x8
  __declspec(property(get = __get_chestLocalPositions, put = __set_chestLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> chestLocalPositions;

  /// @brief Field chestLocalRotations, offset 0x158, size 0x8
  __declspec(property(get = __get_chestLocalRotations, put = __set_chestLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> chestLocalRotations;

  /// @brief Field bendBonesCount, offset 0x160, size 0x4
  __declspec(property(get = __get_bendBonesCount, put = __set_bendBonesCount)) int32_t bendBonesCount;

  /// @brief Field ccdBonesCount, offset 0x164, size 0x4
  __declspec(property(get = __get_ccdBonesCount, put = __set_ccdBonesCount)) int32_t ccdBonesCount;

  /// @brief Field stretchBonesCount, offset 0x168, size 0x4
  __declspec(property(get = __get_stretchBonesCount, put = __set_stretchBonesCount)) int32_t stretchBonesCount;

  /// @brief Field chestBonesCount, offset 0x16c, size 0x4
  __declspec(property(get = __get_chestBonesCount, put = __set_chestBonesCount)) int32_t chestBonesCount;

  constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& __get_ik();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& __get_ik() const;

  constexpr void __set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value);

  constexpr float_t& __get_positionWeight();

  constexpr float_t const& __get_positionWeight() const;

  constexpr void __set_positionWeight(float_t value);

  constexpr float_t& __get_bodyWeight();

  constexpr float_t const& __get_bodyWeight() const;

  constexpr void __set_bodyWeight(float_t value);

  constexpr float_t& __get_thighWeight();

  constexpr float_t const& __get_thighWeight() const;

  constexpr void __set_thighWeight(float_t value);

  constexpr bool& __get_handsPullBody();

  constexpr bool const& __get_handsPullBody() const;

  constexpr void __set_handsPullBody(bool value);

  constexpr float_t& __get_rotationWeight();

  constexpr float_t const& __get_rotationWeight() const;

  constexpr void __set_rotationWeight(float_t value);

  constexpr float_t& __get_bodyClampWeight();

  constexpr float_t const& __get_bodyClampWeight() const;

  constexpr void __set_bodyClampWeight(float_t value);

  constexpr float_t& __get_headClampWeight();

  constexpr float_t const& __get_headClampWeight() const;

  constexpr void __set_headClampWeight(float_t value);

  constexpr float_t& __get_bendWeight();

  constexpr float_t const& __get_bendWeight() const;

  constexpr void __set_bendWeight(float_t value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*>& __get_bendBones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> const& __get_bendBones() const;

  constexpr void __set_bendBones(::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> value);

  constexpr float_t& __get_CCDWeight();

  constexpr float_t const& __get_CCDWeight() const;

  constexpr void __set_CCDWeight(float_t value);

  constexpr float_t& __get_roll();

  constexpr float_t const& __get_roll() const;

  constexpr void __set_roll(float_t value);

  constexpr float_t& __get_damper();

  constexpr float_t const& __get_damper() const;

  constexpr void __set_damper(float_t value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_CCDBones();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_CCDBones() const;

  constexpr void __set_CCDBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr float_t& __get_postStretchWeight();

  constexpr float_t const& __get_postStretchWeight() const;

  constexpr void __set_postStretchWeight(float_t value);

  constexpr float_t& __get_maxStretch();

  constexpr float_t const& __get_maxStretch() const;

  constexpr void __set_maxStretch(float_t value);

  constexpr float_t& __get_stretchDamper();

  constexpr float_t const& __get_stretchDamper() const;

  constexpr void __set_stretchDamper(float_t value);

  constexpr bool& __get_fixHead();

  constexpr bool const& __get_fixHead() const;

  constexpr void __set_fixHead(bool value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_stretchBones();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_stretchBones() const;

  constexpr void __set_stretchBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::UnityEngine::Vector3& __get_chestDirection();

  constexpr ::UnityEngine::Vector3 const& __get_chestDirection() const;

  constexpr void __set_chestDirection(::UnityEngine::Vector3 value);

  constexpr float_t& __get_chestDirectionWeight();

  constexpr float_t const& __get_chestDirectionWeight() const;

  constexpr void __set_chestDirectionWeight(float_t value);

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*>& __get_chestBones();

  constexpr ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> const& __get_chestBones() const;

  constexpr void __set_chestBones(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> value);

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __get_OnPostHeadEffectorFK();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __get_OnPostHeadEffectorFK() const;

  constexpr void __set_OnPostHeadEffectorFK(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr ::UnityEngine::Vector3& __get_offset();

  constexpr ::UnityEngine::Vector3 const& __get_offset() const;

  constexpr void __set_offset(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_headToBody();

  constexpr ::UnityEngine::Vector3 const& __get_headToBody() const;

  constexpr void __set_headToBody(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_shoulderCenterToHead();

  constexpr ::UnityEngine::Vector3 const& __get_shoulderCenterToHead() const;

  constexpr void __set_shoulderCenterToHead(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_headToLeftThigh();

  constexpr ::UnityEngine::Vector3 const& __get_headToLeftThigh() const;

  constexpr void __set_headToLeftThigh(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_headToRightThigh();

  constexpr ::UnityEngine::Vector3 const& __get_headToRightThigh() const;

  constexpr void __set_headToRightThigh(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_leftShoulderPos();

  constexpr ::UnityEngine::Vector3 const& __get_leftShoulderPos() const;

  constexpr void __set_leftShoulderPos(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_rightShoulderPos();

  constexpr ::UnityEngine::Vector3 const& __get_rightShoulderPos() const;

  constexpr void __set_rightShoulderPos(::UnityEngine::Vector3 value);

  constexpr float_t& __get_shoulderDist();

  constexpr float_t const& __get_shoulderDist() const;

  constexpr void __set_shoulderDist(float_t value);

  constexpr float_t& __get_leftShoulderDist();

  constexpr float_t const& __get_leftShoulderDist() const;

  constexpr void __set_leftShoulderDist(float_t value);

  constexpr float_t& __get_rightShoulderDist();

  constexpr float_t const& __get_rightShoulderDist() const;

  constexpr void __set_rightShoulderDist(float_t value);

  constexpr ::UnityEngine::Quaternion& __get_chestRotation();

  constexpr ::UnityEngine::Quaternion const& __get_chestRotation() const;

  constexpr void __set_chestRotation(::UnityEngine::Quaternion value);

  constexpr ::UnityEngine::Quaternion& __get_headRotationRelativeToRoot();

  constexpr ::UnityEngine::Quaternion const& __get_headRotationRelativeToRoot() const;

  constexpr void __set_headRotationRelativeToRoot(::UnityEngine::Quaternion value);

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __get_ccdDefaultLocalRotations();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __get_ccdDefaultLocalRotations() const;

  constexpr void __set_ccdDefaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr ::UnityEngine::Vector3& __get_headLocalPosition();

  constexpr ::UnityEngine::Vector3 const& __get_headLocalPosition() const;

  constexpr void __set_headLocalPosition(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_headLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __get_headLocalRotation() const;

  constexpr void __set_headLocalRotation(::UnityEngine::Quaternion value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_stretchLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_stretchLocalPositions() const;

  constexpr void __set_stretchLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __get_stretchLocalRotations();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __get_stretchLocalRotations() const;

  constexpr void __set_stretchLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __get_chestLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __get_chestLocalPositions() const;

  constexpr void __set_chestLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __get_chestLocalRotations();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __get_chestLocalRotations() const;

  constexpr void __set_chestLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr int32_t& __get_bendBonesCount();

  constexpr int32_t const& __get_bendBonesCount() const;

  constexpr void __set_bendBonesCount(int32_t value);

  constexpr int32_t& __get_ccdBonesCount();

  constexpr int32_t const& __get_ccdBonesCount() const;

  constexpr void __set_ccdBonesCount(int32_t value);

  constexpr int32_t& __get_stretchBonesCount();

  constexpr int32_t const& __get_stretchBonesCount() const;

  constexpr void __set_stretchBonesCount(int32_t value);

  constexpr int32_t& __get_chestBonesCount();

  constexpr int32_t const& __get_chestBonesCount() const;

  constexpr void __set_chestBonesCount(int32_t value);

  /// @brief Method Start, addr 0x1251948, size 0x3ec, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnStoreDefaultLocalState, addr 0x1251d34, size 0x474, virtual false, abstract: false, final false
  inline void OnStoreDefaultLocalState();

  /// @brief Method OnFixTransforms, addr 0x12521d4, size 0x3a4, virtual false, abstract: false, final false
  inline void OnFixTransforms();

  /// @brief Method OnPreRead, addr 0x12525a0, size 0x640, virtual false, abstract: false, final false
  inline void OnPreRead();

  /// @brief Method SpineBend, addr 0x1252e9c, size 0x3f8, virtual false, abstract: false, final false
  inline void SpineBend();

  /// @brief Method CCDPass, addr 0x1253294, size 0x410, virtual false, abstract: false, final false
  inline void CCDPass();

  /// @brief Method Iterate, addr 0x12536a4, size 0x798, virtual false, abstract: false, final false
  inline void Iterate(int32_t iteration);

  /// @brief Method OnPostUpdate, addr 0x1254024, size 0x23c, virtual false, abstract: false, final false
  inline void OnPostUpdate();

  /// @brief Method ChestDirection, addr 0x1252be0, size 0x2bc, virtual false, abstract: false, final false
  inline void ChestDirection();

  /// @brief Method PostStretching, addr 0x1254260, size 0x304, virtual false, abstract: false, final false
  inline void PostStretching();

  /// @brief Method LerpSolverPosition, addr 0x1253f3c, size 0xe8, virtual false, abstract: false, final false
  inline void LerpSolverPosition(::RootMotion::FinalIK::IKEffector* effector, ::UnityEngine::Vector3 position, float_t weight, ::UnityEngine::Vector3 offset);

  /// @brief Method Solve, addr 0x1253e3c, size 0x100, virtual false, abstract: false, final false
  inline void Solve(ByRef<::UnityEngine::Vector3> pos1, ByRef<::UnityEngine::Vector3> pos2, float_t nominalDistance);

  /// @brief Method OnDestroy, addr 0x1254564, size 0x338, virtual false, abstract: false, final false
  inline void OnDestroy();

  static inline ::RootMotion::FinalIK::FBBIKHeadEffector* New_ctor();

  /// @brief Method .ctor, addr 0x125489c, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBBIKHeadEffector(FBBIKHeadEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBBIKHeadEffector(FBBIKHeadEffector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBBIKHeadEffector();

public:
  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::RootMotion::FinalIK::FullBodyBipedIK* ___ik;

  /// @brief Field positionWeight, offset: 0x20, size: 0x4, def value: None
  float_t ___positionWeight;

  /// @brief Field bodyWeight, offset: 0x24, size: 0x4, def value: None
  float_t ___bodyWeight;

  /// @brief Field thighWeight, offset: 0x28, size: 0x4, def value: None
  float_t ___thighWeight;

  /// @brief Field handsPullBody, offset: 0x2c, size: 0x1, def value: None
  bool ___handsPullBody;

  /// @brief Field rotationWeight, offset: 0x30, size: 0x4, def value: None
  float_t ___rotationWeight;

  /// @brief Field bodyClampWeight, offset: 0x34, size: 0x4, def value: None
  float_t ___bodyClampWeight;

  /// @brief Field headClampWeight, offset: 0x38, size: 0x4, def value: None
  float_t ___headClampWeight;

  /// @brief Field bendWeight, offset: 0x3c, size: 0x4, def value: None
  float_t ___bendWeight;

  /// @brief Field bendBones, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> ___bendBones;

  /// @brief Field CCDWeight, offset: 0x48, size: 0x4, def value: None
  float_t ___CCDWeight;

  /// @brief Field roll, offset: 0x4c, size: 0x4, def value: None
  float_t ___roll;

  /// @brief Field damper, offset: 0x50, size: 0x4, def value: None
  float_t ___damper;

  /// @brief Field CCDBones, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___CCDBones;

  /// @brief Field postStretchWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___postStretchWeight;

  /// @brief Field maxStretch, offset: 0x64, size: 0x4, def value: None
  float_t ___maxStretch;

  /// @brief Field stretchDamper, offset: 0x68, size: 0x4, def value: None
  float_t ___stretchDamper;

  /// @brief Field fixHead, offset: 0x6c, size: 0x1, def value: None
  bool ___fixHead;

  /// @brief Field stretchBones, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___stretchBones;

  /// @brief Field chestDirection, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestDirection;

  /// @brief Field chestDirectionWeight, offset: 0x84, size: 0x4, def value: None
  float_t ___chestDirectionWeight;

  /// @brief Field chestBones, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> ___chestBones;

  /// @brief Field OnPostHeadEffectorFK, offset: 0x90, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__UpdateDelegate* ___OnPostHeadEffectorFK;

  /// @brief Field offset, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___offset;

  /// @brief Field headToBody, offset: 0xa4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headToBody;

  /// @brief Field shoulderCenterToHead, offset: 0xb0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___shoulderCenterToHead;

  /// @brief Field headToLeftThigh, offset: 0xbc, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headToLeftThigh;

  /// @brief Field headToRightThigh, offset: 0xc8, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headToRightThigh;

  /// @brief Field leftShoulderPos, offset: 0xd4, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___leftShoulderPos;

  /// @brief Field rightShoulderPos, offset: 0xe0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___rightShoulderPos;

  /// @brief Field shoulderDist, offset: 0xec, size: 0x4, def value: None
  float_t ___shoulderDist;

  /// @brief Field leftShoulderDist, offset: 0xf0, size: 0x4, def value: None
  float_t ___leftShoulderDist;

  /// @brief Field rightShoulderDist, offset: 0xf4, size: 0x4, def value: None
  float_t ___rightShoulderDist;

  /// @brief Field chestRotation, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___chestRotation;

  /// @brief Field headRotationRelativeToRoot, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headRotationRelativeToRoot;

  /// @brief Field ccdDefaultLocalRotations, offset: 0x118, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___ccdDefaultLocalRotations;

  /// @brief Field headLocalPosition, offset: 0x120, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___headLocalPosition;

  /// @brief Field headLocalRotation, offset: 0x12c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___headLocalRotation;

  /// @brief Field stretchLocalPositions, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___stretchLocalPositions;

  /// @brief Field stretchLocalRotations, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___stretchLocalRotations;

  /// @brief Field chestLocalPositions, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___chestLocalPositions;

  /// @brief Field chestLocalRotations, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ___chestLocalRotations;

  /// @brief Field bendBonesCount, offset: 0x160, size: 0x4, def value: None
  int32_t ___bendBonesCount;

  /// @brief Field ccdBonesCount, offset: 0x164, size: 0x4, def value: None
  int32_t ___ccdBonesCount;

  /// @brief Field stretchBonesCount, offset: 0x168, size: 0x4, def value: None
  int32_t ___stretchBonesCount;

  /// @brief Field chestBonesCount, offset: 0x16c, size: 0x4, def value: None
  int32_t ___chestBonesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FBBIKHeadEffector, 0x170>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___ik) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___positionWeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___bodyWeight) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___thighWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___handsPullBody) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___rotationWeight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___bodyClampWeight) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headClampWeight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___bendWeight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___bendBones) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___CCDWeight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___roll) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___damper) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___CCDBones) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___postStretchWeight) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___maxStretch) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___stretchDamper) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___fixHead) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___stretchBones) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestDirection) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestDirectionWeight) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestBones) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___OnPostHeadEffectorFK) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___offset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headToBody) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___shoulderCenterToHead) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headToLeftThigh) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headToRightThigh) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___leftShoulderPos) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___rightShoulderPos) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___shoulderDist) == 0xec, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___leftShoulderDist) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___rightShoulderDist) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestRotation) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headRotationRelativeToRoot) == 0x108, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___ccdDefaultLocalRotations) == 0x118, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headLocalPosition) == 0x120, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___headLocalRotation) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___stretchLocalPositions) == 0x140, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___stretchLocalRotations) == 0x148, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestLocalPositions) == 0x150, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestLocalRotations) == 0x158, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___bendBonesCount) == 0x160, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___ccdBonesCount) == 0x164, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___stretchBonesCount) == 0x168, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBBIKHeadEffector, ___chestBonesCount) == 0x16c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::FBBIKHeadEffector);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBBIKHeadEffector*, "RootMotion.FinalIK", "FBBIKHeadEffector");
NEED_NO_BOX(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, "RootMotion.FinalIK", "FBBIKHeadEffector/BendBone");
