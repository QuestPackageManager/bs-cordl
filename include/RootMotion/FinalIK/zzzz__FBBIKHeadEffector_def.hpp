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
// CS Name: ::FBBIKHeadEffector::BendBone*
class CORDL_TYPE __FBBIKHeadEffector__BendBone : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultLocalRotation, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_defaultLocalRotation, put = __cordl_internal_set_defaultLocalRotation))::UnityEngine::Quaternion defaultLocalRotation;

  /// @brief Field transform, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_transform, put = __cordl_internal_set_transform))::UnityW<::UnityEngine::Transform> transform;

  /// @brief Field weight, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method FixTransforms, addr 0x132e614, size 0x28, virtual false, abstract: false, final false
  inline void FixTransforms();

  static inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* New_ctor();

  static inline ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone* New_ctor(::UnityEngine::Transform* transform, float_t weight);

  /// @brief Method StoreDefaultLocalState, addr 0x132e244, size 0x2c, virtual false, abstract: false, final false
  inline void StoreDefaultLocalState();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_defaultLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_defaultLocalRotation();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transform();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set_defaultLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_transform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1330ae0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x1330b40, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* transform, float_t weight);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBBIKHeadEffector__BendBone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FBBIKHeadEffector__BendBone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FBBIKHeadEffector__BendBone(__FBBIKHeadEffector__BendBone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FBBIKHeadEffector__BendBone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FBBIKHeadEffector__BendBone(__FBBIKHeadEffector__BendBone const&) = delete;

  /// @brief Field transform, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___transform;

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
// CS Name: ::RootMotion.FinalIK::FBBIKHeadEffector*
class CORDL_TYPE FBBIKHeadEffector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using BendBone = ::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone;

  /// @brief Field CCDBones, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_CCDBones, put = __cordl_internal_set_CCDBones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> CCDBones;

  /// @brief Field CCDWeight, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_CCDWeight, put = __cordl_internal_set_CCDWeight)) float_t CCDWeight;

  /// @brief Field OnPostHeadEffectorFK, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPostHeadEffectorFK, put = __cordl_internal_set_OnPostHeadEffectorFK))::RootMotion::FinalIK::__IKSolver__UpdateDelegate* OnPostHeadEffectorFK;

  /// @brief Field bendBones, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bendBones,
                      put = __cordl_internal_set_bendBones))::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> bendBones;

  /// @brief Field bendBonesCount, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_bendBonesCount, put = __cordl_internal_set_bendBonesCount)) int32_t bendBonesCount;

  /// @brief Field bendWeight, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_bendWeight, put = __cordl_internal_set_bendWeight)) float_t bendWeight;

  /// @brief Field bodyClampWeight, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyClampWeight, put = __cordl_internal_set_bodyClampWeight)) float_t bodyClampWeight;

  /// @brief Field bodyWeight, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_bodyWeight, put = __cordl_internal_set_bodyWeight)) float_t bodyWeight;

  /// @brief Field ccdBonesCount, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_ccdBonesCount, put = __cordl_internal_set_ccdBonesCount)) int32_t ccdBonesCount;

  /// @brief Field ccdDefaultLocalRotations, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_ccdDefaultLocalRotations,
                      put = __cordl_internal_set_ccdDefaultLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> ccdDefaultLocalRotations;

  /// @brief Field chestBones, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_chestBones,
                      put = __cordl_internal_set_chestBones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> chestBones;

  /// @brief Field chestBonesCount, offset 0x16c, size 0x4
  __declspec(property(get = __cordl_internal_get_chestBonesCount, put = __cordl_internal_set_chestBonesCount)) int32_t chestBonesCount;

  /// @brief Field chestDirection, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_chestDirection, put = __cordl_internal_set_chestDirection))::UnityEngine::Vector3 chestDirection;

  /// @brief Field chestDirectionWeight, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_chestDirectionWeight, put = __cordl_internal_set_chestDirectionWeight)) float_t chestDirectionWeight;

  /// @brief Field chestLocalPositions, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_chestLocalPositions,
                      put = __cordl_internal_set_chestLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> chestLocalPositions;

  /// @brief Field chestLocalRotations, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_chestLocalRotations,
                      put = __cordl_internal_set_chestLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> chestLocalRotations;

  /// @brief Field chestRotation, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get_chestRotation, put = __cordl_internal_set_chestRotation))::UnityEngine::Quaternion chestRotation;

  /// @brief Field damper, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_damper, put = __cordl_internal_set_damper)) float_t damper;

  /// @brief Field fixHead, offset 0x6c, size 0x1
  __declspec(property(get = __cordl_internal_get_fixHead, put = __cordl_internal_set_fixHead)) bool fixHead;

  /// @brief Field handsPullBody, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_handsPullBody, put = __cordl_internal_set_handsPullBody)) bool handsPullBody;

  /// @brief Field headClampWeight, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_headClampWeight, put = __cordl_internal_set_headClampWeight)) float_t headClampWeight;

  /// @brief Field headLocalPosition, offset 0x120, size 0xc
  __declspec(property(get = __cordl_internal_get_headLocalPosition, put = __cordl_internal_set_headLocalPosition))::UnityEngine::Vector3 headLocalPosition;

  /// @brief Field headLocalRotation, offset 0x12c, size 0x10
  __declspec(property(get = __cordl_internal_get_headLocalRotation, put = __cordl_internal_set_headLocalRotation))::UnityEngine::Quaternion headLocalRotation;

  /// @brief Field headRotationRelativeToRoot, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_headRotationRelativeToRoot, put = __cordl_internal_set_headRotationRelativeToRoot))::UnityEngine::Quaternion headRotationRelativeToRoot;

  /// @brief Field headToBody, offset 0xa4, size 0xc
  __declspec(property(get = __cordl_internal_get_headToBody, put = __cordl_internal_set_headToBody))::UnityEngine::Vector3 headToBody;

  /// @brief Field headToLeftThigh, offset 0xbc, size 0xc
  __declspec(property(get = __cordl_internal_get_headToLeftThigh, put = __cordl_internal_set_headToLeftThigh))::UnityEngine::Vector3 headToLeftThigh;

  /// @brief Field headToRightThigh, offset 0xc8, size 0xc
  __declspec(property(get = __cordl_internal_get_headToRightThigh, put = __cordl_internal_set_headToRightThigh))::UnityEngine::Vector3 headToRightThigh;

  /// @brief Field ik, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ik, put = __cordl_internal_set_ik))::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ik;

  /// @brief Field leftShoulderDist, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_leftShoulderDist, put = __cordl_internal_set_leftShoulderDist)) float_t leftShoulderDist;

  /// @brief Field leftShoulderPos, offset 0xd4, size 0xc
  __declspec(property(get = __cordl_internal_get_leftShoulderPos, put = __cordl_internal_set_leftShoulderPos))::UnityEngine::Vector3 leftShoulderPos;

  /// @brief Field maxStretch, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStretch, put = __cordl_internal_set_maxStretch)) float_t maxStretch;

  /// @brief Field offset, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get_offset, put = __cordl_internal_set_offset))::UnityEngine::Vector3 offset;

  /// @brief Field positionWeight, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_positionWeight, put = __cordl_internal_set_positionWeight)) float_t positionWeight;

  /// @brief Field postStretchWeight, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_postStretchWeight, put = __cordl_internal_set_postStretchWeight)) float_t postStretchWeight;

  /// @brief Field rightShoulderDist, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_rightShoulderDist, put = __cordl_internal_set_rightShoulderDist)) float_t rightShoulderDist;

  /// @brief Field rightShoulderPos, offset 0xe0, size 0xc
  __declspec(property(get = __cordl_internal_get_rightShoulderPos, put = __cordl_internal_set_rightShoulderPos))::UnityEngine::Vector3 rightShoulderPos;

  /// @brief Field roll, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_roll, put = __cordl_internal_set_roll)) float_t roll;

  /// @brief Field rotationWeight, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_rotationWeight, put = __cordl_internal_set_rotationWeight)) float_t rotationWeight;

  /// @brief Field shoulderCenterToHead, offset 0xb0, size 0xc
  __declspec(property(get = __cordl_internal_get_shoulderCenterToHead, put = __cordl_internal_set_shoulderCenterToHead))::UnityEngine::Vector3 shoulderCenterToHead;

  /// @brief Field shoulderDist, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_shoulderDist, put = __cordl_internal_set_shoulderDist)) float_t shoulderDist;

  /// @brief Field stretchBones, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_stretchBones,
                      put = __cordl_internal_set_stretchBones))::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> stretchBones;

  /// @brief Field stretchBonesCount, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get_stretchBonesCount, put = __cordl_internal_set_stretchBonesCount)) int32_t stretchBonesCount;

  /// @brief Field stretchDamper, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_stretchDamper, put = __cordl_internal_set_stretchDamper)) float_t stretchDamper;

  /// @brief Field stretchLocalPositions, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_stretchLocalPositions,
                      put = __cordl_internal_set_stretchLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> stretchLocalPositions;

  /// @brief Field stretchLocalRotations, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_stretchLocalRotations,
                      put = __cordl_internal_set_stretchLocalRotations))::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> stretchLocalRotations;

  /// @brief Field thighWeight, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_thighWeight, put = __cordl_internal_set_thighWeight)) float_t thighWeight;

  /// @brief Method CCDPass, addr 0x132f330, size 0x410, virtual false, abstract: false, final false
  inline void CCDPass();

  /// @brief Method ChestDirection, addr 0x132ec7c, size 0x2bc, virtual false, abstract: false, final false
  inline void ChestDirection();

  /// @brief Method Iterate, addr 0x132f740, size 0x798, virtual false, abstract: false, final false
  inline void Iterate(int32_t iteration);

  /// @brief Method LerpSolverPosition, addr 0x132ffd8, size 0xe8, virtual false, abstract: false, final false
  inline void LerpSolverPosition(::RootMotion::FinalIK::IKEffector* effector, ::UnityEngine::Vector3 position, float_t weight, ::UnityEngine::Vector3 offset);

  static inline ::RootMotion::FinalIK::FBBIKHeadEffector* New_ctor();

  /// @brief Method OnDestroy, addr 0x1330600, size 0x338, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnFixTransforms, addr 0x132e270, size 0x3a4, virtual false, abstract: false, final false
  inline void OnFixTransforms();

  /// @brief Method OnPostUpdate, addr 0x13300c0, size 0x23c, virtual false, abstract: false, final false
  inline void OnPostUpdate();

  /// @brief Method OnPreRead, addr 0x132e63c, size 0x640, virtual false, abstract: false, final false
  inline void OnPreRead();

  /// @brief Method OnStoreDefaultLocalState, addr 0x132ddd0, size 0x474, virtual false, abstract: false, final false
  inline void OnStoreDefaultLocalState();

  /// @brief Method PostStretching, addr 0x13302fc, size 0x304, virtual false, abstract: false, final false
  inline void PostStretching();

  /// @brief Method Solve, addr 0x132fed8, size 0x100, virtual false, abstract: false, final false
  inline void Solve(ByRef<::UnityEngine::Vector3> pos1, ByRef<::UnityEngine::Vector3> pos2, float_t nominalDistance);

  /// @brief Method SpineBend, addr 0x132ef38, size 0x3f8, virtual false, abstract: false, final false
  inline void SpineBend();

  /// @brief Method Start, addr 0x132d9e4, size 0x3ec, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_CCDBones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_CCDBones();

  constexpr float_t const& __cordl_internal_get_CCDWeight() const;

  constexpr float_t& __cordl_internal_get_CCDWeight();

  constexpr ::RootMotion::FinalIK::__IKSolver__UpdateDelegate*& __cordl_internal_get_OnPostHeadEffectorFK();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__UpdateDelegate*> const& __cordl_internal_get_OnPostHeadEffectorFK() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> const& __cordl_internal_get_bendBones() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*>& __cordl_internal_get_bendBones();

  constexpr int32_t const& __cordl_internal_get_bendBonesCount() const;

  constexpr int32_t& __cordl_internal_get_bendBonesCount();

  constexpr float_t const& __cordl_internal_get_bendWeight() const;

  constexpr float_t& __cordl_internal_get_bendWeight();

  constexpr float_t const& __cordl_internal_get_bodyClampWeight() const;

  constexpr float_t& __cordl_internal_get_bodyClampWeight();

  constexpr float_t const& __cordl_internal_get_bodyWeight() const;

  constexpr float_t& __cordl_internal_get_bodyWeight();

  constexpr int32_t const& __cordl_internal_get_ccdBonesCount() const;

  constexpr int32_t& __cordl_internal_get_ccdBonesCount();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_ccdDefaultLocalRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_ccdDefaultLocalRotations();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_chestBones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_chestBones();

  constexpr int32_t const& __cordl_internal_get_chestBonesCount() const;

  constexpr int32_t& __cordl_internal_get_chestBonesCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestDirection();

  constexpr float_t const& __cordl_internal_get_chestDirectionWeight() const;

  constexpr float_t& __cordl_internal_get_chestDirectionWeight();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_chestLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_chestLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_chestLocalRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_chestLocalRotations();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_chestRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_chestRotation();

  constexpr float_t const& __cordl_internal_get_damper() const;

  constexpr float_t& __cordl_internal_get_damper();

  constexpr bool const& __cordl_internal_get_fixHead() const;

  constexpr bool& __cordl_internal_get_fixHead();

  constexpr bool const& __cordl_internal_get_handsPullBody() const;

  constexpr bool& __cordl_internal_get_handsPullBody();

  constexpr float_t const& __cordl_internal_get_headClampWeight() const;

  constexpr float_t& __cordl_internal_get_headClampWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headLocalPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headLocalPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headLocalRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headLocalRotation();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_headRotationRelativeToRoot() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_headRotationRelativeToRoot();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headToBody() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headToBody();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headToLeftThigh() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headToLeftThigh();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headToRightThigh() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_headToRightThigh();

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> const& __cordl_internal_get_ik() const;

  constexpr ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK>& __cordl_internal_get_ik();

  constexpr float_t const& __cordl_internal_get_leftShoulderDist() const;

  constexpr float_t& __cordl_internal_get_leftShoulderDist();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_leftShoulderPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_leftShoulderPos();

  constexpr float_t const& __cordl_internal_get_maxStretch() const;

  constexpr float_t& __cordl_internal_get_maxStretch();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset();

  constexpr float_t const& __cordl_internal_get_positionWeight() const;

  constexpr float_t& __cordl_internal_get_positionWeight();

  constexpr float_t const& __cordl_internal_get_postStretchWeight() const;

  constexpr float_t& __cordl_internal_get_postStretchWeight();

  constexpr float_t const& __cordl_internal_get_rightShoulderDist() const;

  constexpr float_t& __cordl_internal_get_rightShoulderDist();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rightShoulderPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_rightShoulderPos();

  constexpr float_t const& __cordl_internal_get_roll() const;

  constexpr float_t& __cordl_internal_get_roll();

  constexpr float_t const& __cordl_internal_get_rotationWeight() const;

  constexpr float_t& __cordl_internal_get_rotationWeight();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_shoulderCenterToHead() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_shoulderCenterToHead();

  constexpr float_t const& __cordl_internal_get_shoulderDist() const;

  constexpr float_t& __cordl_internal_get_shoulderDist();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> const& __cordl_internal_get_stretchBones() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*>& __cordl_internal_get_stretchBones();

  constexpr int32_t const& __cordl_internal_get_stretchBonesCount() const;

  constexpr int32_t& __cordl_internal_get_stretchBonesCount();

  constexpr float_t const& __cordl_internal_get_stretchDamper() const;

  constexpr float_t& __cordl_internal_get_stretchDamper();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_stretchLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_stretchLocalPositions();

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> const& __cordl_internal_get_stretchLocalRotations() const;

  constexpr ::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*>& __cordl_internal_get_stretchLocalRotations();

  constexpr float_t const& __cordl_internal_get_thighWeight() const;

  constexpr float_t& __cordl_internal_get_thighWeight();

  constexpr void __cordl_internal_set_CCDBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_CCDWeight(float_t value);

  constexpr void __cordl_internal_set_OnPostHeadEffectorFK(::RootMotion::FinalIK::__IKSolver__UpdateDelegate* value);

  constexpr void __cordl_internal_set_bendBones(::ArrayW<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*, ::Array<::RootMotion::FinalIK::__FBBIKHeadEffector__BendBone*>*> value);

  constexpr void __cordl_internal_set_bendBonesCount(int32_t value);

  constexpr void __cordl_internal_set_bendWeight(float_t value);

  constexpr void __cordl_internal_set_bodyClampWeight(float_t value);

  constexpr void __cordl_internal_set_bodyWeight(float_t value);

  constexpr void __cordl_internal_set_ccdBonesCount(int32_t value);

  constexpr void __cordl_internal_set_ccdDefaultLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_chestBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_chestBonesCount(int32_t value);

  constexpr void __cordl_internal_set_chestDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_chestDirectionWeight(float_t value);

  constexpr void __cordl_internal_set_chestLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_chestLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_chestRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_damper(float_t value);

  constexpr void __cordl_internal_set_fixHead(bool value);

  constexpr void __cordl_internal_set_handsPullBody(bool value);

  constexpr void __cordl_internal_set_headClampWeight(float_t value);

  constexpr void __cordl_internal_set_headLocalPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headLocalRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headRotationRelativeToRoot(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_headToBody(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headToLeftThigh(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_headToRightThigh(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_ik(::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> value);

  constexpr void __cordl_internal_set_leftShoulderDist(float_t value);

  constexpr void __cordl_internal_set_leftShoulderPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_maxStretch(float_t value);

  constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_positionWeight(float_t value);

  constexpr void __cordl_internal_set_postStretchWeight(float_t value);

  constexpr void __cordl_internal_set_rightShoulderDist(float_t value);

  constexpr void __cordl_internal_set_rightShoulderPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_roll(float_t value);

  constexpr void __cordl_internal_set_rotationWeight(float_t value);

  constexpr void __cordl_internal_set_shoulderCenterToHead(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_shoulderDist(float_t value);

  constexpr void __cordl_internal_set_stretchBones(::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> value);

  constexpr void __cordl_internal_set_stretchBonesCount(int32_t value);

  constexpr void __cordl_internal_set_stretchDamper(float_t value);

  constexpr void __cordl_internal_set_stretchLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  constexpr void __cordl_internal_set_stretchLocalRotations(::ArrayW<::UnityEngine::Quaternion, ::Array<::UnityEngine::Quaternion>*> value);

  constexpr void __cordl_internal_set_thighWeight(float_t value);

  /// @brief Method .ctor, addr 0x1330938, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBBIKHeadEffector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBBIKHeadEffector(FBBIKHeadEffector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBBIKHeadEffector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBBIKHeadEffector(FBBIKHeadEffector const&) = delete;

  /// @brief Field ik, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::RootMotion::FinalIK::FullBodyBipedIK> ___ik;

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
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___CCDBones;

  /// @brief Field postStretchWeight, offset: 0x60, size: 0x4, def value: None
  float_t ___postStretchWeight;

  /// @brief Field maxStretch, offset: 0x64, size: 0x4, def value: None
  float_t ___maxStretch;

  /// @brief Field stretchDamper, offset: 0x68, size: 0x4, def value: None
  float_t ___stretchDamper;

  /// @brief Field fixHead, offset: 0x6c, size: 0x1, def value: None
  bool ___fixHead;

  /// @brief Field stretchBones, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___stretchBones;

  /// @brief Field chestDirection, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___chestDirection;

  /// @brief Field chestDirectionWeight, offset: 0x84, size: 0x4, def value: None
  float_t ___chestDirectionWeight;

  /// @brief Field chestBones, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Transform>, ::Array<::UnityW<::UnityEngine::Transform>>*> ___chestBones;

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
