#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/FinalIK/zzzz__IKSolverHeuristic_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IKSolverFABRIK)
namespace RootMotion::FinalIK {
class __IKSolver__IterationDelegate;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class IKSolverFABRIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::IKSolverFABRIK);
// Type: RootMotion.FinalIK::IKSolverFABRIK
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// CS Name: ::RootMotion.FinalIK::IKSolverFABRIK*
class CORDL_TYPE IKSolverFABRIK : public ::RootMotion::FinalIK::IKSolverHeuristic {
public:
  // Declarations
  /// @brief Field OnPreIteration, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_OnPreIteration, put = __cordl_internal_set_OnPreIteration))::RootMotion::FinalIK::__IKSolver__IterationDelegate* OnPreIteration;

  __declspec(property(get = get_boneLengthCanBeZero)) bool boneLengthCanBeZero;

  /// @brief Field limitedBones, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_limitedBones, put = __cordl_internal_set_limitedBones))::ArrayW<bool, ::Array<bool>*> limitedBones;

  /// @brief Field solverLocalPositions, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_solverLocalPositions,
                      put = __cordl_internal_set_solverLocalPositions))::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> solverLocalPositions;

  /// @brief Method BackwardReach, addr 0x1366d24, size 0x10, virtual false, abstract: false, final false
  inline void BackwardReach(::UnityEngine::Vector3 position);

  /// @brief Method BackwardReachLimited, addr 0x1368198, size 0x4b0, virtual false, abstract: false, final false
  inline void BackwardReachLimited(::UnityEngine::Vector3 position);

  /// @brief Method BackwardReachUnlimited, addr 0x1368648, size 0xb8, virtual false, abstract: false, final false
  inline void BackwardReachUnlimited(::UnityEngine::Vector3 position);

  /// @brief Method ForwardReach, addr 0x1366ae0, size 0x16c, virtual false, abstract: false, final false
  inline void ForwardReach(::UnityEngine::Vector3 position);

  /// @brief Method GetIKPosition, addr 0x1366d7c, size 0x88, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition();

  /// @brief Method GetLimitedRotation, addr 0x1367fd8, size 0x1c0, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetLimitedRotation(int32_t index, ::UnityEngine::Quaternion q, ByRef<bool> changed);

  /// @brief Method GetParentSolverPosition, addr 0x13671b8, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetParentSolverPosition(int32_t index);

  /// @brief Method GetParentSolverRotation, addr 0x1367074, size 0x144, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetParentSolverRotation(int32_t index);

  /// @brief Method LimitForward, addr 0x13678d8, size 0x410, virtual false, abstract: false, final false
  inline void LimitForward(int32_t rotateBone, int32_t limitBone);

  /// @brief Method MapToSolverPositions, addr 0x1367758, size 0xd0, virtual false, abstract: false, final false
  inline void MapToSolverPositions();

  /// @brief Method MapToSolverPositionsLimited, addr 0x1367828, size 0xb0, virtual false, abstract: false, final false
  inline void MapToSolverPositionsLimited();

  static inline ::RootMotion::FinalIK::IKSolverFABRIK* New_ctor();

  /// @brief Method OnInitiate, addr 0x1366e04, size 0x270, virtual true, abstract: false, final false
  inline void OnInitiate();

  /// @brief Method OnPostSolve, addr 0x1366d34, size 0x48, virtual false, abstract: false, final false
  inline void OnPostSolve();

  /// @brief Method OnPreSolve, addr 0x1366744, size 0x39c, virtual false, abstract: false, final false
  inline void OnPreSolve();

  /// @brief Method OnUpdate, addr 0x13672fc, size 0x2f0, virtual true, abstract: false, final false
  inline void OnUpdate();

  /// @brief Method Solve, addr 0x13675ec, size 0x48, virtual false, abstract: false, final false
  inline void Solve(::UnityEngine::Vector3 targetPosition);

  /// @brief Method SolveBackward, addr 0x1366c4c, size 0xd8, virtual false, abstract: false, final false
  inline void SolveBackward(::UnityEngine::Vector3 position);

  /// @brief Method SolveForward, addr 0x136666c, size 0xd8, virtual false, abstract: false, final false
  inline void SolveForward(::UnityEngine::Vector3 position);

  /// @brief Method SolveJoint, addr 0x136763c, size 0x11c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 SolveJoint(::UnityEngine::Vector3 pos1, ::UnityEngine::Vector3 pos2, float_t length);

  /// @brief Method SolverMove, addr 0x1367ce8, size 0x68, virtual false, abstract: false, final false
  inline void SolverMove(int32_t index, ::UnityEngine::Vector3 offset);

  /// @brief Method SolverMoveChildrenAroundPoint, addr 0x1367ee8, size 0xf0, virtual false, abstract: false, final false
  inline void SolverMoveChildrenAroundPoint(int32_t index, ::UnityEngine::Quaternion rotation);

  /// @brief Method SolverRotate, addr 0x1367d50, size 0xd0, virtual false, abstract: false, final false
  inline void SolverRotate(int32_t index, ::UnityEngine::Quaternion rotation, bool recursive);

  /// @brief Method SolverRotateChildren, addr 0x1367e20, size 0xc8, virtual false, abstract: false, final false
  inline void SolverRotateChildren(int32_t index, ::UnityEngine::Quaternion rotation);

  constexpr ::RootMotion::FinalIK::__IKSolver__IterationDelegate*& __cordl_internal_get_OnPreIteration();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::__IKSolver__IterationDelegate*> const& __cordl_internal_get_OnPreIteration() const;

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_limitedBones() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_limitedBones();

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& __cordl_internal_get_solverLocalPositions() const;

  constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& __cordl_internal_get_solverLocalPositions();

  constexpr void __cordl_internal_set_OnPreIteration(::RootMotion::FinalIK::__IKSolver__IterationDelegate* value);

  constexpr void __cordl_internal_set_limitedBones(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_solverLocalPositions(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  /// @brief Method .ctor, addr 0x1368700, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_boneLengthCanBeZero, addr 0x1367634, size 0x8, virtual true, abstract: false, final false
  inline bool get_boneLengthCanBeZero();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IKSolverFABRIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IKSolverFABRIK(IKSolverFABRIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IKSolverFABRIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKSolverFABRIK(IKSolverFABRIK const&) = delete;

  /// @brief Field OnPreIteration, offset: 0x88, size: 0x8, def value: None
  ::RootMotion::FinalIK::__IKSolver__IterationDelegate* ___OnPreIteration;

  /// @brief Field limitedBones, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___limitedBones;

  /// @brief Field solverLocalPositions, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> ___solverLocalPositions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::IKSolverFABRIK, 0xa0>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIK, ___OnPreIteration) == 0x88, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIK, ___limitedBones) == 0x90, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::IKSolverFABRIK, ___solverLocalPositions) == 0x98, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::IKSolverFABRIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::IKSolverFABRIK*, "RootMotion.FinalIK", "IKSolverFABRIK");
