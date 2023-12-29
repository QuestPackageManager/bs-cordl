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
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace RootMotion::FinalIK {
class __IKSolver__Bone;
}
namespace RootMotion::FinalIK {
class __IKSolver__Point;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10176)), TypeDefinitionIndex(TypeDefinitionIndex(12492))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12502))
// CS Name: ::RootMotion.FinalIK::IKSolverHeuristic*
class CORDL_TYPE IKSolverHeuristic : public ::RootMotion::FinalIK::IKSolver {
public:
  // Declarations
  /// @brief Field target, offset 0x58, size 0x8
  __declspec(property(get = __get_target, put = __set_target))::UnityEngine::Transform* target;

  /// @brief Field tolerance, offset 0x60, size 0x4
  __declspec(property(get = __get_tolerance, put = __set_tolerance)) float_t tolerance;

  /// @brief Field maxIterations, offset 0x64, size 0x4
  __declspec(property(get = __get_maxIterations, put = __set_maxIterations)) int32_t maxIterations;

  /// @brief Field useRotationLimits, offset 0x68, size 0x1
  __declspec(property(get = __get_useRotationLimits, put = __set_useRotationLimits)) bool useRotationLimits;

  /// @brief Field XY, offset 0x69, size 0x1
  __declspec(property(get = __get_XY, put = __set_XY)) bool XY;

  /// @brief Field bones, offset 0x70, size 0x8
  __declspec(property(get = __get_bones, put = __set_bones))::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> bones;

  /// @brief Field lastLocalDirection, offset 0x78, size 0xc
  __declspec(property(get = __get_lastLocalDirection, put = __set_lastLocalDirection))::UnityEngine::Vector3 lastLocalDirection;

  /// @brief Field chainLength, offset 0x84, size 0x4
  __declspec(property(get = __get_chainLength, put = __set_chainLength)) float_t chainLength;

  __declspec(property(get = get_minBones)) int32_t minBones;

  __declspec(property(get = get_boneLengthCanBeZero)) bool boneLengthCanBeZero;

  __declspec(property(get = get_allowCommonParent)) bool allowCommonParent;

  __declspec(property(get = get_localDirection))::UnityEngine::Vector3 localDirection;

  __declspec(property(get = get_positionOffset)) float_t positionOffset;

  constexpr ::UnityEngine::Transform*& __get_target();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> const& __get_target() const;

  constexpr void __set_target(::UnityEngine::Transform* value);

  constexpr float_t& __get_tolerance();

  constexpr float_t const& __get_tolerance() const;

  constexpr void __set_tolerance(float_t value);

  constexpr int32_t& __get_maxIterations();

  constexpr int32_t const& __get_maxIterations() const;

  constexpr void __set_maxIterations(int32_t value);

  constexpr bool& __get_useRotationLimits();

  constexpr bool const& __get_useRotationLimits() const;

  constexpr void __set_useRotationLimits(bool value);

  constexpr bool& __get_XY();

  constexpr bool const& __get_XY() const;

  constexpr void __set_XY(bool value);

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*>& __get_bones();

  constexpr ::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> const& __get_bones() const;

  constexpr void __set_bones(::ArrayW<::RootMotion::FinalIK::__IKSolver__Bone*, ::Array<::RootMotion::FinalIK::__IKSolver__Bone*>*> value);

  constexpr ::UnityEngine::Vector3& __get_lastLocalDirection();

  constexpr ::UnityEngine::Vector3 const& __get_lastLocalDirection() const;

  constexpr void __set_lastLocalDirection(::UnityEngine::Vector3 value);

  constexpr float_t& __get_chainLength();

  constexpr float_t const& __get_chainLength() const;

  constexpr void __set_chainLength(float_t value);

  /// @brief Method SetChain addr 0x11f9a00 size 0x17c virtual false final false
  inline bool SetChain(::ArrayW<::UnityEngine::Transform*, ::Array<::UnityEngine::Transform*>*> hierarchy, ::UnityEngine::Transform* root);

  /// @brief Method AddBone addr 0x11f9b7c size 0x12c virtual false final false
  inline void AddBone(::UnityEngine::Transform* bone);

  /// @brief Method StoreDefaultLocalState addr 0x11f9ca8 size 0x5c virtual true final false
  inline void StoreDefaultLocalState();

  /// @brief Method FixTransforms addr 0x11f9d04 size 0x70 virtual true final false
  inline void FixTransforms();

  /// @brief Method IsValid addr 0x11f9d74 size 0x3c4 virtual true final false
  inline bool IsValid(ByRef<::StringW> message);

  /// @brief Method GetPoints addr 0x11fa138 size 0x8 virtual true final false
  inline ::ArrayW<::RootMotion::FinalIK::__IKSolver__Point*, ::Array<::RootMotion::FinalIK::__IKSolver__Point*>*> GetPoints();

  /// @brief Method GetPoint addr 0x11fa140 size 0xdc virtual true final false
  inline ::RootMotion::FinalIK::__IKSolver__Point* GetPoint(::UnityEngine::Transform* transform);

  /// @brief Method get_minBones addr 0x11fa21c size 0x8 virtual true final false
  inline int32_t get_minBones();

  /// @brief Method get_boneLengthCanBeZero addr 0x11fa224 size 0x8 virtual true final false
  inline bool get_boneLengthCanBeZero();

  /// @brief Method get_allowCommonParent addr 0x11fa22c size 0x8 virtual true final false
  inline bool get_allowCommonParent();

  /// @brief Method OnInitiate addr 0x11fa234 size 0x4 virtual true final false
  inline void OnInitiate();

  /// @brief Method OnUpdate addr 0x11fa238 size 0x4 virtual true final false
  inline void OnUpdate();

  /// @brief Method InitiateBones addr 0x11f1b5c size 0x488 virtual false final false
  inline void InitiateBones();

  /// @brief Method get_localDirection addr 0x11fa23c size 0xbc virtual true final false
  inline ::UnityEngine::Vector3 get_localDirection();

  /// @brief Method get_positionOffset addr 0x11f2670 size 0x48 virtual false final false
  inline float_t get_positionOffset();

  /// @brief Method GetSingularityOffset addr 0x11f22c4 size 0x3ac virtual false final false
  inline ::UnityEngine::Vector3 GetSingularityOffset();

  /// @brief Method SingularityDetected addr 0x11fa2f8 size 0x294 virtual false final false
  inline bool SingularityDetected();

  static inline ::RootMotion::FinalIK::IKSolverHeuristic* New_ctor();

  /// @brief Method .ctor addr 0x11f0c30 size 0x74 virtual false final false
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
  ::UnityEngine::Transform* ___target;

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
