#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverHeuristic)
namespace RootMotion::FinalIK {
class __IKSolver__Bone;
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
class IKSolverHeuristic;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverHeuristic);
// Type: RootMotion.FinalIK::IKSolverHeuristic
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8993)), TypeDefinitionIndex(TypeDefinitionIndex(12462))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12472))
// CS Name: ::RootMotion.FinalIK::IKSolverHeuristic*
class CORDL_TYPE IKSolverHeuristic : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target))::UnityW<::UnityEngine::Transform> target;

  /// @brief Field tolerance, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_tolerance, put = __cordl_internal_set_tolerance)) float_t tolerance;

  /// @brief Field maxIterations, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_maxIterations, put = __cordl_internal_set_maxIterations)) int32_t maxIterations;

  /// @brief Field useRotationLimits, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_useRotationLimits, put = __cordl_internal_set_useRotationLimits)) bool useRotationLimits;

  /// @brief Field XY, offset 0x69, size 0x1
  __declspec(property(get = __cordl_internal_get_XY, put = __cordl_internal_set_XY)) bool XY;

  /// @brief Field bones, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_bones, put = __cordl_internal_set_bones))::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> bones;

  /// @brief Field lastLocalDirection, offset 0x78, size 0xc
  __declspec(property(get = __cordl_internal_get_lastLocalDirection, put = __cordl_internal_set_lastLocalDirection))::UnityEngine::Vector3 lastLocalDirection;

  /// @brief Field chainLength, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_chainLength, put = __cordl_internal_set_chainLength)) float_t chainLength;

  __declspec(property(get = get_minBones)) int32_t minBones;

  __declspec(property(get = get_boneLengthCanBeZero)) bool boneLengthCanBeZero;

  __declspec(property(get = get_allowCommonParent)) bool allowCommonParent;

  __declspec(property(get = get_localDirection))::UnityEngine::Vector3 localDirection;

  __declspec(property(get = get_positionOffset)) float_t positionOffset;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_target();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_target() const;

  constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::Transform> value);

  constexpr float_t& __cordl_internal_get_tolerance();

  constexpr float_t const& __cordl_internal_get_tolerance() const;

  constexpr void __cordl_internal_set_tolerance(float_t value);

  constexpr int32_t& __cordl_internal_get_maxIterations();

  constexpr int32_t const& __cordl_internal_get_maxIterations() const;

  constexpr void __cordl_internal_set_maxIterations(int32_t value);

  constexpr bool& __cordl_internal_get_useRotationLimits();

  constexpr bool const& __cordl_internal_get_useRotationLimits() const;

  constexpr void __cordl_internal_set_useRotationLimits(bool value);

  constexpr bool& __cordl_internal_get_XY();

  constexpr bool const& __cordl_internal_get_XY() const;

  constexpr void __cordl_internal_set_XY(bool value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>& __cordl_internal_get_bones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> const& __cordl_internal_get_bones() const;

  constexpr void __cordl_internal_set_bones(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> value);

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastLocalDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastLocalDirection() const;

  constexpr void __cordl_internal_set_lastLocalDirection(::UnityEngine::Vector3 value);

  constexpr float_t& __cordl_internal_get_chainLength();

  constexpr float_t const& __cordl_internal_get_chainLength() const;

  constexpr void __cordl_internal_set_chainLength(float_t value);

  /// @brief Method SetChain, addr 0x1302ddc, size 0x17c, virtual false, abstract: false, final false
  inline bool SetChain(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> hierarchy, ::UnityEngine::Transform* root);

  /// @brief Method AddBone, addr 0x1302f58, size 0x12c, virtual false, abstract: false, final false
  inline void AddBone(::UnityEngine::Transform* bone);

  /// @brief Method StoreDefaultLocalState, addr 0x1303084, size 0x5c, virtual true, abstract: false, final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms, addr 0x13030e0, size 0x70, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method IsValid, addr 0x1303150, size 0x3c4, virtual true, abstract: false, final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method GetPoints, addr 0x1303514, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint, addr 0x130351c, size 0xdc, virtual true, abstract: false, final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method get_minBones, addr 0x13035f8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_minBones();

  /// @brief Method get_boneLengthCanBeZero, addr 0x1303600, size 0x8, virtual true, abstract: false, final false
  inline bool get_boneLengthCanBeZero();

  /// @brief Method get_allowCommonParent, addr 0x1303608, size 0x8, virtual true, abstract: false, final false
  inline bool get_allowCommonParent();

  /// @brief Method OnInitiate, addr 0x1303610, size 0x4, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnUpdate, addr 0x1303614, size 0x4, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method InitiateBones, addr 0x12faf38, size 0x488, virtual false, abstract: false, final false
  inline void InitiateBones();

  /// @brief Method get_localDirection, addr 0x1303618, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localDirection();

  /// @brief Method get_positionOffset, addr 0x12fba4c, size 0x48, virtual false, abstract: false, final false
  inline float_t get_positionOffset();

  /// @brief Method GetSingularityOffset, addr 0x12fb6a0, size 0x3ac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetSingularityOffset();

  /// @brief Method SingularityDetected, addr 0x13036d4, size 0x294, virtual false, abstract: false, final false
  inline bool SingularityDetected();

  static inline ::RootMotion::FinalIK::IKSolverHeuristic* New_ctor();

  /// @brief Method .ctor, addr 0x12fa00c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverHeuristic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverHeuristic(IKSolverHeuristic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverHeuristic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverHeuristic(IKSolverHeuristic const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverHeuristic();

public:
  /// @brief Field target, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___target;

  /// @brief Field tolerance, offset: 0x60, size: 0x4, def value: None
  float_t ___tolerance;

  /// @brief Field maxIterations, offset: 0x64, size: 0x4, def value: None
  int32_t ___maxIterations;

  /// @brief Field useRotationLimits, offset: 0x68, size: 0x1, def value: None
  bool ___useRotationLimits;

  /// @brief Field XY, offset: 0x69, size: 0x1, def value: None
  bool ___XY;

  /// @brief Field bones, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> ___bones;

  /// @brief Field lastLocalDirection, offset: 0x78, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___lastLocalDirection;

  /// @brief Field chainLength, offset: 0x84, size: 0x4, def value: None
  float_t ___chainLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverHeuristic, 0x88>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___target) == 0x58, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___tolerance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___maxIterations) == 0x64, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___useRotationLimits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___XY) == 0x69, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___bones) == 0x70, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___lastLocalDirection) == 0x78, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverHeuristic, ___chainLength) == 0x84, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverHeuristic);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverHeuristic*, "RootMotion.FinalIK", "IKSolverHeuristic");
