#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BipedIK)
namespace UnityEngine {
struct Quaternion;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace RootMotion::FinalIK {
class BipedIKSolvers;
}
namespace RootMotion {
class BipedReferences;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace RootMotion::FinalIK {
class BipedIK;
}
// Write type traits
MARK_REF_PTR_T(::RootMotion::FinalIK::BipedIK);
// Type: RootMotion.FinalIK::BipedIK
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace RootMotion::FinalIK {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12506))
// CS Name: ::RootMotion.FinalIK::BipedIK*
class CORDL_TYPE BipedIK : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field references, offset 0x38, size 0x8
  __declspec(property(get = __get_references, put = __set_references))::RootMotion::BipedReferences* references;

  /// @brief Field solvers, offset 0x40, size 0x8
  __declspec(property(get = __get_solvers, put = __set_solvers))::RootMotion::FinalIK::BipedIKSolvers* solvers;

  constexpr ::RootMotion::BipedReferences*& __get_references();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BipedReferences*> const& __get_references() const;

  constexpr void __set_references(::RootMotion::BipedReferences* value);

  constexpr ::RootMotion::FinalIK::BipedIKSolvers*& __get_solvers();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::BipedIKSolvers*> const& __get_solvers() const;

  constexpr void __set_solvers(::RootMotion::FinalIK::BipedIKSolvers* value);

  /// @brief Method OpenUserManual, addr 0x124146c, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method OpenScriptReference, addr 0x12414b0, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method SupportGroup, addr 0x12414f4, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method ASThread, addr 0x1241538, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method GetIKPositionWeight, addr 0x124157c, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x1241614, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetIKPositionWeight, addr 0x1241630, size 0x2c, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t weight);

  /// @brief Method SetIKRotationWeight, addr 0x124165c, size 0x2c, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t weight);

  /// @brief Method SetIKPosition, addr 0x1241688, size 0x3c, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 IKPosition);

  /// @brief Method SetIKRotation, addr 0x12416c4, size 0x40, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion IKRotation);

  /// @brief Method GetIKPosition, addr 0x1241704, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x1241724, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method SetLookAtWeight, addr 0x1241744, size 0x24, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes);

  /// @brief Method SetLookAtPosition, addr 0x1241768, size 0x28, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetSpinePosition, addr 0x1241790, size 0x28, virtual false, abstract: false, final false
  inline void SetSpinePosition(::UnityEngine::Vector3 spinePosition);

  /// @brief Method SetSpineWeight, addr 0x12417b8, size 0x24, virtual false, abstract: false, final false
  inline void SetSpineWeight(float_t weight);

  /// @brief Method GetGoalIK, addr 0x1241598, size 0x7c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolverLimb* GetGoalIK(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method InitiateBipedIK, addr 0x12417dc, size 0xc, virtual false, abstract: false, final false
  inline void InitiateBipedIK();

  /// @brief Method UpdateBipedIK, addr 0x12417e8, size 0xc, virtual false, abstract: false, final false
  inline void UpdateBipedIK();

  /// @brief Method SetToDefaults, addr 0x12417f4, size 0x13c, virtual false, abstract: false, final false
  inline void SetToDefaults();

  /// @brief Method FixTransforms, addr 0x1241a60, size 0x9c, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method InitiateSolver, addr 0x1241afc, size 0x1b0, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method UpdateSolver, addr 0x1241e1c, size 0x174, virtual true, abstract: false, final false
  inline void UpdateSolver();

  /// @brief Method LogWarning, addr 0x1242288, size 0x24, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  static inline ::RootMotion::FinalIK::BipedIK* New_ctor();

  /// @brief Method .ctor, addr 0x12422ac, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedIK(BipedIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedIK(BipedIK const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedIK();

public:
  /// @brief Field references, offset: 0x38, size: 0x8, def value: None
  ::RootMotion::BipedReferences* ___references;

  /// @brief Field solvers, offset: 0x40, size: 0x8, def value: None
  ::RootMotion::FinalIK::BipedIKSolvers* ___solvers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::FinalIK::BipedIK, 0x48>, "Size mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIK, ___references) == 0x38, "Offset mismatch!");

static_assert(offsetof(::RootMotion::FinalIK::BipedIK, ___solvers) == 0x40, "Offset mismatch!");

} // namespace RootMotion::FinalIK
NEED_NO_BOX(::RootMotion::FinalIK::BipedIK);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::FinalIK::BipedIK*, "RootMotion.FinalIK", "BipedIK");
