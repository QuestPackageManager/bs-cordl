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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12446))
// CS Name: ::FBIKChain::ChildConstraint*
class CORDL_TYPE __FBIKChain__ChildConstraint : public ::System::Object {
public:
  // Declarations
  /// @brief Field pushElasticity, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pushElasticity, put = __cordl_internal_set_pushElasticity)) float_t pushElasticity;

  /// @brief Field pullElasticity, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pullElasticity, put = __cordl_internal_set_pullElasticity)) float_t pullElasticity;

  /// @brief Field bone1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::UnityW<::UnityEngine::Transform> bone1;

  /// @brief Field bone2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::UnityW<::UnityEngine::Transform> bone2;

  /// @brief Field <nominalDistance>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__nominalDistance_k__BackingField, put = __cordl_internal_set__nominalDistance_k__BackingField)) float_t _nominalDistance_k__BackingField;

  /// @brief Field <isRigid>k__BackingField, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get__isRigid_k__BackingField, put = __cordl_internal_set__isRigid_k__BackingField)) bool _isRigid_k__BackingField;

  /// @brief Field crossFade, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_crossFade, put = __cordl_internal_set_crossFade)) float_t crossFade;

  /// @brief Field inverseCrossFade, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_inverseCrossFade, put = __cordl_internal_set_inverseCrossFade)) float_t inverseCrossFade;

  /// @brief Field chain1Index, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_chain1Index, put = __cordl_internal_set_chain1Index)) int32_t chain1Index;

  /// @brief Field chain2Index, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_chain2Index, put = __cordl_internal_set_chain2Index)) int32_t chain2Index;

  __declspec(property(get = get_nominalDistance, put = set_nominalDistance)) float_t nominalDistance;

  __declspec(property(get = get_isRigid, put = set_isRigid)) bool isRigid;

  constexpr float_t& __cordl_internal_get_pushElasticity();

  constexpr float_t const& __cordl_internal_get_pushElasticity() const;

  constexpr void __cordl_internal_set_pushElasticity(float_t value);

  constexpr float_t& __cordl_internal_get_pullElasticity();

  constexpr float_t const& __cordl_internal_get_pullElasticity() const;

  constexpr void __cordl_internal_set_pullElasticity(float_t value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone1();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone1() const;

  constexpr void __cordl_internal_set_bone1(::UnityW<::UnityEngine::Transform> value);

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone2();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone2() const;

  constexpr void __cordl_internal_set_bone2(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get__nominalDistance_k__BackingField();

  constexpr float_t const& __cordl_internal_get__nominalDistance_k__BackingField() const;

  constexpr void __cordl_internal_set__nominalDistance_k__BackingField(float_t value);

  constexpr bool& __cordl_internal_get__isRigid_k__BackingField();

  constexpr bool const& __cordl_internal_get__isRigid_k__BackingField() const;

  constexpr void __cordl_internal_set__isRigid_k__BackingField(bool value);

  constexpr float_t& __cordl_internal_get_crossFade();

  constexpr float_t const& __cordl_internal_get_crossFade() const;

  constexpr void __cordl_internal_set_crossFade(float_t value);

  constexpr float_t& __cordl_internal_get_inverseCrossFade();

  constexpr float_t const& __cordl_internal_get_inverseCrossFade() const;

  constexpr void __cordl_internal_set_inverseCrossFade(float_t value);

  constexpr int32_t& __cordl_internal_get_chain1Index();

  constexpr int32_t const& __cordl_internal_get_chain1Index() const;

  constexpr void __cordl_internal_set_chain1Index(int32_t value);

  constexpr int32_t& __cordl_internal_get_chain2Index();

  constexpr int32_t const& __cordl_internal_get_chain2Index() const;

  constexpr void __cordl_internal_set_chain2Index(int32_t value);

  /// @brief Method get_nominalDistance, addr 0x12f1b08, size 0x8, virtual false, abstract: false, final false
  inline float_t get_nominalDistance();

  /// @brief Method set_nominalDistance, addr 0x12f1b10, size 0x8, virtual false, abstract: false, final false
  inline void set_nominalDistance(float_t value);

  /// @brief Method get_isRigid, addr 0x12f1b18, size 0x8, virtual false, abstract: false, final false
  inline bool get_isRigid();

  /// @brief Method set_isRigid, addr 0x12f1b20, size 0xc, virtual false, abstract: false, final false
  inline void set_isRigid(bool value);

  static inline ::RootMotion::FinalIK::__FBIKChain__ChildConstraint* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, float_t pushElasticity, float_t pullElasticity);

  /// @brief Method .ctor, addr 0x12f1b2c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, float_t pushElasticity, float_t pullElasticity);

  /// @brief Method Initiate, addr 0x12ef814, size 0x54, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method OnPreSolve, addr 0x12efec0, size 0x1e4, virtual false, abstract: false, final false
  inline void OnPreSolve(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Solve, addr 0x12f18cc, size 0x23c, virtual false, abstract: false, final false
  inline void Solve(::RootMotion::FinalIK::IKSolverFullBody* solver);

  // Ctor Parameters [CppParam { name: "", ty: "__FBIKChain__ChildConstraint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FBIKChain__ChildConstraint(__FBIKChain__ChildConstraint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FBIKChain__ChildConstraint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FBIKChain__ChildConstraint(__FBIKChain__ChildConstraint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBIKChain__ChildConstraint();

public:
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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12447))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FBIKChain__Smoothing(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FBIKChain__Smoothing();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const None;

  /// @brief Field Exponential value: static_cast<int32_t>(0x1)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const Exponential;

  /// @brief Field Cubic value: static_cast<int32_t>(0x2)
  static ::RootMotion::FinalIK::__FBIKChain__Smoothing const Cubic;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(12447))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12448))
// CS Name: ::RootMotion.FinalIK::FBIKChain*
class CORDL_TYPE FBIKChain : public ::System::Object {
public:
  // Declarations
  using Smoothing = ::RootMotion::FinalIK::__FBIKChain__Smoothing;

  using ChildConstraint = ::RootMotion::FinalIK::__FBIKChain__ChildConstraint;

  /// @brief Field pin, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pin, put = __cordl_internal_set_pin)) float_t pin;

  /// @brief Field pull, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_pull, put = __cordl_internal_set_pull)) float_t pull;

  /// @brief Field push, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_push, put = __cordl_internal_set_push)) float_t push;

  /// @brief Field pushParent, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_pushParent, put = __cordl_internal_set_pushParent)) float_t pushParent;

  /// @brief Field reach, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_reach, put = __cordl_internal_set_reach)) float_t reach;

  /// @brief Field reachSmoothing, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_reachSmoothing, put = __cordl_internal_set_reachSmoothing))::RootMotion::FinalIK::__FBIKChain__Smoothing reachSmoothing;

  /// @brief Field pushSmoothing, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_pushSmoothing, put = __cordl_internal_set_pushSmoothing))::RootMotion::FinalIK::__FBIKChain__Smoothing pushSmoothing;

  /// @brief Field nodes, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes))::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> nodes;

  /// @brief Field children, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_children, put = __cordl_internal_set_children))::ArrayW<int32_t, ::Array<int32_t>*> children;

  /// @brief Field childConstraints, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_childConstraints,
      put = __cordl_internal_set_childConstraints))::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> childConstraints;

  /// @brief Field bendConstraint, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_bendConstraint, put = __cordl_internal_set_bendConstraint))::RootMotion::FinalIK::IKConstraintBend* bendConstraint;

  /// @brief Field rootLength, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_rootLength, put = __cordl_internal_set_rootLength)) float_t rootLength;

  /// @brief Field initiated, offset 0x54, size 0x1
  __declspec(property(get = __cordl_internal_get_initiated, put = __cordl_internal_set_initiated)) bool initiated;

  /// @brief Field length, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_length, put = __cordl_internal_set_length)) float_t length;

  /// @brief Field distance, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_distance, put = __cordl_internal_set_distance)) float_t distance;

  /// @brief Field p, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::RootMotion::FinalIK::__IKSolver__Point* p;

  /// @brief Field reachForce, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_reachForce, put = __cordl_internal_set_reachForce)) float_t reachForce;

  /// @brief Field pullParentSum, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_pullParentSum, put = __cordl_internal_set_pullParentSum)) float_t pullParentSum;

  /// @brief Field crossFades, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_crossFades, put = __cordl_internal_set_crossFades))::ArrayW<float_t, ::Array<float_t>*> crossFades;

  /// @brief Field sqrMag1, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag1, put = __cordl_internal_set_sqrMag1)) float_t sqrMag1;

  /// @brief Field sqrMag2, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMag2, put = __cordl_internal_set_sqrMag2)) float_t sqrMag2;

  /// @brief Field sqrMagDif, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_sqrMagDif, put = __cordl_internal_set_sqrMagDif)) float_t sqrMagDif;

  constexpr float_t& __cordl_internal_get_pin();

  constexpr float_t const& __cordl_internal_get_pin() const;

  constexpr void __cordl_internal_set_pin(float_t value);

  constexpr float_t& __cordl_internal_get_pull();

  constexpr float_t const& __cordl_internal_get_pull() const;

  constexpr void __cordl_internal_set_pull(float_t value);

  constexpr float_t& __cordl_internal_get_push();

  constexpr float_t const& __cordl_internal_get_push() const;

  constexpr void __cordl_internal_set_push(float_t value);

  constexpr float_t& __cordl_internal_get_pushParent();

  constexpr float_t const& __cordl_internal_get_pushParent() const;

  constexpr void __cordl_internal_set_pushParent(float_t value);

  constexpr float_t& __cordl_internal_get_reach();

  constexpr float_t const& __cordl_internal_get_reach() const;

  constexpr void __cordl_internal_set_reach(float_t value);

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing& __cordl_internal_get_reachSmoothing();

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing const& __cordl_internal_get_reachSmoothing() const;

  constexpr void __cordl_internal_set_reachSmoothing(::RootMotion::FinalIK::__FBIKChain__Smoothing value);

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing& __cordl_internal_get_pushSmoothing();

  constexpr ::RootMotion::FinalIK::__FBIKChain__Smoothing const& __cordl_internal_get_pushSmoothing() const;

  constexpr void __cordl_internal_set_pushSmoothing(::RootMotion::FinalIK::__FBIKChain__Smoothing value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*>& __cordl_internal_get_nodes();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> const& __cordl_internal_get_nodes() const;

  constexpr void __cordl_internal_set_nodes(::ArrayW<::RootMotion::FinalIK::__IKSolver__Node*, ::Array<::RootMotion::FinalIK::__IKSolver__Node*>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_children();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_children() const;

  constexpr void __cordl_internal_set_children(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*>& __cordl_internal_get_childConstraints();

  constexpr ::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> const& __cordl_internal_get_childConstraints() const;

  constexpr void __cordl_internal_set_childConstraints(::ArrayW<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*, ::Array<::RootMotion::FinalIK::__FBIKChain__ChildConstraint*>*> value);

  constexpr ::RootMotion::FinalIK::IKConstraintBend*& __cordl_internal_get_bendConstraint();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKConstraintBend*> const& __cordl_internal_get_bendConstraint() const;

  constexpr void __cordl_internal_set_bendConstraint(::RootMotion::FinalIK::IKConstraintBend* value);

  constexpr float_t& __cordl_internal_get_rootLength();

  constexpr float_t const& __cordl_internal_get_rootLength() const;

  constexpr void __cordl_internal_set_rootLength(float_t value);

  constexpr bool& __cordl_internal_get_initiated();

  constexpr bool const& __cordl_internal_get_initiated() const;

  constexpr void __cordl_internal_set_initiated(bool value);

  constexpr float_t& __cordl_internal_get_length();

  constexpr float_t const& __cordl_internal_get_length() const;

  constexpr void __cordl_internal_set_length(float_t value);

  constexpr float_t& __cordl_internal_get_distance();

  constexpr float_t const& __cordl_internal_get_distance() const;

  constexpr void __cordl_internal_set_distance(float_t value);

  constexpr ::RootMotion::FinalIK::__IKSolver__Point*& __cordl_internal_get_p();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__Point*> const& __cordl_internal_get_p() const;

  constexpr void __cordl_internal_set_p(::RootMotion::FinalIK::__IKSolver__Point* value);

  constexpr float_t& __cordl_internal_get_reachForce();

  constexpr float_t const& __cordl_internal_get_reachForce() const;

  constexpr void __cordl_internal_set_reachForce(float_t value);

  constexpr float_t& __cordl_internal_get_pullParentSum();

  constexpr float_t const& __cordl_internal_get_pullParentSum() const;

  constexpr void __cordl_internal_set_pullParentSum(float_t value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_crossFades();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_crossFades() const;

  constexpr void __cordl_internal_set_crossFades(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr float_t& __cordl_internal_get_sqrMag1();

  constexpr float_t const& __cordl_internal_get_sqrMag1() const;

  constexpr void __cordl_internal_set_sqrMag1(float_t value);

  constexpr float_t& __cordl_internal_get_sqrMag2();

  constexpr float_t const& __cordl_internal_get_sqrMag2() const;

  constexpr void __cordl_internal_set_sqrMag2(float_t value);

  constexpr float_t& __cordl_internal_get_sqrMagDif();

  constexpr float_t const& __cordl_internal_get_sqrMagDif() const;

  constexpr void __cordl_internal_set_sqrMagDif(float_t value);

  static inline ::RootMotion::FinalIK::FBIKChain* New_ctor();

  /// @brief Method .ctor, addr 0x12eebd0, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::FBIKChain* New_ctor(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> nodeTransforms);

  /// @brief Method .ctor, addr 0x12eed38, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(float_t pin, float_t pull, ::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> nodeTransforms);

  /// @brief Method SetNodes, addr 0x12eee6c, size 0x118, virtual false, abstract: false, final false
  inline void SetNodes(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> boneTransforms);

  /// @brief Method GetNodeIndex, addr 0x12eef84, size 0xbc, virtual false, abstract: false, final false
  inline int32_t GetNodeIndex(::UnityEngine::Transform* boneTransform);

  /// @brief Method IsValid, addr 0x12ef040, size 0x10c, virtual false, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method Initiate, addr 0x12ef14c, size 0x16c, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method ReadPose, addr 0x12efadc, size 0x3e4, virtual false, abstract: false, final false
  inline void ReadPose(::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);

  /// @brief Method CalculateBoneLengths, addr 0x12ef2b8, size 0x55c, virtual false, abstract: false, final false
  inline void CalculateBoneLengths(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Reach, addr 0x12f00a4, size 0x294, virtual false, abstract: false, final false
  inline void Reach(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Push, addr 0x12f0338, size 0x2d0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 Push(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SolveTrigonometric, addr 0x12f0608, size 0x238, virtual false, abstract: false, final false
  inline void SolveTrigonometric(::RootMotion::FinalIK::IKSolverFullBody* solver, bool calculateBendDirection);

  /// @brief Method Stage1, addr 0x12f0fd0, size 0x2ac, virtual false, abstract: false, final false
  inline void Stage1(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Stage2, addr 0x12f14c8, size 0x104, virtual false, abstract: false, final false
  inline void Stage2(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 position);

  /// @brief Method SolveConstraintSystems, addr 0x12f16c8, size 0xdc, virtual false, abstract: false, final false
  inline void SolveConstraintSystems(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SolveFABRIKJoint, addr 0x12f13b4, size 0x114, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SolveFABRIKJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length);

  /// @brief Method GetDirToBendPoint, addr 0x12f0e70, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDirToBendPoint(::UnityEngine::Vector3 direction, ::UnityEngine::Vector3 bendDirection, float_t directionMagnitude);

  /// @brief Method SolveChildConstraints, addr 0x12f1350, size 0x64, virtual false, abstract: false, final false
  inline void SolveChildConstraints(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SolveLinearConstraint, addr 0x12f17a4, size 0x128, virtual false, abstract: false, final false
  inline void SolveLinearConstraint(::RootMotion::FinalIK::__IKSolver__Node* node1, ::RootMotion::FinalIK::__IKSolver__Node* node2, float_t crossFade, float_t distance);

  /// @brief Method ForwardReach, addr 0x12f127c, size 0xd4, virtual false, abstract: false, final false
  inline void ForwardReach(::UnityEngine::Vector3 position);

  /// @brief Method BackwardReach, addr 0x12f15cc, size 0xfc, virtual false, abstract: false, final false
  inline void BackwardReach(::UnityEngine::Vector3 position);

  // Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FBIKChain(FBIKChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FBIKChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FBIKChain(FBIKChain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FBIKChain();

public:
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
