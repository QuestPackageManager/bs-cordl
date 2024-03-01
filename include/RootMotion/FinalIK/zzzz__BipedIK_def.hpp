#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "RootMotion/zzzz__SolverManager_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BipedIK)
namespace RootMotion::FinalIK {
class BipedIKSolvers;
}
namespace RootMotion::FinalIK {
class IKSolverLimb;
}
namespace RootMotion {
class BipedReferences;
}
namespace UnityEngine {
struct AvatarIKGoal;
}
namespace UnityEngine {
struct Quaternion;
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
// CS Name: ::RootMotion.FinalIK::BipedIK*
class CORDL_TYPE BipedIK : public ::RootMotion::SolverManager {
public:
  // Declarations
  /// @brief Field references, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_references, put = __cordl_internal_set_references))::RootMotion::BipedReferences* references;

  /// @brief Field solvers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_solvers, put = __cordl_internal_set_solvers))::RootMotion::FinalIK::BipedIKSolvers* solvers;

  /// @brief Method ASThread, addr 0x131d5d4, size 0x44, virtual false, abstract: false, final false
  inline void ASThread();

  /// @brief Method FixTransforms, addr 0x131dafc, size 0x9c, virtual true, abstract: false, final false
  inline void FixTransforms();

  /// @brief Method GetGoalIK, addr 0x131d634, size 0x7c, virtual false, abstract: false, final false
  inline ::RootMotion::FinalIK::IKSolverLimb* GetGoalIK(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPosition, addr 0x131d7a0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetIKPosition(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKPositionWeight, addr 0x131d618, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetIKPositionWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotation, addr 0x131d7c0, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion GetIKRotation(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method GetIKRotationWeight, addr 0x131d6b0, size 0x1c, virtual false, abstract: false, final false
  inline float_t GetIKRotationWeight(::UnityEngine::AvatarIKGoal goal);

  /// @brief Method InitiateBipedIK, addr 0x131d878, size 0xc, virtual false, abstract: false, final false
  inline void InitiateBipedIK();

  /// @brief Method InitiateSolver, addr 0x131db98, size 0x1b0, virtual true, abstract: false, final false
  inline void InitiateSolver();

  /// @brief Method LogWarning, addr 0x131e324, size 0x24, virtual false, abstract: false, final false
  inline void LogWarning(::StringW message);

  static inline ::RootMotion::FinalIK::BipedIK* New_ctor();

  /// @brief Method OpenScriptReference, addr 0x131d54c, size 0x44, virtual false, abstract: false, final false
  inline void OpenScriptReference();

  /// @brief Method OpenUserManual, addr 0x131d508, size 0x44, virtual false, abstract: false, final false
  inline void OpenUserManual();

  /// @brief Method SetIKPosition, addr 0x131d724, size 0x3c, virtual false, abstract: false, final false
  inline void SetIKPosition(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Vector3 IKPosition);

  /// @brief Method SetIKPositionWeight, addr 0x131d6cc, size 0x2c, virtual false, abstract: false, final false
  inline void SetIKPositionWeight(::UnityEngine::AvatarIKGoal goal, float_t weight);

  /// @brief Method SetIKRotation, addr 0x131d760, size 0x40, virtual false, abstract: false, final false
  inline void SetIKRotation(::UnityEngine::AvatarIKGoal goal, ::UnityEngine::Quaternion IKRotation);

  /// @brief Method SetIKRotationWeight, addr 0x131d6f8, size 0x2c, virtual false, abstract: false, final false
  inline void SetIKRotationWeight(::UnityEngine::AvatarIKGoal goal, float_t weight);

  /// @brief Method SetLookAtPosition, addr 0x131d804, size 0x28, virtual false, abstract: false, final false
  inline void SetLookAtPosition(::UnityEngine::Vector3 lookAtPosition);

  /// @brief Method SetLookAtWeight, addr 0x131d7e0, size 0x24, virtual false, abstract: false, final false
  inline void SetLookAtWeight(float_t weight, float_t bodyWeight, float_t headWeight, float_t eyesWeight, float_t clampWeight, float_t clampWeightHead, float_t clampWeightEyes);

  /// @brief Method SetSpinePosition, addr 0x131d82c, size 0x28, virtual false, abstract: false, final false
  inline void SetSpinePosition(::UnityEngine::Vector3 spinePosition);

  /// @brief Method SetSpineWeight, addr 0x131d854, size 0x24, virtual false, abstract: false, final false
  inline void SetSpineWeight(float_t weight);

  /// @brief Method SetToDefaults, addr 0x131d890, size 0x13c, virtual false, abstract: false, final false
  inline void SetToDefaults();

  /// @brief Method SupportGroup, addr 0x131d590, size 0x44, virtual false, abstract: false, final false
  inline void SupportGroup();

  /// @brief Method UpdateBipedIK, addr 0x131d884, size 0xc, virtual false, abstract: false, final false
  inline void UpdateBipedIK();

  /// @brief Method UpdateSolver, addr 0x131deb8, size 0x174, virtual true, abstract: false, final false
  inline void UpdateSolver();

  constexpr ::RootMotion::BipedReferences*& __cordl_internal_get_references();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::BipedReferences*> const& __cordl_internal_get_references() const;

  constexpr ::RootMotion::FinalIK::BipedIKSolvers*& __cordl_internal_get_solvers();

  constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::BipedIKSolvers*> const& __cordl_internal_get_solvers() const;

  constexpr void __cordl_internal_set_references(::RootMotion::BipedReferences* value);

  constexpr void __cordl_internal_set_solvers(::RootMotion::FinalIK::BipedIKSolvers* value);

  /// @brief Method .ctor, addr 0x131e348, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BipedIK();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BipedIK(BipedIK&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BipedIK", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BipedIK(BipedIK const&) = delete;

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
