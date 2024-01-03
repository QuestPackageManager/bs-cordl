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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion {
class __Warning__Logger;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12551))
// CS Name: ::RootMotion.FinalIK::IKConstraintBend*
class CORDL_TYPE IKConstraintBend : public ::System::Object {
public:
  // Declarations
  /// @brief Field bone1, offset 0x10, size 0x8
  __declspec(property(get = __get_bone1, put = __set_bone1))::UnityEngine::Transform* bone1;

  /// @brief Field bone2, offset 0x18, size 0x8
  __declspec(property(get = __get_bone2, put = __set_bone2))::UnityEngine::Transform* bone2;

  /// @brief Field bone3, offset 0x20, size 0x8
  __declspec(property(get = __get_bone3, put = __set_bone3))::UnityEngine::Transform* bone3;

  /// @brief Field bendGoal, offset 0x28, size 0x8
  __declspec(property(get = __get_bendGoal, put = __set_bendGoal))::UnityEngine::Transform* bendGoal;

  /// @brief Field direction, offset 0x30, size 0xc
  __declspec(property(get = __get_direction, put = __set_direction))::UnityEngine::Vector3 direction;

  /// @brief Field rotationOffset, offset 0x3c, size 0x10
  __declspec(property(get = __get_rotationOffset, put = __set_rotationOffset))::UnityEngine::Quaternion rotationOffset;

  /// @brief Field weight, offset 0x4c, size 0x4
  __declspec(property(get = __get_weight, put = __set_weight)) float_t weight;

  /// @brief Field defaultLocalDirection, offset 0x50, size 0xc
  __declspec(property(get = __get_defaultLocalDirection, put = __set_defaultLocalDirection))::UnityEngine::Vector3 defaultLocalDirection;

  /// @brief Field defaultChildDirection, offset 0x5c, size 0xc
  __declspec(property(get = __get_defaultChildDirection, put = __set_defaultChildDirection))::UnityEngine::Vector3 defaultChildDirection;

  /// @brief Field clampF, offset 0x68, size 0x4
  __declspec(property(get = __get_clampF, put = __set_clampF)) float_t clampF;

  /// @brief Field chainIndex1, offset 0x6c, size 0x4
  __declspec(property(get = __get_chainIndex1, put = __set_chainIndex1)) int32_t chainIndex1;

  /// @brief Field nodeIndex1, offset 0x70, size 0x4
  __declspec(property(get = __get_nodeIndex1, put = __set_nodeIndex1)) int32_t nodeIndex1;

  /// @brief Field chainIndex2, offset 0x74, size 0x4
  __declspec(property(get = __get_chainIndex2, put = __set_chainIndex2)) int32_t chainIndex2;

  /// @brief Field nodeIndex2, offset 0x78, size 0x4
  __declspec(property(get = __get_nodeIndex2, put = __set_nodeIndex2)) int32_t nodeIndex2;

  /// @brief Field chainIndex3, offset 0x7c, size 0x4
  __declspec(property(get = __get_chainIndex3, put = __set_chainIndex3)) int32_t chainIndex3;

  /// @brief Field nodeIndex3, offset 0x80, size 0x4
  __declspec(property(get = __get_nodeIndex3, put = __set_nodeIndex3)) int32_t nodeIndex3;

  /// @brief Field <initiated>k__BackingField, offset 0x84, size 0x1
  __declspec(property(get = __get__initiated_k__BackingField, put = __set__initiated_k__BackingField)) bool _initiated_k__BackingField;

  /// @brief Field limbOrientationsSet, offset 0x85, size 0x1
  __declspec(property(get = __get_limbOrientationsSet, put = __set_limbOrientationsSet)) bool limbOrientationsSet;

  __declspec(property(get = get_initiated, put = set_initiated)) bool initiated;

  constexpr ::UnityEngine::Transform*& __get_bone1();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone1() const;

  constexpr void __set_bone1(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_bone2();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone2() const;

  constexpr void __set_bone2(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_bone3();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bone3() const;

  constexpr void __set_bone3(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Transform*& __get_bendGoal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_bendGoal() const;

  constexpr void __set_bendGoal(::UnityEngine::Transform* value);

  constexpr ::UnityEngine::Vector3& __get_direction();

  constexpr ::UnityEngine::Vector3 const& __get_direction() const;

  constexpr void __set_direction(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Quaternion& __get_rotationOffset();

  constexpr ::UnityEngine::Quaternion const& __get_rotationOffset() const;

  constexpr void __set_rotationOffset(::UnityEngine::Quaternion value);

  constexpr float_t& __get_weight();

  constexpr float_t const& __get_weight() const;

  constexpr void __set_weight(float_t value);

  constexpr ::UnityEngine::Vector3& __get_defaultLocalDirection();

  constexpr ::UnityEngine::Vector3 const& __get_defaultLocalDirection() const;

  constexpr void __set_defaultLocalDirection(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get_defaultChildDirection();

  constexpr ::UnityEngine::Vector3 const& __get_defaultChildDirection() const;

  constexpr void __set_defaultChildDirection(::UnityEngine::Vector3 value);

  constexpr float_t& __get_clampF();

  constexpr float_t const& __get_clampF() const;

  constexpr void __set_clampF(float_t value);

  constexpr int32_t& __get_chainIndex1();

  constexpr int32_t const& __get_chainIndex1() const;

  constexpr void __set_chainIndex1(int32_t value);

  constexpr int32_t& __get_nodeIndex1();

  constexpr int32_t const& __get_nodeIndex1() const;

  constexpr void __set_nodeIndex1(int32_t value);

  constexpr int32_t& __get_chainIndex2();

  constexpr int32_t const& __get_chainIndex2() const;

  constexpr void __set_chainIndex2(int32_t value);

  constexpr int32_t& __get_nodeIndex2();

  constexpr int32_t const& __get_nodeIndex2() const;

  constexpr void __set_nodeIndex2(int32_t value);

  constexpr int32_t& __get_chainIndex3();

  constexpr int32_t const& __get_chainIndex3() const;

  constexpr void __set_chainIndex3(int32_t value);

  constexpr int32_t& __get_nodeIndex3();

  constexpr int32_t const& __get_nodeIndex3() const;

  constexpr void __set_nodeIndex3(int32_t value);

  constexpr bool& __get__initiated_k__BackingField();

  constexpr bool const& __get__initiated_k__BackingField() const;

  constexpr void __set__initiated_k__BackingField(bool value);

  constexpr bool& __get_limbOrientationsSet();

  constexpr bool const& __get_limbOrientationsSet() const;

  constexpr void __set_limbOrientationsSet(bool value);

  /// @brief Method IsValid, addr 0x1257abc, size 0x1d8, virtual false, abstract: false, final false
  inline bool IsValid(::RootMotion::FinalIK::IKSolverFullBody* solver, ::RootMotion::__Warning__Logger* logger);

  /// @brief Method get_initiated, addr 0x1257c94, size 0x8, virtual false, abstract: false, final false
  inline bool get_initiated();

  /// @brief Method set_initiated, addr 0x1257c9c, size 0xc, virtual false, abstract: false, final false
  inline void set_initiated(bool value);

  static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor();

  /// @brief Method .ctor, addr 0x1254c1c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::RootMotion::FinalIK::IKConstraintBend* New_ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method .ctor, addr 0x1257ca8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method SetBones, addr 0x12557b8, size 0xc, virtual false, abstract: false, final false
  inline void SetBones(::UnityEngine::Transform* bone1, ::UnityEngine::Transform* bone2, ::UnityEngine::Transform* bone3);

  /// @brief Method Initiate, addr 0x12557c4, size 0x268, virtual false, abstract: false, final false
  inline void Initiate(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method SetLimbOrientation, addr 0x1257e7c, size 0x354, virtual false, abstract: false, final false
  inline void SetLimbOrientation(::UnityEngine::Vector3 upper, ::UnityEngine::Vector3 lower, ::UnityEngine::Vector3 last);

  /// @brief Method LimitBend, addr 0x12581d0, size 0x13c8, virtual false, abstract: false, final false
  inline void LimitBend(float_t solverWeight, float_t positionWeight);

  /// @brief Method GetDir, addr 0x1256790, size 0x630, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetDir(::RootMotion::FinalIK::IKSolverFullBody* solver);

  /// @brief Method OrthoToLimb, addr 0x1257d34, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 OrthoToLimb(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);

  /// @brief Method OrthoToBone1, addr 0x1257dd8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 OrthoToBone1(::RootMotion::FinalIK::IKSolverFullBody* solver, ::UnityEngine::Vector3 tangent);

  // Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKConstraintBend(IKConstraintBend&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKConstraintBend", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKConstraintBend(IKConstraintBend const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKConstraintBend();

public:
  /// @brief Field bone1, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone1;

  /// @brief Field bone2, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone2;

  /// @brief Field bone3, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bone3;

  /// @brief Field bendGoal, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Transform* ___bendGoal;

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
