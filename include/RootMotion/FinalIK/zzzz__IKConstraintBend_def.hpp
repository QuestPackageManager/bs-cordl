#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKConstraintBend)
namespace RootMotion::FinalIK {
class IKSolverFullBody;
}
namespace RootMotion {
class __Warning__Logger;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKConstraintBend;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKConstraintBend);
// Type: RootMotion.FinalIK::IKConstraintBend
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 134, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKConstraintBend*
class CORDL_TYPE IKConstraintBend : public ::System::Object {
public:
  // Declarations
  /// @brief Field <initiated>k__BackingField, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get__initiated_k__BackingField, put = __cordl_internal_set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field bendGoal, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bendGoal, put = __cordl_internal_set_bendGoal))::UnityW<::UnityEngine::Transform> bendGoal;

  /// @brief Field bone1, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bone1, put = __cordl_internal_set_bone1))::UnityW<::UnityEngine::Transform> bone1;

  /// @brief Field bone2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_bone2, put = __cordl_internal_set_bone2))::UnityW<::UnityEngine::Transform> bone2;

  /// @brief Field bone3, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bone3, put = __cordl_internal_set_bone3))::UnityW<::UnityEngine::Transform> bone3;

  /// @brief Field chainIndex1, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_chainIndex1, put = __cordl_internal_set_chainIndex1)) int32_t chainIndex1;

  /// @brief Field chainIndex2, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_chainIndex2, put = __cordl_internal_set_chainIndex2)) int32_t chainIndex2;

  /// @brief Field chainIndex3, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_chainIndex3, put = __cordl_internal_set_chainIndex3)) int32_t chainIndex3;

  /// @brief Field clampF, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_clampF, put = __cordl_internal_set_clampF)) float_t clampF;

  /// @brief Field defaultChildDirection, offset 0x5c, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultChildDirection, put = __cordl_internal_set_defaultChildDirection))::UnityEngine::Vector3 defaultChildDirection;

  /// @brief Field defaultLocalDirection, offset 0x50, size 0xc
  __declspec(property(get = __cordl_internal_get_defaultLocalDirection, put = __cordl_internal_set_defaultLocalDirection))::UnityEngine::Vector3 defaultLocalDirection;

  /// @brief Field direction, offset 0x30, size 0xc
  __declspec(property(get = __cordl_internal_get_direction, put = __cordl_internal_set_direction))::UnityEngine::Vector3 direction;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  /// @brief Field limbOrientationsSet, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get_limbOrientationsSet, put = __cordl_internal_set_limbOrientationsSet)) bool limbOrientationsSet;

  /// @brief Field nodeIndex1, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeIndex1, put = __cordl_internal_set_nodeIndex1)) int32_t nodeIndex1;

  /// @brief Field nodeIndex2, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeIndex2, put = __cordl_internal_set_nodeIndex2)) int32_t nodeIndex2;

  /// @brief Field nodeIndex3, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeIndex3, put = __cordl_internal_set_nodeIndex3)) int32_t nodeIndex3;

  /// @brief Field rotationOffset, offset 0x3c, size 0x10
  __declspec(property(get = __cordl_internal_get_rotationOffset, put = __cordl_internal_set_rotationOffset))::UnityEngine::Quaternion rotationOffset;

  /// @brief Field weight, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_weight, put = __cordl_internal_set_weight)) float_t weight;

  /// @brief Method GetDir, addr 0x135ad84, size 0x630, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method Initiate, addr 0x1359db8, size 0x268, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method IsValid, addr 0x135c0b0, size 0x1d8, virtual false, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolverFullBody* solver, ::RootMotion::__Warning__Logger* logger);

  /// @brief Method LimitBend, addr 0x135c7c4, size 0x3c8, virtual false, abstract: false, final false
  inline void LimitBend(float_t solverWeight, float_t positionWeight);

  static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor();

  static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method OrthoToBone1, addr 0x135c3cc, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);

  /// @brief Method OrthoToLimb, addr 0x135c328, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);

  /// @brief Method SetBones, addr 0x1359dac, size 0xc, virtual false, abstract: false, final false
  inline void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method SetLimbOrientation, addr 0x135c470, size 0x354, virtual false, abstract: false, final false
  inline void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last);

  constexpr bool const& __cordl_internal_get__initiated_k__BackingField() const;

  constexpr bool& __cordl_internal_get__initiated_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bendGoal() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bendGoal();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone1() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone1();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone2() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone2();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_bone3() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_bone3();

  constexpr int32_t const& __cordl_internal_get_chainIndex1() const;

  constexpr int32_t& __cordl_internal_get_chainIndex1();

  constexpr int32_t const& __cordl_internal_get_chainIndex2() const;

  constexpr int32_t& __cordl_internal_get_chainIndex2();

  constexpr int32_t const& __cordl_internal_get_chainIndex3() const;

  constexpr int32_t& __cordl_internal_get_chainIndex3();

  constexpr float_t const& __cordl_internal_get_clampF() const;

  constexpr float_t& __cordl_internal_get_clampF();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultChildDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultChildDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_defaultLocalDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_defaultLocalDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_direction() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_direction();

  constexpr bool const& __cordl_internal_get_limbOrientationsSet() const;

  constexpr bool& __cordl_internal_get_limbOrientationsSet();

  constexpr int32_t const& __cordl_internal_get_nodeIndex1() const;

  constexpr int32_t& __cordl_internal_get_nodeIndex1();

  constexpr int32_t const& __cordl_internal_get_nodeIndex2() const;

  constexpr int32_t& __cordl_internal_get_nodeIndex2();

  constexpr int32_t const& __cordl_internal_get_nodeIndex3() const;

  constexpr int32_t& __cordl_internal_get_nodeIndex3();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationOffset() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationOffset();

  constexpr float_t const& __cordl_internal_get_weight() const;

  constexpr float_t& __cordl_internal_get_weight();

  constexpr void __cordl_internal_set__initiated_k__BackingField(bool value);

  constexpr void __cordl_internal_set_bendGoal(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone1(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone2(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_bone3(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_chainIndex1(int32_t value);

  constexpr void __cordl_internal_set_chainIndex2(int32_t value);

  constexpr void __cordl_internal_set_chainIndex3(int32_t value);

  constexpr void __cordl_internal_set_clampF(float_t value);

  constexpr void __cordl_internal_set_defaultChildDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_defaultLocalDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_direction(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_limbOrientationsSet(bool value);

  constexpr void __cordl_internal_set_nodeIndex1(int32_t value);

  constexpr void __cordl_internal_set_nodeIndex2(int32_t value);

  constexpr void __cordl_internal_set_nodeIndex3(int32_t value);

  constexpr void __cordl_internal_set_rotationOffset(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_weight(float_t value);

  /// @brief Method .ctor, addr 0x1359210, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x135c29c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method get_initiated, addr 0x135c288, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x135c290, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKConstraintBend();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKConstraintBend(IKConstraintBend&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKConstraintBend(IKConstraintBend const&) = delete;

  /// @brief Field bone1, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone1;

  /// @brief Field bone2, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone2;

  /// @brief Field bone3, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bone3;

  /// @brief Field bendGoal, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___bendGoal;

  /// @brief Field direction, offset: 0x30, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___direction;

  /// @brief Field rotationOffset, offset: 0x3c, size: 0x10, def value: None
  ::UnityEngine::Quaternion ___rotationOffset;

  /// @brief Field weight, offset: 0x4c, size: 0x4, def value: None
  float_t ___weight;

  /// @brief Field defaultLocalDirection, offset: 0x50, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultLocalDirection;

  /// @brief Field defaultChildDirection, offset: 0x5c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___defaultChildDirection;

  /// @brief Field clampF, offset: 0x68, size: 0x4, def value: None
  float_t ___clampF;

  /// @brief Field chainIndex1, offset: 0x6c, size: 0x4, def value: None
  int32_t ___chainIndex1;

  /// @brief Field nodeIndex1, offset: 0x70, size: 0x4, def value: None
  int32_t ___nodeIndex1;

  /// @brief Field chainIndex2, offset: 0x74, size: 0x4, def value: None
  int32_t ___chainIndex2;

  /// @brief Field nodeIndex2, offset: 0x78, size: 0x4, def value: None
  int32_t ___nodeIndex2;

  /// @brief Field chainIndex3, offset: 0x7c, size: 0x4, def value: None
  int32_t ___chainIndex3;

  /// @brief Field nodeIndex3, offset: 0x80, size: 0x4, def value: None
  int32_t ___nodeIndex3;

  /// @brief Field <initiated>k__BackingField, offset: 0x84, size: 0x1, def value: None
  bool ____initiated_k__BackingField;

  /// @brief Field limbOrientationsSet, offset: 0x85, size: 0x1, def value: None
  bool ___limbOrientationsSet;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKConstraintBend, 0x88>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___bone1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___bone2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___bone3) == 0x20, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___bendGoal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___direction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___rotationOffset) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___weight) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___defaultLocalDirection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___defaultChildDirection) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___clampF) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___chainIndex1) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___nodeIndex1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___chainIndex2) == 0x74, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___nodeIndex2) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___chainIndex3) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___nodeIndex3) == 0x80, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ____initiated_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKConstraintBend, ___limbOrientationsSet) == 0x85, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKConstraintBend);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKConstraintBend*, "RootMotion.FinalIK", "IKConstraintBend");
