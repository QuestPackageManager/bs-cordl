#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__FBIKChain_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FBIKChain)
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion::FinalIK {
class __FBIKChain__ChildConstraint;
}
namespace RootMotion::FinalIK {
struct __FBIKChain__Smoothing;
}
namespace RootMotion::FinalIK {
class __IKSolver__Node;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
struct __FBIKChain__Smoothing;
}
namespace RootMotion::FinalIK {
class FBIKChain;
}
namespace RootMotion::FinalIK {
class __FBIKChain__ChildConstraint;
}
// Write type traits
MARK_VAL_T(::RootMotion::FinalIK::__FBIKChain__Smoothing);
MARK_REF_PTR_T(::RootMotion::FinalIK::FBIKChain);
MARK_REF_PTR_T(::RootMotion::FinalIK::__FBIKChain__ChildConstraint);
// Type: ::ChildConstraint
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::FBIKChain::ChildConstraint*
class CORDL_TYPE __FBIKChain__ChildConstraint : public ::System::Object {
public:
  // Declarations
  /// @brief Field <isRigid>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isRigid_k__BackingField, put = __cordl_internal_set__isRigid_k__BackingField)) bool _isRigid_k__BackingField;

  /// @brief Field <nominalDistance>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nominalDistance_k__BackingField, put = __cordl_internal_set__nominalDistance_k__BackingField)) float_t _nominalDistance_k__BackingField;

  /// @brief Field bone1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::UnityW<::UnityEngine::Transform> bone1;

  /// @brief Field bone2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::UnityW<::UnityEngine::Transform> bone2;

  /// @brief Field chain1Index, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_chain1Index, put = __cordl_internal_set_chain1Index)) int32_t chain1Index;

  /// @brief Field chain2Index, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_chain2Index, put = __cordl_internal_set_chain2Index)) int32_t chain2Index;

  /// @brief Field crossFade, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFade, put = __cordl_internal_set_crossFade)) float_t crossFade;

  /// @brief Field inverseCrossFade, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_inverseCrossFade, put = __cordl_internal_set_inverseCrossFade)) float_t inverseCrossFade;

  __declspec(property(get = get_isRigid, put = set_isRigid)) bool isRigid;

  __declspec(property(get = get_nominalDistance, put = set_nominalDistance)) float_t nominalDistance;

  /// @brief Field pullElasticity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pullElasticity, put = __cordl_internal_set_pullElasticity)) float_t pullElasticity;

  /// @brief Field pushElasticity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pushElasticity, put = __cordl_internal_set_pushElasticity)) float_t pushElasticity;

  /// @brief Method Initiate, addr 0x1359d58, size 0x54, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  static inline ::RootMotion::FinalIK::__FBIKChain__ChildConstraint* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, float_t pushElasticity, float_t pullElasticity);

  /// @brief Method OnPreSolve, addr 0x135a404, size 0x1e4, virtual false, abstract: false, final false
  inline void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Solve, addr 0x135be10, size 0x23c, virtual false, abstract: false, final false
  inline void Solve(::RootMotion::FinalIK::IKSolverFullBody* solver);

  constexpr bool const& __cordl_internal_get__isRigid_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isRigid_k__BackingField();

  constexpr float_t const& __cordl_internal_get__nominalDistance_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__nominalDistance_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone1() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone1();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone2() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone2();

  constexpr int32_t const& __cordl_internal_get_chain1Index() const;

  constexpr int32_t& __cordl_internal_get_chain1Index();

  constexpr int32_t const& __cordl_internal_get_chain2Index() const;

  constexpr int32_t& __cordl_internal_get_chain2Index();

  constexpr float_t const& __cordl_internal_get_crossFade() const;

  constexpr float_t& __cordl_internal_get_crossFade();

  constexpr float_t const& __cordl_internal_get_inverseCrossFade() const;

  constexpr float_t& __cordl_internal_get_inverseCrossFade();

  constexpr float_t const& __cordl_internal_get_pullElasticity() const;

  constexpr float_t& __cordl_internal_get_pullElasticity();

  constexpr float_t const& __cordl_internal_get_pushElasticity() const;

  constexpr float_t& __cordl_internal_get_pushElasticity();

  constexpr void __cordl_internal_set__isRigid_k__BackingField(bool value);

  constexpr void __cordl_internal_set__nominalDistance_k__BackingField(float_t value);

  constexpr void __cordl_internal_set_bone1(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone2(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_chain1Index(int32_t value);

  constexpr void __cordl_internal_set_chain2Index(int32_t value);

  constexpr void __cordl_internal_set_crossFade(float_t value);

  constexpr void __cordl_internal_set_inverseCrossFade(float_t value);

  constexpr void __cordl_internal_set_pullElasticity(float_t value);

  constexpr void __cordl_internal_set_pushElasticity(float_t value);

  /// @brief Method .ctor, addr 0x135c070, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, float_t pushElasticity, float_t pullElasticity);

  /// @brief Method get_isRigid, addr 0x135c05c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRigid();

  /// @brief Method get_nominalDistance, addr 0x135c04c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_nominalDistance();

  /// @brief Method set_isRigid, addr 0x135c064, size 0xc, virtual false, abstract: false, final false
  inline void set_isRigid(bool value);

  /// @brief Method set_nominalDistance, addr 0x135c054, size 0x8, virtual false, abstract: false, final false
  inline void set_nominalDistance(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBIKChain__ChildConstraint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__FBIKChain__ChildConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FBIKChain__ChildConstraint(__FBIKChain__ChildConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FBIKChain__ChildConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FBIKChain__ChildConstraint(__FBIKChain__ChildConstraint const&) = delete;

  /// @brief Field pushElasticity, offset: 0x10, size: 0x4, def value: None
  float_t ___pushElasticity;

  /// @brief Field pullElasticity, offset: 0x14, size: 0x4, def value: None
  float_t ___pullElasticity;

  /// @brief Field bone1, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone1;

  /// @brief Field bone2, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone2;

  /// @brief Field <nominalDistance>k__BackingField, offset: 0x28, size: 0x4, def value: None
  float_t ____nominalDistance_k__BackingField;

  /// @brief Field <isRigid>k__BackingField, offset: 0x2c, size: 0x1, def value: None
  bool ____isRigid_k__BackingField;

  /// @brief Field crossFade, offset: 0x30, size: 0x4, def value: None
  float_t ___crossFade;

  /// @brief Field inverseCrossFade, offset: 0x34, size: 0x4, def value: None
  float_t ___inverseCrossFade;

  /// @brief Field chain1Index, offset: 0x38, size: 0x4, def value: None
  int32_t ___chain1Index;

  /// @brief Field chain2Index, offset: 0x3c, size: 0x4, def value: None
  int32_t ___chain2Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__FBIKChain__ChildConstraint, 0x40>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___pushElasticity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___pullElasticity) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___bone1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___bone2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ____nominalDistance_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ____isRigid_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___crossFade) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___inverseCrossFade) == 0x34, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___chain1Index) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__ChildConstraint, ___chain2Index) == 0x3c, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: ::Smoothing
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: true
// CS Name: ::FBIKChain::Smoothing
struct CORDL_TYPE __FBIKChain__Smoothing {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FBIKChain__Smoothing_Unwrapped
  enum struct ____FBIKChain__Smoothing_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Exponential = static_cast<int32_t>(0x1),
    __E_Cubic = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FBIKChain__Smoothing_Unwrapped() const noexcept {
    return static_cast<____FBIKChain__Smoothing_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBIKChain__Smoothing();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FBIKChain__Smoothing(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Cubic value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const Cubic;

  /// @brief Field Exponential value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const Exponential;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::__FBIKChain__Smoothing, 0x4>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::__FBIKChain__Smoothing, value__) == 0x0, "Offset mismatch!");

} // namespace RootMotion::FinalIK
// Type: RootMotion.FinalIK::FBIKChain
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 132, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::FBIKChain*
class CORDL_TYPE FBIKChain : public ::System::Object {
public:
  // Declarations
  using ChildConstraint = ::RootMotion::FinalIK::__FBIKChain__ChildConstraint;

  using Smoothing = ::RootMotion::FinalIK::__FBIKChain__Smoothing;

  /// @brief Field bendConstraint, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bendConstraint, put = __cordl_internal_set_bendConstraint))::RootMotion::FinalIK::IKConstraintBend* bendConstraint;

  /// @brief Field childConstraints, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_childConstraints,
      put = __cordl_internal_set_childConstraints))::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> childConstraints;

  /// @brief Field children, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children))::ArrayW<int32_t, ::Array<int32_t>*> children;

  /// @brief Field crossFades, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_crossFades, put = __cordl_internal_set_crossFades))::ArrayW<float_t, ::Array<float_t>*> crossFades;

  /// @brief Field distance, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field initiated, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field length, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field nodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes))::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> nodes;

  /// @brief Field p, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::RootMotion::FinalIK::__IKSolver__Point* p;

  /// @brief Field pin, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pin, put = __cordl_internal_set_pin)) float_t pin;

  /// @brief Field pull, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pull, put = __cordl_internal_set_pull)) float_t pull;

  /// @brief Field pullParentSum, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_pullParentSum, put = __cordl_internal_set_pullParentSum)) float_t pullParentSum;

  /// @brief Field push, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_push, put = __cordl_internal_set_push)) float_t push;

  /// @brief Field pushParent, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pushParent, put = __cordl_internal_set_pushParent)) float_t pushParent;

  /// @brief Field pushSmoothing, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pushSmoothing, put = __cordl_internal_set_pushSmoothing))::RootMotion::FinalIK::__FBIKChain__Smoothing pushSmoothing;

  /// @brief Field reach, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_reach, put = __cordl_internal_set_reach)) float_t reach;

  /// @brief Field reachForce, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_reachForce, put = __cordl_internal_set_reachForce)) float_t reachForce;

  /// @brief Field reachSmoothing, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_reachSmoothing, put = __cordl_internal_set_reachSmoothing))::RootMotion::FinalIK::__FBIKChain__Smoothing reachSmoothing;

  /// @brief Field rootLength, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_rootLength, put = __cordl_internal_set_rootLength)) float_t rootLength;

  /// @brief Field sqrMag1, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag1, put = __cordl_internal_set_sqrMag1)) float_t sqrMag1;

  /// @brief Field sqrMag2, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag2, put = __cordl_internal_set_sqrMag2)) float_t sqrMag2;

  /// @brief Field sqrMagDif, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMagDif, put = __cordl_internal_set_sqrMagDif)) float_t sqrMagDif;

  /// @brief Method BackwardReach, addr 0x135bb10, size 0xfc, virtual false, abstract: false, final false
  inline void BackwardReach(::UnityEngine::Vector3 position);

  /// @brief Method CalculateBoneLengths, addr 0x13597fc, size 0x55c, virtual false, abstract: false, final false
  inline void CalculateBoneLengths(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ForwardReach, addr 0x135b7c0, size 0xd4, virtual false, abstract: false, final false
  inline void ForwardReach(::UnityEngine::Vector3 position);

  /// @brief Method GetDirToBendPoint, addr 0x135b3b4, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDirToBendPoint(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendDirection, float_t directionMagnitude);

  /// @brief Method GetNodeIndex, addr 0x13594c8, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetNodeIndex(::UnityEngine::Transform* boneTransform);

  /// @brief Method Initiate, addr 0x1359690, size 0x16c, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method IsValid, addr 0x1359584, size 0x10c, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  static inline ::RootMotion::FinalIK::FBIKChain* New_ctor();

  static inline ::RootMotion::FinalIK::FBIKChain* New_ctor(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> nodeTransforms);

  /// @brief Method Push, addr 0x135a87c, size 0x2d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Push(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Reach, addr 0x135a5e8, size 0x294, virtual false, abstract: false, final false
  inline void Reach(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ReadPose, addr 0x135a020, size 0x3e4, virtual false, abstract: false, final false
  inline void ReadPose(::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);

  /// @brief Method SetNodes, addr 0x13593b0, size 0x118, virtual false, abstract: false, final false
  inline void SetNodes(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> boneTransforms);

  /// @brief Method SolveChildConstraints, addr 0x135b894, size 0x64, virtual false, abstract: false, final false
  inline void SolveChildConstraints(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SolveConstraintSystems, addr 0x135bc0c, size 0xdc, virtual false, abstract: false, final false
  inline void SolveConstraintSystems(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SolveFABRIKJoint, addr 0x135b8f8, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length);

  /// @brief Method SolveLinearConstraint, addr 0x135bce8, size 0x128, virtual false, abstract: false, final false
  inline void SolveLinearConstraint(::RootMotion::FinalIK::__IKSolver__Node* node1, ::RootMotion::FinalIK::__IKSolver__Node* node2, float_t crossFade, float_t distance);

  /// @brief Method SolveTrigonometric, addr 0x135ab4c, size 0x238, virtual false, abstract: false, final false
  inline void SolveTrigonometric(::RootMotion::FinalIK::IKSolverFullBody* solver, bool calculateBendDirection);

  /// @brief Method Stage1, addr 0x135b514, size 0x2ac, virtual false, abstract: false, final false
  inline void Stage1(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Stage2, addr 0x135ba0c, size 0x104, virtual false, abstract: false, final false
  inline void Stage2(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 position);

  constexpr ::RootMotion::FinalIK::IKConstraintBend*& __cordl_internal_get_bendConstraint();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKConstraintBend*> const& __cordl_internal_get_bendConstraint() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> const& __cordl_internal_get_childConstraints() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*>& __cordl_internal_get_childConstraints();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_children() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_children();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_crossFades() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_crossFades();

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr float_t& __cordl_internal_get_distance();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr bool& __cordl_internal_get_initiated();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr float_t& __cordl_internal_get_length();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> const& __cordl_internal_get_nodes() const;

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*>& __cordl_internal_get_nodes();

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_p() const;

  constexpr float_t const& __cordl_internal_get_pin() const;

  constexpr float_t& __cordl_internal_get_pin();

  constexpr float_t const& __cordl_internal_get_pull() const;

  constexpr float_t& __cordl_internal_get_pull();

  constexpr float_t const& __cordl_internal_get_pullParentSum() const;

  constexpr float_t& __cordl_internal_get_pullParentSum();

  constexpr float_t const& __cordl_internal_get_push() const;

  constexpr float_t& __cordl_internal_get_push();

  constexpr float_t const& __cordl_internal_get_pushParent() const;

  constexpr float_t& __cordl_internal_get_pushParent();

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing const& __cordl_internal_get_pushSmoothing() const;

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing& __cordl_internal_get_pushSmoothing();

  constexpr float_t const& __cordl_internal_get_reach() const;

  constexpr float_t& __cordl_internal_get_reach();

  constexpr float_t const& __cordl_internal_get_reachForce() const;

  constexpr float_t& __cordl_internal_get_reachForce();

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing const& __cordl_internal_get_reachSmoothing() const;

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing& __cordl_internal_get_reachSmoothing();

  constexpr float_t const& __cordl_internal_get_rootLength() const;

  constexpr float_t& __cordl_internal_get_rootLength();

  constexpr float_t const& __cordl_internal_get_sqrMag1() const;

  constexpr float_t& __cordl_internal_get_sqrMag1();

  constexpr float_t const& __cordl_internal_get_sqrMag2() const;

  constexpr float_t& __cordl_internal_get_sqrMag2();

  constexpr float_t const& __cordl_internal_get_sqrMagDif() const;

  constexpr float_t& __cordl_internal_get_sqrMagDif();

  constexpr void __cordl_internal_set_bendConstraint(::RootMotion::FinalIK::IKConstraintBend* value);

  constexpr void __cordl_internal_set_childConstraints(::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> value);

  constexpr void __cordl_internal_set_children(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_crossFades(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr void __cordl_internal_set_nodes(::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> value);

  constexpr void __cordl_internal_set_p(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr void __cordl_internal_set_pin(float_t value);

  constexpr void __cordl_internal_set_pull(float_t value);

  constexpr void __cordl_internal_set_pullParentSum(float_t value);

  constexpr void __cordl_internal_set_push(float_t value);

  constexpr void __cordl_internal_set_pushParent(float_t value);

  constexpr void __cordl_internal_set_pushSmoothing(::RootMotion::FinalIK::__FBIKChain__Smoothing value);

  constexpr void __cordl_internal_set_reach(float_t value);

  constexpr void __cordl_internal_set_reachForce(float_t value);

  constexpr void __cordl_internal_set_reachSmoothing(::RootMotion::FinalIK::__FBIKChain__Smoothing value);

  constexpr void __cordl_internal_set_rootLength(float_t value);

  constexpr void __cordl_internal_set_sqrMag1(float_t value);

  constexpr void __cordl_internal_set_sqrMag2(float_t value);

  constexpr void __cordl_internal_set_sqrMagDif(float_t value);

  /// @brief Method .ctor, addr 0x1359114, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x135927c, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> nodeTransforms);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBIKChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBIKChain(FBIKChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBIKChain(FBIKChain const&) = delete;

  /// @brief Field pin, offset: 0x10, size: 0x4, def value: None
  float_t ___pin;

  /// @brief Field pull, offset: 0x14, size: 0x4, def value: None
  float_t ___pull;

  /// @brief Field push, offset: 0x18, size: 0x4, def value: None
  float_t ___push;

  /// @brief Field pushParent, offset: 0x1c, size: 0x4, def value: None
  float_t ___pushParent;

  /// @brief Field reach, offset: 0x20, size: 0x4, def value: None
  float_t ___reach;

  /// @brief Field reachSmoothing, offset: 0x24, size: 0x4, def value: None
  ::RootMotion::FinalIK::__FBIKChain__Smoothing ___reachSmoothing;

  /// @brief Field pushSmoothing, offset: 0x28, size: 0x4, def value: None
  ::RootMotion::FinalIK::__FBIKChain__Smoothing ___pushSmoothing;

  /// @brief Field nodes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> ___nodes;

  /// @brief Field children, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___children;

  /// @brief Field childConstraints, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> ___childConstraints;

  /// @brief Field bendConstraint, offset: 0x48, size: 0x8, def value: None
  ::RootMotion::FinalIK::IKConstraintBend* ___bendConstraint;

  /// @brief Field rootLength, offset: 0x50, size: 0x4, def value: None
  float_t ___rootLength;

  /// @brief Field initiated, offset: 0x54, size: 0x1, def value: None
  bool ___initiated;

  /// @brief Field length, offset: 0x58, size: 0x4, def value: None
  float_t ___length;

  /// @brief Field distance, offset: 0x5c, size: 0x4, def value: None
  float_t ___distance;

  /// @brief Field p, offset: 0x60, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__Point* ___p;

  /// @brief Field reachForce, offset: 0x68, size: 0x4, def value: None
  float_t ___reachForce;

  /// @brief Field pullParentSum, offset: 0x6c, size: 0x4, def value: None
  float_t ___pullParentSum;

  /// @brief Field crossFades, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___crossFades;

  /// @brief Field sqrMag1, offset: 0x78, size: 0x4, def value: None
  float_t ___sqrMag1;

  /// @brief Field sqrMag2, offset: 0x7c, size: 0x4, def value: None
  float_t ___sqrMag2;

  /// @brief Field sqrMagDif, offset: 0x80, size: 0x4, def value: None
  float_t ___sqrMagDif;

  /// @brief Field maxLimbLength offset 0xffffffff size 0x4
  static constexpr float_t maxLimbLength{ 0.99999 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::FBIKChain, 0x88>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___pin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___pull) == 0x14, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___push) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___pushParent) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___reach) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___reachSmoothing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___pushSmoothing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___nodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___children) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___childConstraints) == 0x40, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___bendConstraint) == 0x48, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___rootLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___initiated) == 0x54, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___length) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___distance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___p) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___reachForce) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___pullParentSum) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___crossFades) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___sqrMag1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___sqrMag2) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::FBIKChain, ___sqrMagDif) == 0x80, "Offset mismatch!");

} // namespace RootMotion::FinalIK
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__FBIKChain__Smoothing, "RootMotion.FinalIK", "FBIKChain/Smoothing");
NEED_NO_BOX(::RootMotion::FinalIK::FBIKChain);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::FBIKChain*, "RootMotion.FinalIK", "FBIKChain");
NEED_NO_BOX(::RootMotion::FinalIK::__FBIKChain__ChildConstraint);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, "RootMotion.FinalIK", "FBIKChain/ChildConstraint");
